import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import java.io.*;

// args: <output file> <regex>: lists function names matching the regex
public class ListFuncs extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        try (PrintWriter w = new PrintWriter(new FileWriter(a[0]))) {
            for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
                String n = f.getName(true);
                if (n.matches(a[1])) w.println(f.getEntryPoint() + " " + n);
            }
        }
    }
}
