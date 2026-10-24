import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import java.io.*;

public class ExportDecomp extends GhidraScript {
    @Override
    public void run() throws Exception {
        String out = getScriptArgs()[0];
        Address base = toAddr(Long.decode(getScriptArgs()[1]));
        Memory mem = currentProgram.getMemory();

        // vector table: reset + handlers as function entry points
        for (int i = 1; i < 100; i++) {
            Address slot = base.add(i * 4);
            long v = mem.getInt(slot) & 0xffffffffL;
            if (v == 0 || (v & 1) == 0) continue;
            Address t = toAddr(v & ~1L);
            if (!mem.contains(t)) continue;
            disassemble(t);
            if (getFunctionAt(t) == null) createFunction(t, i == 1 ? "Reset_Handler" : "vec_" + i);
        }
        analyzeAll(currentProgram);

        DecompInterface d = new DecompInterface();
        d.openProgram(currentProgram);
        try (PrintWriter w = new PrintWriter(new FileWriter(out))) {
            for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
                DecompileResults r = d.decompileFunction(f, 60, monitor);
                w.println("// " + f.getEntryPoint());
                if (r.decompileCompleted()) w.println(r.getDecompiledFunction().getC());
                else w.println("// decompile failed: " + r.getErrorMessage());
            }
        }
        d.dispose();
        println("functions: " + currentProgram.getFunctionManager().getFunctionCount());
    }
}
