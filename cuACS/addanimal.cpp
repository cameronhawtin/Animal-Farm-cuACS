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
            || ui->sizeComboBox->currentText() == "Please Select"
            || ui->aggressionLineEdit->text().isEmpty() || ui->attachmentLineEdit->text().isEmpty()
            || ui->obedienceLineEdit->text().isEmpty() || ui->cleanlinessLineEdit->text().isEmpty()
            || ui->energyComboBox->currentText() == "Please Select" || ui->childrenComfortLineEdit->text().isEmpty()
            || ui->loudnessLineEdit->text().isEmpty() || ui->costLineEdit->text().isEmpty()
            || ui->costPerYearLineEdit->text().isEmpty() || ui->intelligenceLineEdit->text().isEmpty()
            || (ui->isCrateTrainedRadioButtonYES->isChecked() == false && ui->isCrateTrainedRadioButtonNO->isChecked() == false)
            || (ui->isHypoallergenicRadioButtonYES->isChecked() == false && ui->isHypoallergenicRadioButtonNO->isChecked() == false)
            || (ui->isNeuteredRadioButtonYES->isChecked() == false && ui->isNeuteredRadioButtonNO->isChecked() == false))
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
    string energy = ui->energyComboBox->currentText().toStdString();
    int childrenComfort = ui->childrenComfortLineEdit->text().toInt();
    int loudness = ui->loudnessLineEdit->text().toInt();
    float cost = ui->costLineEdit->text().toFloat();
    float costPerYear = ui->costPerYearLineEdit->text().toFloat();
    int intelligence = ui->intelligenceLineEdit->text().toInt();
    int cleanliness = ui->cleanlinessLineEdit->text().toInt();
    bool isCrateTrained;
    bool isHypoallergenic;
    bool isNeutered;

    if (ui->isCrateTrainedRadioButtonYES->isChecked())
        isCrateTrained = true;
    else if (ui->isCrateTrainedRadioButtonNO->isChecked())
        isCrateTrained = false;
    if (ui->isHypoallergenicRadioButtonYES->isChecked())
        isHypoallergenic = true;
    else if (ui->isHypoallergenicRadioButtonNO->isChecked())
        isHypoallergenic = false;
    if (ui->isNeuteredRadioButtonYES->isChecked())
        isNeutered = true;
    else if (ui->isNeuteredRadioButtonNO->isChecked())
        isNeutered = false;

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

void AddAnimal::on_costLineEdit_cursorPositionChanged(int arg1, int arg2)
{
    updateOk();
}

void AddAnimal::on_costPerYearLineEdit_cursorPositionChanged(int arg1, int arg2)
{
    updateOk();
}

void AddAnimal::on_energyComboBox_currentIndexChanged(const QString &arg1)
{
    updateOk();
}


// Slider functionality
void AddAnimal::on_aggressionSlider_valueChanged(int value)
{
    QString s = QString::number(value);
    ui->aggressionLineEdit->setText(s);
    updateOk();
}

void AddAnimal::on_attachmentSlider_valueChanged(int value)
{
    QString s = QString::number(value);
    ui->attachmentLineEdit->setText(s);
    updateOk();
}

void AddAnimal::on_obedienceSlider_valueChanged(int value)
{
    QString s = QString::number(value);
    ui->obedienceLineEdit->setText(s);
    updateOk();
}

void AddAnimal::on_childrenComfortSlider_valueChanged(int value)
{
    QString s = QString::number(value);
    ui->childrenComfortLineEdit->setText(s);
    updateOk();
}

void AddAnimal::on_loudnessSlider_valueChanged(int value)
{
    QString s = QString::number(value);
    ui->loudnessLineEdit->setText(s);
    updateOk();
}

void AddAnimal::on_intelligenceSlider_valueChanged(int value)
{
    QString s = QString::number(value);
    ui->intelligenceLineEdit->setText(s);
    updateOk();
}
void AddAnimal::on_cleanlinessSlider_valueChanged(int value)
{
    QString s = QString::number(value);
    ui->cleanlinessLineEdit->setText(s);
    updateOk();
}

void AddAnimal::on_isCrateTrainedRadioButtonYES_toggled(bool checked)
{
    updateOk();
}

void AddAnimal::on_isCrateTrainedRadioButtonNO_toggled(bool checked)
{
    updateOk();
}

void AddAnimal::on_isHypoallergenicRadioButtonYES_toggled(bool checked)
{
    updateOk();
}

void AddAnimal::on_isHypoallergenicRadioButtonNO_toggled(bool checked)
{
    updateOk();
}


void AddAnimal::on_isNeuteredRadioButtonYES_toggled(bool checked)
{
    updateOk();
}

void AddAnimal::on_isNeuteredRadioButtonNO_toggled(bool checked)
{
    updateOk();
}
