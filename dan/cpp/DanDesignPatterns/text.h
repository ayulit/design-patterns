#ifndef TEXT_H
#define TEXT_H

#include "iprintable.h"
#include "iprinter.h"

class Text: public IPrintable
{
private:
    IPrintable* textPrt[5];

public:
    Text(IPrintable* tp[]);
    void print(IPrinter);
};

#endif // TEXT_H
