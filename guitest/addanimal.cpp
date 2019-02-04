#include "addanimal.h"
#include "ui_addanimal.h"

using namespace std;

AddAnimal::AddAnimal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddAnimal)
{
    ui->setupUi(this);
    QString s = ui->typeComboBox->currentText();
    qDebug(qUtf8Printable(s)); //clean

}

AddAnimal::~AddAnimal()
{
    delete ui;
}

void AddAnimal::on_buttonBox_accepted()
{
    QString type = ui->typeComboBox->currentText();
    QString colour = ui->colourComboBox->currentText();

    //add more

    //change to std strings for storage
    string typeString = type.toUtf8().constData();
    string colourString = type.toUtf8().constData();
}
