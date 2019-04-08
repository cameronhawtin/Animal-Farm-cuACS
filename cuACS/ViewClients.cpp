#include "viewclients.h"
#include "ui_viewclients.h"

ViewClients::ViewClients(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewClients)
{
    ui->setupUi(this);
    //this->setFixedSize(QSize(1112, 509));
    this->setWindowTitle("View Clients");
    int id = QFontDatabase::addApplicationFont ( ":/fonts/EgyptienneRoman.ttf" );
    QFont egyptienne(QFontDatabase::applicationFontFamilies(id).at(0), 11);
    this->setFont(egyptienne);

    capi = new CuacsAPI();

    vector<Human*> humansVec = capi->getHumans();

    if (humansVec.size() != 0) {
        sort(humansVec.begin(), humansVec.end(),sortClients);
        //Make QList from vector
        myList.reserve(humansVec.size());
        std::copy(humansVec.begin(), humansVec.end(), std::back_inserter(myList));

        for (int i = 0; i < humansVec.size(); i++)
            ui->viewClientsListWidget->addItem(QString::fromStdString(myList.at(i)->getName()) + " (ID: " + QString::number(myList.at(i)->getId()) + ")");
        ui->viewClientsListWidget->setCurrentRow(0);
    }

}

ViewClients::~ViewClients()
{
    delete capi;
    delete ui;
}

bool ViewClients::sortClients(Human* a, Human* b){
    return a->getId() < b->getId();
}

void ViewClients::on_viewClientsListWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    string selectedString = current->text().toStdString();

    stringstream ss;
    ss << selectedString;

    string temp;
    int id = -1;
    while (!ss.eof()) {
        ss >> temp;
        stringstream(temp) >> id;
    }

    string stringId = to_string(id);


    string name, gender, typePreference, purpose, homeType, travel, allergies, salary, freeTime, email, address, phone;
    int age, attachment, patience, noiseTolerance, numChildren;
    bool needFertile;
    float budget;


    for (int i = 0; i < myList.size(); i++){
        if (to_string(myList.at(i)->getId()).compare(stringId) == 0) {
            name = myList.at(i)->getName();
            gender = myList.at(i)->getGender();
            typePreference = myList.at(i)->getTypePreference();
            purpose = myList.at(i)->getPurpose();
            homeType = myList.at(i)->getHomeType();
            travel = myList.at(i)->getTravel();
            allergies = myList.at(i)->getAllergies();
            salary = myList.at(i)->getSalary();
            freeTime = myList.at(i)->getFreeTime();
            email = myList.at(i)->getEmail();
            address = myList.at(i)->getAddress();
            phone = myList.at(i)->getPhoneNumber();

            age = myList.at(i)->getAge();
            attachment = myList.at(i)->getAttachment();
            patience = myList.at(i)->getPatience();
            noiseTolerance = myList.at(i)->getNoiseTolerance();
            numChildren = myList.at(i)->getNumChildren();

            needFertile = myList.at(i)->getNeedFertile();
            budget = myList.at(i)->getBudget();

            i = myList.size();
        }
    }

    string title = name;
    ui->titleLabel->setText(QString::fromStdString(title));

    ui->nameLineEdit->setText(QString::fromStdString(name));
    ui->emailLineEdit->setText(QString::fromStdString(email));
    ui->ageLineEdit_2->setText(QString::number(age));
    ui->sexLineEdit_2->setText(QString::fromStdString(gender));
    ui->childrenLineEdit->setText(QString::number(numChildren));
    ui->salaryLineEdit->setText(QString::fromStdString(salary));
    //ui->allergyLineEdit->setText(QString::fromStdString(allergies));
    ui->typePreferenceLineEdit->setText(QString::fromStdString(typePreference));
    ui->purposeLineEdit->setText(QString::fromStdString(purpose));
    ui->homeLineEdit->setText(QString::fromStdString(homeType));
    ui->travelLineEdit->setText(QString::fromStdString(travel));
    ui->freeTimeLineEdit->setText(QString::fromStdString(freeTime));
    ui->budgetLineEdit->setText(QString::number(budget));
    ui->irritationLineEdit->setText(QString::number(noiseTolerance));
    ui->patienceLineEdit->setText(QString::number(patience));
    ui->attachmentLineEdit_2->setText(QString::number(attachment));
    ui->addressLineEdit->setText(QString::fromStdString(address));
    ui->phoneLineEdit->setText(QString::fromStdString(phone));
    if (needFertile)
        ui->neuteredLineEdit->setText("Yes");
    else
        ui->neuteredLineEdit->setText("No");

    if (allergies.find("Cat")!=std::string::npos) ui->catAllergyCheckBox->setChecked(true);
    else ui->catAllergyCheckBox->setChecked(false);
    if (allergies.find("Dog")!=std::string::npos) ui->dogAllergyCheckBox->setChecked(true);
    else ui->dogAllergyCheckBox->setChecked(false);
    if (allergies.find("Bird")!=std::string::npos) ui->birdAllergyCheckBox->setChecked(true);
    else ui->birdAllergyCheckBox->setChecked(false);
    if (allergies.find("Hamster")!=std::string::npos) ui->hamsterAllergyCheckBox->setChecked(true);
    else ui->hamsterAllergyCheckBox->setChecked(false);
    if (allergies.find("Mouse")!=std::string::npos) ui->mouseAllergyCheckBox->setChecked(true);
    else ui->mouseAllergyCheckBox->setChecked(false);
    if (allergies.find("Guineapig")!=std::string::npos) ui->guineapigAllergyCheckBox->setChecked(true);
    else ui->guineapigAllergyCheckBox->setChecked(false);
}
