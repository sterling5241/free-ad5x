#!/bin/bash
# Ghidra: import + analyse firmwareExe once, then decompile the functions that use given strings
set -e
R=/mnt/c/Users/sterl/Desktop/free-ad5x/loadcell
export JAVA_HOME=$(ls -d ~/ghidra/jdk-25*)
export PATH="$JAVA_HOME/bin:$PATH"
mkdir -p "$R/proj"
if [ ! -d "$R/proj/fw.rep" ]; then
  cp "/mnt/c/Users/sterl/Desktop/simple af ad5m/extracted/software-3.1.6/firmwareExe" "$R/firmwareExe"
  ~/ghidra/ghidra_12.2_PUBLIC/support/analyzeHeadless "$R/proj" fw -import "$R/firmwareExe" \
    -max-cpu 4 > "$R/import.log" 2>&1
fi
~/ghidra/ghidra_12.2_PUBLIC/support/analyzeHeadless "$R/proj" fw -process firmwareExe -noanalysis \
  -scriptPath "$R/scripts" -postScript DecompRefs.java "$R/refs.c" "$@" > "$R/refs.log" 2>&1
grep -E "functions:|ERROR" "$R/refs.log" | head
