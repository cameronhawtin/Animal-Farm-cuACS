#include "addanimal.h"
#include "ui_addanimal.h"
#include <iostream>

using namespace std;

AddAnimal::AddAnimal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddAnimal)
{
    ui->setupUi(this);
    QString s = ui->typeComboBox->currentText();

}

AddAnimal::~AddAnimal()
{
    delete ui;
}

void AddAnimal::on_buttonBox_accepted()
{

    //get attributes from ui
    string name = ui->nameLineEdit->text().toStdString();
    string type = ui->typeComboBox->currentText().toStdString();
    string breed = ui->breedComboBox->currentText().toStdString();
    int age = ui->ageLineEdit->text().toInt();
    string colour = ui->colourComboBox->currentText().toStdString();

    sexes sex;
    sizes size;

    if (ui->sexComboBox->currentText().toStdString() == "Male") sex = MALE;
    else if (ui->sexComboBox->currentText().toStdString() == "Female") sex = FEMALE;

    if (ui->sexComboBox->currentText().toStdString() == "Small") size = SMALL;
    else if (ui->sexComboBox->currentText().toStdString() == "Medium") size = MEDIUM;
    else if (ui->sexComboBox->currentText().toStdString() == "Large") size = LARGE;

    //now give attributes to animal class

}

void AddAnimal::on_typeComboBox_currentIndexChanged(const QString &arg1)
{
    QStringList list = QStringList();

    if (arg1.toLatin1() == "Cat")
        list << "Please Select" << "Tabby" << "Siamese" << "Persian";
    else if (arg1.toLatin1() == "Dog")
        list << "Please Select" << "Golden Retriever" << "Poodle" << "Bulldog";
    else if (arg1.toLatin1() == "Hamster")
        list << "Please Select" << "Dwarf" << "Winter White" << "Chinese";
    else if (arg1.toLatin1() == "Fish")
        list << "Please Select" << "Common Carp" << "Guppy" << "Goldfish";
    else if (arg1.toLatin1() == "Snake")
        list << "Please Select" << "Anaconda" << "Viper" << "Python";

    ui->breedComboBox->clear();
    ui->breedComboBox->addItems(list);

}
