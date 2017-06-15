#include "sign.h"

Sign::Sign(char sign)
{
     qDebug() << "Sign object created" << endl;

     this->sign = sign;

     qDebug() << "this->sign=" << this->sign << endl;
}

// we can print 'sign' on some sort of printer
void Sign::print(IPrinter printer)
{
    // stub for a while
}
