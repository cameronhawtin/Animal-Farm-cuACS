﻿#include "AddAnimal.h"
#include "ui_addanimal.h"
#include "CuacsAPI.h"
#include "MainWindow.h"
#include <iostream>

using namespace std;

AddAnimal::AddAnimal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddAnimal)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(764, 511));
    this->setWindowTitle("Add an Animal");
    int id = QFontDatabase::addApplicationFont ( ":/fonts/EgyptienneRoman.ttf" );
    QFont egyptienne(QFontDatabase::applicationFontFamilies(id).at(0), 11);
    this->setFont(egyptienne);

    QDoubleValidator* floatValidator = new QDoubleValidator(this);
    QIntValidator* ageRange = new QIntValidator(0, 999, this);
    floatValidator->setRange(0,99999,2);

    ui->ageLineEdit->setValidator(ageRange);
    ui->costLineEdit->setValidator(floatValidator);
    ui->costPerYearLineEdit->setValidator(floatValidator);
    ui->lifeExpectancyLineEdit->setValidator(ageRange);

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
            || (ui->isNeuteredRadioButtonYES->isChecked() == false && ui->isNeuteredRadioButtonNO->isChecked() == false)
            || ui->playfulnessLineEdit->text().isEmpty()
            || ui->loyaltyLineEdit->text().isEmpty()
            || ui->lifeExpectancyLineEdit->text().isEmpty())
        ui->buttonBox->button(QDialogButtonBox::Save)->setEnabled(false);
    else
        ui->buttonBox->button(QDialogButtonBox::Save)->setEnabled(true);
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
    bool isCrateTrained = false;
    bool isHypoallergenic = false;
    bool isNeutered = false;

    int playfulness = ui->playfulnessLineEdit->text().toInt();
    int loyalty = ui->loyaltyLineEdit->text().toInt();
    int lifeExp = ui->lifeExpectancyLineEdit->text().toInt();

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
                    isCrateTrained, isHypoallergenic, isNeutered, childrenComfort, loudness, cost, costPerYear, intelligence, cleanliness, playfulness, loyalty, lifeExp);

}

// This function is called when a comboBox selection is changed
void AddAnimal::on_typeComboBox_currentIndexChanged(const QString &arg1)
{
    QStringList list = QStringList();


    if (arg1.toLatin1() == "Cat")
        list << "Exotic" << "Ragdoll" << "British Shorthair" << "Persian" << "Maine Coon" << "American Shorthair"
             << "Scottish Fold" << "Sphynx" << "Devon Rex" << "Abyssinian" << "Oriental" << "Siamese" << "Cornish Rex" << "Norwegian Forest"
             << "Siberian" << "Birman" << "Russian Blue" << "Bengal" << "Tonkinese" << "Burmese";
    else if (arg1.toLatin1() == "Dog")
        list << "Labrador Retriever" << "Golden Retriever" << "German Shepherd" << "French Bulldog"
             << "English Bulldog" << "Beagle" << "Poodle" << "Rottweiler" << "Yorkshire Terrier" << "German Pointer"
             << "Boxer" << "Siberian Husky" << "Dachshund" << "Great Dane" << "Pembroke Welsh Corgi" << "Doberman Pinscher"
             << "Australian Shepherd" << "Miniature Schnauzer" << "Cavalier King Charles Spaniel" << "Shih Tzu";
    else if (arg1.toLatin1() == "Hamster")
        list << "Roborovski" << "Dwarf Winter White" << "Hybrid" << "Chinese"
             << "Dwarf Campbell's Russian" << "Golden";
    else if (arg1.toLatin1() == "Bird")
        list << "Canary" << "Budgierigar" << "Finch" << "Cockatiel" << "Quaker Parakeet"
             << "Pionus Parrot" << "Poicephalus Parrot" << "Amazon" << "Pyrrhura Conure" << "Peach-Faced Lovebird";
    else if (arg1.toLatin1() == "Mouse")
        list << "Wood" << "Deer" << "Albino";
    else if (arg1.toLatin1() == "Guinea Pig")
        list << "American" << "Abyssinian" << "Peruvian" << "Silkie" << "Teddy" << "Texel" << "White Crested"
             << "Rex" << "Himalayan" << "Skinny Pig";

    list.sort();
    list.push_front("Please Select");
    ui->breedComboBox->clear();
    ui->breedComboBox->addItems(list);

    updateOk();

}

void AddAnimal::on_breedComboBox_currentIndexChanged(int i)
{
    updateOk();
}

void AddAnimal::on_sexComboBox_currentIndexChanged(int i)
{
    updateOk();
}

void AddAnimal::on_colourComboBox_currentIndexChanged(int i)
{
    updateOk();
}

void AddAnimal::on_sizeComboBox_currentIndexChanged(int i)
{
    updateOk();
}

void AddAnimal::on_energyComboBox_currentIndexChanged(int i)
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

void AddAnimal::on_isCrateTrainedRadioButtonYES_toggled()
{
    updateOk();
}

void AddAnimal::on_isCrateTrainedRadioButtonNO_toggled()
{
    updateOk();
}

void AddAnimal::on_isHypoallergenicRadioButtonYES_toggled()
{
    updateOk();
}

void AddAnimal::on_isHypoallergenicRadioButtonNO_toggled()
{
    updateOk();
}


void AddAnimal::on_isNeuteredRadioButtonYES_toggled()
{
    updateOk();
}

void AddAnimal::on_isNeuteredRadioButtonNO_toggled()
{
    updateOk();
}

void AddAnimal::on_nameLineEdit_textChanged(const QString &arg1)
{
    updateOk();
}

void AddAnimal::on_costLineEdit_textChanged(const QString &arg1)
{
    updateOk();
}

void AddAnimal::on_costPerYearLineEdit_textChanged(const QString &arg1)
{
    updateOk();
}

void AddAnimal::on_ageLineEdit_textChanged(const QString &arg1)
{
    updateOk();
}

void AddAnimal::on_playfulnessSlider_valueChanged(int value)
{
    QString s = QString::number(value);
    ui->playfulnessLineEdit->setText(s);
    updateOk();
}

void AddAnimal::on_loyaltySlider_valueChanged(int value)
{
    QString s = QString::number(value);
    ui->loyaltyLineEdit->setText(s);
    updateOk();
}

void AddAnimal::on_playfulnessLineEdit_textChanged(const QString &arg1)
{
    updateOk();
}

void AddAnimal::on_loyaltyLineEdit_textChanged(const QString &arg1)
{
    updateOk();
}
