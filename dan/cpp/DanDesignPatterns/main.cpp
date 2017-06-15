#include <QDebug>
#include "sign.h"
#include "word.h"
#include "text.h"
#include "printerdefault.h"

int main(int argc, char *argv[])
{
    qDebug() << "Hello world!" << endl << endl;

    Word myWord("Yow!");
    Sign mySign('a');




    Text myText(new Sign('x'));
    PrinterDefault myPrinter;

    return 0;
}

