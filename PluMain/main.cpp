#include "plumain.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PluMain w;
    w.show();

    return a.exec();
}
