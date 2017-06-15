#ifndef SIGN_H
#define SIGN_H

#include "iprintable.h"
#include "iprinter.h"

class Sign: public IPrintable
{
private:
    char sign;

public:
    Sign(char);
    void print(IPrinter);
};

#endif // SIGN_H
