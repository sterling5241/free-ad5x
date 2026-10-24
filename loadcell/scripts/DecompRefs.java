import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

// args: <output file> <string> [<string> ...]
public class DecompRefs extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        Memory mem = currentProgram.getMemory();
        Set<Function> funcs = new LinkedHashSet<>();
        try (PrintWriter w = new PrintWriter(new FileWriter(a[0]))) {
            for (int i = 1; i < a.length; i++) {
                byte[] needle = (a[i] + "\0").getBytes("UTF-8");
                Address at = mem.getMinAddress();
                while (true) {
                    at = mem.findBytes(at, needle, null, true, monitor);
                    if (at == null) break;
                    w.println("string \"" + a[i] + "\" at " + at);
                    for (Reference r : getReferencesTo(at)) {
                        Function f = getFunctionContaining(r.getFromAddress());
                        w.println("  ref from " + r.getFromAddress() + " in " + (f == null ? "none" : f.getName()));
                        if (f != null) funcs.add(f);
                    }
                    at = at.add(1);
                }
            }
            DecompInterface d = new DecompInterface();
            d.openProgram(currentProgram);
            for (Function f : funcs) {
                DecompileResults r = d.decompileFunction(f, 120, monitor);
                w.println("\n// ===== " + f.getName() + " @ " + f.getEntryPoint());
                if (r.decompileCompleted()) w.println(r.getDecompiledFunction().getC());
                else w.println("// decompile failed: " + r.getErrorMessage());
            }
            d.dispose();
        }
        println("functions: " + funcs.size());
    }
}
