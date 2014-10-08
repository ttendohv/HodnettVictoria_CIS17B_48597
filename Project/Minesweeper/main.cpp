#include <QtGui/QApplication>
#include "input.h"
#include "dialog.h"
#include "difficulty.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Input w;
    //w.show();
    //Dialog d;
    //d.show();
    Difficulty b;
    b.show();
    return a.exec();
}
