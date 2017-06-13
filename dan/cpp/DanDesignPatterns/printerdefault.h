#ifndef PRINTERDEFAULT_H
#define PRINTERDEFAULT_H

#include "iprinter.h"

class PrinterDefault: public IPrinter
{
    public:
        PrinterDefault();
        // Am I Destructor ?!
        virtual ~PrinterDefault(){}

};

#endif // PRINTERDEFAULT_H
