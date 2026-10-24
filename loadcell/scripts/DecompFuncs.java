import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

// args: <output file> <function name part> [...]: decompiles matching functions and lists their callers
public class DecompFuncs extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        DecompInterface d = new DecompInterface();
        d.openProgram(currentProgram);
        try (PrintWriter w = new PrintWriter(new FileWriter(a[0]))) {
            for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
                String full = f.getName(true);
                boolean hit = false;
                for (int i = 1; i < a.length; i++)
                    if (full.contains(a[i])) hit = true;
                if (!hit) continue;
                w.println("\n// ===== " + full + " @ " + f.getEntryPoint());
                Set<String> callers = new TreeSet<>();
                for (Reference r : getReferencesTo(f.getEntryPoint())) {
                    Function c = getFunctionContaining(r.getFromAddress());
                    callers.add((c == null ? "?" : c.getName(true)) + " @ " + r.getFromAddress());
                }
                for (String c : callers) w.println("// caller: " + c);
                DecompileResults r = d.decompileFunction(f, 120, monitor);
                if (r.decompileCompleted()) w.println(r.getDecompiledFunction().getC());
                else w.println("// decompile failed: " + r.getErrorMessage());
            }
        }
        d.dispose();
    }
}
