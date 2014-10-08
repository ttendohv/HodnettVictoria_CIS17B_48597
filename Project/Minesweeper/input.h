#ifndef INPUT_H
#define INPUT_H

#include <QDialog>

class QLabel;
class QLineEdit;
class QPushButton;
class QDialogButtonBox;

namespace Ui {
class Input;
}

class Input : public QDialog
{
    Q_OBJECT
    
private slots:
    void setName();

public:
    explicit Input(QWidget *parent = 0);
    ~Input();
    
private:
    Ui::Input *ui;
    QLabel *name;
    QLineEdit *input;
    //QPushButton *okButton;
    //QPushButton *cancelButton;
    QDialogButtonBox *buttonBox;
};

#endif // INPUT_H
