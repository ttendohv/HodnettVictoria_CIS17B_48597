/********************************************************************************
** Form generated from reading UI file 'input.ui'
**
** Created: Tue Oct 7 17:11:34 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUT_H
#define UI_INPUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Input
{
public:

    void setupUi(QDialog *Input)
    {
        if (Input->objectName().isEmpty())
            Input->setObjectName(QString::fromUtf8("Input"));
        Input->resize(400, 300);

        retranslateUi(Input);

        QMetaObject::connectSlotsByName(Input);
    } // setupUi

    void retranslateUi(QDialog *Input)
    {
        Input->setWindowTitle(QApplication::translate("Input", "Input", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Input: public Ui_Input {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUT_H
