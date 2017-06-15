#include "text.h"

Text::Text(IPrintable* tp[])
{
    qDebug() << "Text object created" << endl;

    textPrt = tp;
}

// we can print 'text' on some sort of printer
void Text::print(IPrinter printer)
{

}
