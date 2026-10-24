#!/bin/bash
# Ghidra: full decompile of a MIPS ELF (IFSCommand / ifsF37)
R=/mnt/c/Users/sterl/Desktop/free-ad5x/ifs/iap
export JAVA_HOME=$(ls -d ~/ghidra/jdk-25*)
export PATH="$JAVA_HOME/bin:$PATH"
mkdir -p "$R/proj"
cat > /tmp/ExportAll.java <<'J'
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import java.io.*;
public class ExportAll extends GhidraScript {
    public void run() throws Exception {
        DecompInterface d = new DecompInterface();
        d.openProgram(currentProgram);
        try (PrintWriter w = new PrintWriter(new FileWriter(getScriptArgs()[0]))) {
            for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
                if (f.isExternal() || f.isThunk()) continue;
                DecompileResults r = d.decompileFunction(f, 60, monitor);
                w.println("// ===== " + f.getName() + " @ " + f.getEntryPoint());
                if (r.decompileCompleted()) w.println(r.getDecompiledFunction().getC());
            }
        }
    }
}
J
for n in "$@"; do
  ~/ghidra/ghidra_12.2_PUBLIC/support/analyzeHeadless "$R/proj" "$n" -import "$R/$n" -overwrite \
    -scriptPath /tmp -postScript ExportAll.java "$R/$n.c" > "$R/$n.log" 2>&1
  echo "$n: $(grep -c '// =====' "$R/$n.c") functions"
done
