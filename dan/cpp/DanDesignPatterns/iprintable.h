#ifndef IPRINTABLE_H
#define IPRINTABLE_H

#include "iprinter.h"

// Interface class Iprinter.
class IPrintable
{
    public:
        // Am I Destructor ?!
        virtual ~IPrintable(){}

        virtual void print(IPrinter printer);
};

#endif // IPRINTABLE_H
