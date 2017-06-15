package com.ayulit.task01;

public class PrinterSpecial extends PrinterDefault {

    public void print(IPrintable data) {

        if (data instanceof Word) {

            System.out.print("(");
            super.print(data);
            System.out.print(")");

        } else {

            super.print(data);
        }
    }

}
