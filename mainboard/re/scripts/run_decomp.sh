#!/bin/bash
# usage: run_decomp.sh <name> <load address>
set -e
R=/mnt/c/Users/sterl/Desktop/free-ad5x/mainboard/re
export JAVA_HOME=$(ls -d ~/ghidra/jdk-25*)
export PATH="$JAVA_HOME/bin:$PATH"
mkdir -p "$R/proj"
~/ghidra/ghidra_12.2_PUBLIC/support/analyzeHeadless "$R/proj" "$1" \
  -import "$R/$1.bin" -overwrite \
  -loader BinaryLoader -loader-baseAddr "$2" \
  -processor ARM:LE:32:Cortex \
  -scriptPath "$R/scripts" \
  -postScript ExportDecomp.java "$R/$1.c" "$2" \
  > "$R/$1.ghidra.log" 2>&1 || { tail -30 "$R/$1.ghidra.log"; exit 1; }
grep -E "functions:|ERROR" "$R/$1.ghidra.log" | head
wc -l "$R/$1.c"
