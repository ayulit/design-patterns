package com.ayulit.task01;

public class Word implements IPrintable {

    private String word;
    
    public Word(String word) {
        this.word = word;
    }
    
    // we can print 'word' on some sort of printer
    @Override
    public void print(IPrinter printer) {
        // TODO Auto-generated method stub

    }

}
