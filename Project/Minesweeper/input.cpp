#include <QtGui>
#include "input.h"
#include "ui_input.h"

Input::Input(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Input)
{
    //ui->setupUi(this);

    name = new QLabel(tr("Username:"));
    input = new QLineEdit;
    name->setBuddy(input);

    //okButton = new QPushButton(tr("OK"));
    //okButton->setDefault(true);
    //okButton->setEnabled(false);

    //cancelButton = new QPushButton(tr("Cancel"));
    buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok|QDialogButtonBox::Cancel);
    connect(buttonBox, SIGNAL(accepted()), this, SLOT(accept()));
    connect(buttonBox, SIGNAL(rejected()), this, SLOT(reject()));

    //connect(name,SIGNAL(clicked()),this,SLOT(setName()));

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(name);
    layout->addWidget(input);
    //layout->addWidget(okButton);
    //layout->addWidget(cancelButton);
    layout->addWidget(buttonBox);

    QWidget *widget = new QWidget;
    widget->setLayout(layout);

    setWindowTitle(tr("Input Username"));
}

Input::~Input()
{
    delete ui;
}

void Input::setName(){
    bool ok;
    QString text = QInputDialog::getText(this, tr("QInputDialog::getText()"),
                                              tr("User name:"), QLineEdit::Normal,
                                              QDir::home().dirName(), &ok);
    if (ok && !text.isEmpty())
             name->setText(text);
}
