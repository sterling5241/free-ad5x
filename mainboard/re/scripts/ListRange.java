import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

public class ListRange extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        Address s = toAddr(Long.decode(a[0])), e = toAddr(Long.decode(a[1]));
        for (int i = 2; i < a.length; i++) {
            Address t = toAddr(Long.decode(a[i]));
            for (Reference r : getReferencesTo(t)) {
                Function f = getFunctionContaining(r.getFromAddress());
                println("xref " + t + " <- " + r.getFromAddress() + " in " + (f == null ? "none" : f.getName()));
            }
        }
        disassemble(s);
        InstructionIterator it = currentProgram.getListing().getInstructions(new AddressSet(s, e), true);
        while (it.hasNext()) {
            Instruction ins = it.next();
            Function f = getFunctionContaining(ins.getAddress());
            println(ins.getAddress() + "  " + ins + (f == null ? "" : "   ; " + f.getName()));
        }
    }
}
