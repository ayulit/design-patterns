#ifndef WORD_H
#define WORD_H

#include "iprintable.h"
#include "iprinter.h"

#include <string>

using namespace std;

class Word: public IPrintable
{
private:
    string word;

public:
    Word(string);
    void print(IPrinter);
};

#endif // WORD_H
