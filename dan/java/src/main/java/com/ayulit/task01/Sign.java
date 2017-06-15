package com.ayulit.task01;

public class Sign implements IPrintable {

    private char sign;
    
    public Sign(char sign) {
        this.sign = sign;
    }
    
    // we can print 'sign' on some sort of printer
    @Override
    public void print(IPrinter printer) {
        printer.printString(Character.toString(sign));
    }

}
