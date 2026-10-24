#!/bin/bash
# usage: funcs.sh <output name> <function name part> [...]
R=/mnt/c/Users/sterl/Desktop/free-ad5x/loadcell
export JAVA_HOME=$(ls -d ~/ghidra/jdk-25*)
export PATH="$JAVA_HOME/bin:$PATH"
out=$1; shift
~/ghidra/ghidra_12.2_PUBLIC/support/analyzeHeadless "$R/proj" fw -process firmwareExe -noanalysis -readOnly \
  -scriptPath "$R/scripts" -postScript DecompFuncs.java "$R/$out" "$@" > "$R/funcs.log" 2>&1
grep -E "ERROR" "$R/funcs.log" | head
grep -c "// =====" "$R/$out"
