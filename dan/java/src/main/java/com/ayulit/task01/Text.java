package com.ayulit.task01;

public class Text implements IPrintable {

    // text consists of 'words' or 'signs' etc...
    private IPrintable[] text;
    
    public Text(IPrintable[] text) {
        this.text = text;
    }

    // we can print 'text' on some sort of printer
    @Override
    public void print(IPrinter printer) {
        for (IPrintable element : text) {
            element.print(printer);
        }        
    }
}
