#include "arraystring.h"
#include <QApplication>
#include <QLabel>

int ArrayString::toPrint(int a, char** b){
    char* array = this->getStrAry();

    //Q
    QApplication app(a,b);
    QLabel *label = new QLabel(array);
    label->show();
    return app.exec();
}
