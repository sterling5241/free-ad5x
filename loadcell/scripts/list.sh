#!/bin/bash
# usage: list.sh <output name> <regex>
R=/mnt/c/Users/sterl/Desktop/free-ad5x/loadcell
export JAVA_HOME=$(ls -d ~/ghidra/jdk-25*)
export PATH="$JAVA_HOME/bin:$PATH"
~/ghidra/ghidra_12.2_PUBLIC/support/analyzeHeadless "$R/proj" fw -process firmwareExe -noanalysis -readOnly \
  -scriptPath "$R/scripts" -postScript ListFuncs.java "$R/$1" "$(cat "$R/scripts/$2")" > "$R/list.log" 2>&1
wc -l < "$R/$1"
