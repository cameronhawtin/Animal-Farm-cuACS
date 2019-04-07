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
    this->setFixedSize(QSize(907, 441));
    this->setWindowTitle("Add a Client");
    int id = QFontDatabase::addApplicationFont ( ":/fonts/EgyptienneRoman.ttf" );
    QFont egyptienne(QFontDatabase::applicationFontFamilies(id).at(0), 11);
    this->setFont(egyptienne);

    QDoubleValidator* floatValidator = new QDoubleValidator(this);
    QIntValidator* ageRange = new QIntValidator(0, 999, this);
    QIntValidator* childrenRange = new QIntValidator(0, 99, this);
    floatValidator->setRange(0,99999,2);

    ui->ageLineEdit->setValidator(ageRange);
    ui->childrenLineEdit->setValidator(childrenRange);
    ui->budgetLineEdit->setValidator(floatValidator);

    capi = new CuacsAPI();
    vector<Human*> humansVec = capi->getHumans();

    if (humansVec.size() != 0) {
        //Make QList from vector
        myList.reserve(int(humansVec.size()));
        std::copy(humansVec.begin(), humansVec.end(), std::back_inserter(myList));
    }

    //make a vector of currently existing usernames
    for (int i = 0; i < myList.size(); i++){
        users.push_back(myList.at(i)->getName());
    }

    updateOk();
}

// AddClient Destructor
AddClient::~AddClient()
{
    delete capi;
    delete ui;
}

// Checks for all info to be filled to enable the "OK" button
void AddClient::updateOk()
{
    // checks to see if username is taken
    bool userAvailable;

    std::vector<std::string>::iterator i;
    i = std::find(users.begin(), users.end(), ui->nameLineEdit->text().toStdString());

    if (i!=users.end()) userAvailable = false;
    else {
        userAvailable = true;
    }

    // checks to see if the form is completely filled
    if (    userAvailable == false ||
            ui->nameLineEdit->text().isEmpty() ||
            ui->ageLineEdit->text().isEmpty() ||
            ui->sexComboBox->currentText() == "Please Select" ||
            ui->typePreferenceComboBox->currentText() == "Please Select" ||
            ui->purposeComboBox->currentText() == "Please Select" ||
            ui->attachmentLineEdit->text().isEmpty() ||
            ui->patienceLineEdit->text().isEmpty() ||
            ui->homeTypeComboBox->currentText() == "Please Select" ||
            ui->travelComboBox->currentText() == "Please Select" ||
            //ui->allergicComboBox->currentText() == "Please Select" ||
            ui->irritationLineEdit->text().isEmpty() ||
            (!ui->isNeuteredRadioButtonYES->isChecked() && !ui->isNeuteredRadioButtonNO->isChecked()) ||
            ui->childrenLineEdit->text().isEmpty() ||
            ui->salaryComboBox->currentText() == "Please Select" ||
            ui->budgetLineEdit->text().isEmpty() ||
            ui->freeTimeComboBox->currentText() == "Please Select" ||
            ui->emailLineEdit->text().isEmpty() ||
            ui->phoneLineEdit->text().isEmpty() ||
            ui->addressLineEdit->text().isEmpty())
                ui->buttonBox->button(QDialogButtonBox::Save)->setEnabled(false);
        else
            ui->buttonBox->button(QDialogButtonBox::Save)->setEnabled(true);
}



// This function is called when the user presses the "Save" button
void AddClient::on_buttonBox_accepted()
{
    //create a string containing all alergies selected
    string allergies = "";
    if (ui->catAllergyCheckBox->isChecked() == true)
        allergies+="Cat";
    if (ui->dogAllergyCheckBox->isChecked() == true)
        allergies+="Dog";
    if (ui->birdAllergyCheckBox->isChecked() == true)
        allergies+="Bird";
    if (ui->hamsterAllergyCheckBox->isChecked() == true)
        allergies+="Hamster";
    if (ui->mouseAllergyCheckBox->isChecked() == true)
        allergies+="Mouse";
    if (ui->guineapigAllergyCheckBox->isChecked() == true)
        allergies+="Guineapig";

    //get attributes from ui
    string name = ui->nameLineEdit->text().toStdString();
    int age = ui->ageLineEdit->text().toInt();
    string gender = ui->sexComboBox->currentText().toStdString();
    string typePreference = ui->typePreferenceComboBox->currentText().toStdString();
    string purpose = ui->purposeComboBox->currentText().toStdString();
    int attachment = ui->attachmentLineEdit->text().toInt();
    int patience = ui->patienceLineEdit->text().toInt();
    string homeType = ui->homeTypeComboBox->currentText().toStdString();
    string travel = ui->travelComboBox->currentText().toStdString();
    //string allergies = ui->allergicComboBox->currentText().toStdString();
    int noiseTolerance = ui->irritationLineEdit->text().toInt();
    bool needFertile = ui->isNeuteredRadioButtonYES->isChecked();
    int numChildren = ui->childrenLineEdit->text().toInt();
    string salary = ui->salaryComboBox->currentText().toStdString();
    float budget = ui->budgetLineEdit->text().toFloat();
    string freeTime = ui->freeTimeComboBox->currentText().toStdString();
    string email = ui->emailLineEdit->text().toStdString();
    string phone = ui->phoneLineEdit->text().toStdString();
    string address = ui->addressLineEdit->text().toStdString();

    //capi = new CuacsAPI();

    //now give attributes to Client class
    capi->addHuman(name, age, gender, typePreference, purpose, attachment, patience, homeType,
                   travel, allergies, noiseTolerance, needFertile, numChildren,
                   salary, budget, freeTime, email, phone, address);
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

void AddClient::on_isNeuteredRadioButtonYES_toggled()
{
    updateOk();
}

void AddClient::on_isNeuteredRadioButtonNO_toggled()
{
    updateOk();
}

void AddClient::on_budgetLineEdit_textChanged()
{
    updateOk();
}

void AddClient::on_childrenLineEdit_textChanged()
{
    updateOk();
}

void AddClient::on_ageLineEdit_textChanged()
{
    updateOk();
}

void AddClient::on_nameLineEdit_textChanged()
{
    updateOk();
}

void AddClient::on_sexComboBox_currentIndexChanged(int i)
{
    updateOk();
}

void AddClient::on_salaryComboBox_currentIndexChanged(int i)
{
    updateOk();
}

void AddClient::on_typePreferenceComboBox_currentIndexChanged(int i)
{
    updateOk();
}


void AddClient::on_purposeComboBox_currentIndexChanged(int i)
{
    updateOk();
}

void AddClient::on_homeTypeComboBox_currentIndexChanged(int i)
{
    updateOk();
}

void AddClient::on_travelComboBox_currentIndexChanged(int i)
{
    updateOk();
}

void AddClient::on_freeTimeComboBox_currentIndexChanged(int i)
{
    updateOk();
}


void AddClient::on_emailLineEdit_textChanged(const QString &arg1)
{
    updateOk();
}

void AddClient::on_addressLineEdit_textChanged(const QString &arg1)
{
    updateOk();
}

void AddClient::on_phoneLineEdit_textChanged(const QString &arg1)
{
    updateOk();
}
