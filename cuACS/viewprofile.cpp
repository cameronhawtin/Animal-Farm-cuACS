#include "viewprofile.h"
#include "ui_viewprofile.h"

ViewProfile::ViewProfile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewProfile)
{
    ui->setupUi(this);
}

ViewProfile::~ViewProfile()
{
    delete ui;
    delete capi;
}


void ViewProfile::setData(const QString &labelText) {
    ui->nameLineEdit->setText(labelText);

    capi = new CuacsAPI();
    vector<Human*> humansVec = capi->getHumans();



    if (humansVec.size() != 0) {
        //Make QList from vector
        myList.reserve(humansVec.size());
        std::copy(humansVec.begin(), humansVec.end(), std::back_inserter(myList));
    }

    string name = labelText.toStdString();

    for (int i = 0; i < myList.size(); i++){
        if (name == myList.at(i)->getName()) {
            string title = name;
            ui->titleLabel->setText(QString::fromStdString(title));

            ui->emailLineEdit->setText(QString::fromStdString(myList.at(i)->getEmail()));
            ui->ageLineEdit->setText(QString::number(myList.at(i)->getAge()));
            ui->sexLineEdit->setText(QString::fromStdString(myList.at(i)->getGender()));
            ui->childrenLineEdit->setText(QString::number(myList.at(i)->getNumChildren()));
            ui->salaryLineEdit->setText(QString::fromStdString(myList.at(i)->getSalary()));
            ui->purposeLineEdit->setText(QString::fromStdString(myList.at(i)->getPurpose()));
            ui->homeLineEdit->setText(QString::fromStdString(myList.at(i)->getHomeType()));
            ui->travelLineEdit->setText(QString::fromStdString(myList.at(i)->getTravel()));
            ui->freeTimeLineEdit->setText(QString::fromStdString(myList.at(i)->getFreeTime()));
            ui->budgetLineEdit->setText(QString::number(myList.at(i)->getBudget()));
            ui->irritationLineEdit->setText(QString::number(myList.at(i)->getNoiseTolerance()));
            ui->patienceLineEdit->setText(QString::number(myList.at(i)->getPatience()));
            ui->attachmentLineEdit->setText(QString::number(myList.at(i)->getAttachment()));
            ui->addressLineEdit->setText(QString::fromStdString(myList.at(i)->getAddress()));
            ui->phoneLineEdit->setText(QString::fromStdString(myList.at(i)->getPhoneNumber()));
            if (myList.at(i)->getNeedFertile())
                ui->neuteredLineEdit->setText("Yes");
            else
                ui->neuteredLineEdit->setText("No");

            if (myList.at(i)->getAllergies().find("Cat")!=std::string::npos) ui->catAllergyCheckBox->setChecked(true);
            else ui->catAllergyCheckBox->setChecked(false);
            if (myList.at(i)->getAllergies().find("Dog")!=std::string::npos) ui->dogAllergyCheckBox->setChecked(true);
            else ui->dogAllergyCheckBox->setChecked(false);
            if (myList.at(i)->getAllergies().find("Bird")!=std::string::npos) ui->birdAllergyCheckBox->setChecked(true);
            else ui->birdAllergyCheckBox->setChecked(false);
            if (myList.at(i)->getAllergies().find("Hamster")!=std::string::npos) ui->hamsterAllergyCheckBox->setChecked(true);
            else ui->hamsterAllergyCheckBox->setChecked(false);
            if (myList.at(i)->getAllergies().find("Mouse")!=std::string::npos) ui->mouseAllergyCheckBox->setChecked(true);
            else ui->mouseAllergyCheckBox->setChecked(false);
            if (myList.at(i)->getAllergies().find("Guineapig")!=std::string::npos) ui->guineapigAllergyCheckBox->setChecked(true);
            else ui->guineapigAllergyCheckBox->setChecked(false);
        }
    }
}
