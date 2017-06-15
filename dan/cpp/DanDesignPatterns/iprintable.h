#ifndef IPRINTABLE_H
#define IPRINTABLE_H

#include "iprinter.h"

// Interface class Iprinter.
class IPrintable
{
public:
    // pure virtual function makes class abstract!
    virtual void print(IPrinter printer)=0;
};

#endif // IPRINTABLE_H
