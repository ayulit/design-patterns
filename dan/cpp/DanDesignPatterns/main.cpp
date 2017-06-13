#include <QDebug>
#include "word.h"
#include "printerdefault.h"

int main(int argc, char *argv[])
{
    qDebug() << "Hello world!" << endl << endl;

    Word myWord;
    PrinterDefault myPrinter;

    return 0;
}
