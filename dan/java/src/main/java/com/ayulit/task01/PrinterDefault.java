package com.ayulit.task01;

/** Prints string data to console */
public class PrinterDefault implements IPrinter {

    public void print(IPrintable data) {
        System.out.print(data); 
    }
    
}
