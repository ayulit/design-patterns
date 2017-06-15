#include "word.h"


Word::Word(string word)
{
    qDebug() << "Word object created" << endl;

    this->word = word;

    // Qt stream classes don't handle std::string directly. You need to convert that to a QString
    qDebug() << "this->word=" << QString::fromStdString(this->word) << endl;
}

// we can print 'word' on some sort of printer
void Word::print(IPrinter printer)
{
    // stub for a while
}
