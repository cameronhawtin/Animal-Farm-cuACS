#include "addanimal.h"
#include "ui_addanimal.h"

AddAnimal::AddAnimal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddAnimal)
{
    ui->setupUi(this);
    QString s = ui->typeComboBox->currentText();
    qDebug(qUtf8Printable(s));

}

AddAnimal::~AddAnimal()
{
    delete ui;
}
