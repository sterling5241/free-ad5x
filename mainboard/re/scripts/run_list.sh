#!/bin/bash
# usage: run_list.sh <name> <start> <end> [xref addr...]
R=/mnt/c/Users/sterl/Desktop/free-ad5x/mainboard/re
export JAVA_HOME=$(ls -d ~/ghidra/jdk-25*)
export PATH="$JAVA_HOME/bin:$PATH"
n=$1; shift
~/ghidra/ghidra_12.2_PUBLIC/support/analyzeHeadless "$R/proj" "$n" -process "$n.bin" -noanalysis -readOnly \
  -scriptPath "$R/scripts" -postScript ListRange.java "$@" > "$R/list.log" 2>&1
grep "ListRange.java>" "$R/list.log" | sed 's/^INFO  ListRange.java> //; s/ (GhidraScript)\s*$//'
