#include "addclient.h"
#include "ui_addclient.h"
#include "CuacsAPI.h"
#include "mainwindow.h"
#include <iostream>

using namespace std;

AddClient::AddClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddClient)
{
    ui->setupUi(this);
    this->setWindowTitle("Add a Client");

    updateOk();
}

// Checks for all info to be filled to enable the "OK" button
void AddClient::updateOk()
{
  //  if (ui->nameLineEdit->text().isEmpty() || ui->typeComboBox->currentText() == "Please Select"
   //         || ui->breedComboBox->currentText() == "Please Select" || ui->sexComboBox->currentText() == "Please Select"
    //        || ui->ageLineEdit->text().isEmpty() || ui->colourComboBox->currentText() == "Please Select"
    //        || ui->sizeComboBox->currentText() == "Please Select")
   //     ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);
  //  else
 //       ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(true);
}

// AddClient Destructor
AddClient::~AddClient()
{
    delete capi;
    delete ui;
}

// This function is called when the user presses the "OK" button
void AddClient::on_buttonBox_accepted()
{
    //get attributes from ui
    string name = ui->nameLineEdit->text().toStdString();
    int age = ui->ageLineEdit->text().toInt();
    string gender;
    string purpose;
    int attachment;
    int patience;
    string homeType;
    string travel;
    string allergies;
    int noiseTolerance;
    bool needFertile;
    int numChildren;
    string salary;
    float budget;
    string freeTime;

    capi = new CuacsAPI();

    //now give attributes to Client class
    capi->addHuman(name, age, gender, purpose, attachment, patience, homeType,
                   travel, allergies, noiseTolerance, needFertile, numChildren,
                   salary, budget, freeTime);
}

void AddClient::on_nameLineEdit_cursorPositionChanged(int arg1, int arg2)
{
    updateOk();
}

void AddClient::on_ageLineEdit_cursorPositionChanged(int arg1, int arg2)
{
    updateOk();
}

