#ifndef WORD_H
#define WORD_H

#include "iprintable.h"
#include "iprinter.h"

class Word: public IPrintable
{
    public:
        Word();
        virtual ~Word(){}

        virtual void print(IPrinter printer) {}
};

#endif // WORD_H
