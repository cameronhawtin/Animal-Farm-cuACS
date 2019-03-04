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
    if (ui->nameLineEdit->text().isEmpty() ||
            ui->ageLineEdit->text().isEmpty() ||
            ui->sexComboBox->currentText() == "Please Select" ||
            ui->purposeComboBox->currentText() == "Please Select" ||
            ui->attachmentLineEdit->text().isEmpty() ||
            ui->patienceLineEdit->text().isEmpty() ||
            ui->homeTypeComboBox->currentText() == "Please Select" ||
            ui->travelComboBox->currentText() == "Please Select" ||
            ui->allergicComboBox->currentText() == "Please Select" ||
            ui->irritationLineEdit->text().isEmpty() ||
            (!ui->isNeuteredRadioButtonYES->isChecked() && !ui->isNeuteredRadioButtonNO->isChecked()) ||
            ui->childrenLineEdit->text().isEmpty() ||
            ui->salaryComboBox->currentText() == "Please Select" ||
            ui->budgetLineEdit->text().isEmpty() ||
            ui->freeTimeComboBox->currentText() == "Please Select" ||
            ui->emailLineEdit->text().isEmpty() ||
            ui->phoneLineEdit->text().isEmpty() ||
            ui->addressLineEdit->text().isEmpty())
                ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);
        else
            ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(true);
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
    string gender = ui->sexComboBox->currentText().toStdString();
    string purpose = ui->purposeComboBox->currentText().toStdString();
    int attachment = ui->attachmentLineEdit->text().toInt();
    int patience = ui->patienceLineEdit->text().toInt();
    string homeType = ui->homeTypeComboBox->currentText().toStdString();
    string travel = ui->travelComboBox->currentText().toStdString();
    string allergies = ui->allergicComboBox->currentText().toStdString();
    int noiseTolerance = ui->irritationLineEdit->text().toInt();
    bool needFertile = ui->isNeuteredRadioButtonYES->isChecked();
    int numChildren = ui->childrenLineEdit->text().toInt();
    string salary = ui->salaryComboBox->currentText().toStdString();
    float budget = ui->budgetLineEdit->text().toFloat();
    string freeTime = ui->freeTimeComboBox->currentText().toStdString();
    string email = ui->emailLineEdit->text().toStdString();
    string phone = ui->phoneLineEdit->text().toStdString();
    string address = ui->addressLineEdit->text().toStdString();

    capi = new CuacsAPI();

    //now give attributes to Client class
    capi->addHuman(name, age, gender, purpose, attachment, patience, homeType,
                   travel, allergies, noiseTolerance, needFertile, numChildren,
                   salary, budget, freeTime, email, phone, address);
}

void AddClient::on_nameLineEdit_cursorPositionChanged(int arg1, int arg2)
{
    updateOk();
}

void AddClient::on_ageLineEdit_cursorPositionChanged(int arg1, int arg2)
{
    updateOk();
}


void AddClient::on_patienceSlider_valueChanged(int value)
{
    QString s = QString::number(value);
    ui->patienceLineEdit->setText(s);
    updateOk();
}

void AddClient::on_irritationSlider_valueChanged(int value)
{
    QString s = QString::number(value);
    ui->irritationLineEdit->setText(s);
    updateOk();
}

void AddClient::on_attachmentSlider_valueChanged(int value)
{
    QString s = QString::number(value);
    ui->attachmentLineEdit->setText(s);
    updateOk();
}

void AddClient::on_isNeuteredRadioButtonYES_toggled(bool checked)
{
    updateOk();
}

void AddClient::on_isNeuteredRadioButtonNO_toggled(bool checked)
{
    updateOk();
}

void AddClient::on_budgetLineEdit_textChanged(const QString &arg1)
{
    updateOk();
}

void AddClient::on_childrenLineEdit_textChanged(const QString &arg1)
{
    updateOk();
}

void AddClient::on_ageLineEdit_textChanged(const QString &arg1)
{
    updateOk();
}

void AddClient::on_nameLineEdit_textChanged(const QString &arg1)
{
    updateOk();
}

void AddClient::on_sexComboBox_currentIndexChanged(const QString &arg1)
{
    updateOk();
}

void AddClient::on_salaryComboBox_currentIndexChanged(const QString &arg1)
{
    updateOk();
}

void AddClient::on_purposeComboBox_currentIndexChanged(const QString &arg1)
{
    updateOk();
}

void AddClient::on_homeTypeComboBox_currentIndexChanged(const QString &arg1)
{
    updateOk();
}

void AddClient::on_travelComboBox_currentIndexChanged(const QString &arg1)
{
    updateOk();
}

void AddClient::on_freeTimeComboBox_currentIndexChanged(const QString &arg1)
{
    updateOk();
}

void AddClient::on_allergicComboBox_currentTextChanged(const QString &arg1)
{
    updateOk();
}
