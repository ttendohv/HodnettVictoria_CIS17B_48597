#include "statistics.h"
#include "ui_statistics.h"

Statistics::Statistics(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Statistics)
{
    ui->setupUi(this);
}

Statistics::~Statistics()
{
    delete ui;
}

void Statistics::on_pushButton_clicked()
{

}
