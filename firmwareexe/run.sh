#!/bin/bash
# Ghidra: import the stock firmwareExe (MIPS, with symbols) and decompile the functions whose
# full name matches the regex in $1, into firmwareExe.c
R=/mnt/c/Users/sterl/Desktop/free-ad5x/firmwareexe
F="/mnt/c/Users/sterl/Desktop/simple af ad5m/extracted/software-3.1.6/firmwareExe"
export JAVA_HOME=$(ls -d ~/ghidra/jdk-25*)
export PATH="$JAVA_HOME/bin:$PATH"
mkdir -p ~/fwexe-proj
cat > /tmp/ExportMatch.java <<'J'
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import java.io.*;
import java.util.regex.*;
public class ExportMatch extends GhidraScript {
    public void run() throws Exception {
        String[] a = getScriptArgs();
        Pattern p = Pattern.compile(a[1]);
        DecompInterface d = new DecompInterface();
        d.openProgram(currentProgram);
        try (PrintWriter w = new PrintWriter(new FileWriter(a[0]))) {
            for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
                if (f.isExternal() || f.isThunk()) continue;
                String n = f.getName(true);
                if (!p.matcher(n).find()) continue;
                DecompileResults r = d.decompileFunction(f, 120, monitor);
                w.println("// ===== " + n + " @ " + f.getEntryPoint());
                if (r.decompileCompleted()) w.println(r.getDecompiledFunction().getC());
            }
        }
    }
}
J
cat > /tmp/DumpData.java <<'J'
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;
import java.io.*;
public class DumpData extends GhidraScript {
    public void run() throws Exception {
        String[] a = getScriptArgs();
        Memory m = currentProgram.getMemory();
        try (PrintWriter w = new PrintWriter(new FileWriter(a[0]))) {
            for (int i = 1; i < a.length; i++) {
                Address ad = toAddr(a[i]);
                byte[] b = new byte[64];
                int n = m.getBytes(ad, b);
                long l = 0;
                for (int k = 7; k >= 0; k--) l = (l << 8) | (b[k] & 0xff);
                int iv = (b[0] & 0xff) | (b[1] & 0xff) << 8 | (b[2] & 0xff) << 16 | (b[3] & 0xff) << 24;
                StringBuilder s = new StringBuilder();
                for (int k = 0; k < n && b[k] != 0; k++) s.append(b[k] >= 32 && b[k] < 127 ? (char) b[k] : '.');
                w.println(a[i] + " double=" + Double.longBitsToDouble(l) + " float=" + Float.intBitsToFloat(iv)
                          + " u32=0x" + Integer.toHexString(iv) + " str=\"" + s + "\"");
            }
        }
    }
}
J
H=~/ghidra/ghidra_12.2_PUBLIC/support/analyzeHeadless
if [ ! -e ~/fwexe-proj/fw.rep ]; then
  $H ~/fwexe-proj fw -import "$F" -overwrite -scriptPath /tmp -postScript ExportMatch.java "$R/firmwareExe.c" "$1" > "$R/ghidra.log" 2>&1
else
  RX=$1; O=$2; shift 2
  $H ~/fwexe-proj fw -process firmwareExe -noanalysis -scriptPath /tmp     -postScript ExportMatch.java "$R/$O" "$RX" -postScript DumpData.java "$R/data.txt" "$@" > "$R/ghidra2.log" 2>&1
  echo "functions: $(grep -c '// =====' "$R/$O")"; exit
fi
echo "functions: $(grep -c '// =====' "$R/firmwareExe.c")"
