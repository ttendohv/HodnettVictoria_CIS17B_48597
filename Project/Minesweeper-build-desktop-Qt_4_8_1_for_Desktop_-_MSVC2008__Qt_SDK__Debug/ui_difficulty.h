/********************************************************************************
** Form generated from reading UI file 'difficulty.ui'
**
** Created: Tue Oct 7 17:54:26 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIFFICULTY_H
#define UI_DIFFICULTY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Difficulty
{
public:
    QDialogButtonBox *buttonBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;

    void setupUi(QDialog *Difficulty)
    {
        if (Difficulty->objectName().isEmpty())
            Difficulty->setObjectName(QString::fromUtf8("Difficulty"));
        Difficulty->resize(400, 119);
        buttonBox = new QDialogButtonBox(Difficulty);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(290, 20, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        radioButton = new QRadioButton(Difficulty);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(60, 30, 82, 17));
        radioButton_2 = new QRadioButton(Difficulty);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(60, 50, 82, 17));
        radioButton_3 = new QRadioButton(Difficulty);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(60, 70, 82, 17));
        QWidget::setTabOrder(radioButton, radioButton_2);
        QWidget::setTabOrder(radioButton_2, radioButton_3);
        QWidget::setTabOrder(radioButton_3, buttonBox);

        retranslateUi(Difficulty);
        QObject::connect(buttonBox, SIGNAL(accepted()), Difficulty, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Difficulty, SLOT(reject()));

        QMetaObject::connectSlotsByName(Difficulty);
    } // setupUi

    void retranslateUi(QDialog *Difficulty)
    {
        Difficulty->setWindowTitle(QApplication::translate("Difficulty", "Choose Difficulty", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("Difficulty", "Beginner", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("Difficulty", "Intermediate", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("Difficulty", "Expert", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Difficulty: public Ui_Difficulty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIFFICULTY_H
