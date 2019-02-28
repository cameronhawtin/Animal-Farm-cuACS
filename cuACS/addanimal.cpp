#include "addanimal.h"
#include "ui_addanimal.h"
#include "CuacsAPI.h"
#include "mainwindow.h"
#include <iostream>

using namespace std;

AddAnimal::AddAnimal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddAnimal)
{
    ui->setupUi(this);
    this->setWindowTitle("Add an Animal");
    QString s = ui->typeComboBox->currentText();

    updateOk();
}

// Checks for all info to be filled to enable the "OK" button
void AddAnimal::updateOk()
{
    if (ui->nameLineEdit->text().isEmpty() || ui->typeComboBox->currentText() == "Please Select"
            || ui->breedComboBox->currentText() == "Please Select" || ui->sexComboBox->currentText() == "Please Select"
            || ui->ageLineEdit->text().isEmpty() || ui->colourComboBox->currentText() == "Please Select"
            || ui->sizeComboBox->currentText() == "Please Select")
        ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);
    else
        ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(true);
}

// AddAnimal Destructor
AddAnimal::~AddAnimal()
{
    delete capi;
    delete ui;
}

// This function is called when the user presses the "OK" button
void AddAnimal::on_buttonBox_accepted()
{
    //get attributes from ui
    string name = ui->nameLineEdit->text().toStdString();
    string type = ui->typeComboBox->currentText().toStdString();
    string breed = ui->breedComboBox->currentText().toStdString();
    string sex = ui->sexComboBox->currentText().toStdString();
    int age = ui->ageLineEdit->text().toInt();
    string colour = ui->colourComboBox->currentText().toStdString();
    string size = ui->sizeComboBox->currentText().toStdString();

    int aggression = ui->aggressionLineEdit->text().toInt();
    int attachment = ui->attachmentLineEdit->text().toInt();
    int obedience = ui->obedienceLineEdit->text().toInt();
    string energy = ui->energyLineEdit->text().toStdString();
    bool isCrateTrained = false;
    bool isHypoallergenic = true;
    bool isNeutered = true;
    int childrenComfort = ui->childrenComfortLineEdit->text().toInt();
    int loudness = ui->loudnessLineEdit->text().toInt();
    float cost = ui->costLineEdit->text().toFloat();
    float costPerYear = ui->costPerYearLineEdit->text().toFloat();
    int intelligence = ui->intelligenceLineEdit->text().toInt();
    int cleanliness = ui->cleanlinessLineEdit->text().toInt();

    capi = new CuacsAPI();

    //now give attributes to animal class
    capi->addAnimal(name, type, breed, age, sex, colour, size, aggression, attachment, obedience, energy,
                    isCrateTrained, isHypoallergenic, isNeutered, childrenComfort, loudness, cost, costPerYear, intelligence, cleanliness);
}

// This function is called when a comboBox selection is changed
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

    updateOk();

}

void AddAnimal::on_nameLineEdit_cursorPositionChanged(int arg1, int arg2)
{
    updateOk();
}

void AddAnimal::on_breedComboBox_currentIndexChanged(const QString &arg1)
{
    updateOk();
}

void AddAnimal::on_sexComboBox_currentIndexChanged(const QString &arg1)
{
    updateOk();
}

void AddAnimal::on_ageLineEdit_cursorPositionChanged(int arg1, int arg2)
{
    updateOk();
}

void AddAnimal::on_colourComboBox_currentIndexChanged(const QString &arg1)
{
    updateOk();
}

void AddAnimal::on_sizeComboBox_currentIndexChanged(const QString &arg1)
{
    updateOk();
}
