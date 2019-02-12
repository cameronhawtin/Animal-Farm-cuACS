#include "viewanimals.h"
#include "ui_viewanimals.h"

using namespace std;

ViewAnimals::ViewAnimals(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewAnimals)
{

    ui->setupUi(this);
    this->setWindowTitle("View Animals");

    ui->nameLineEdit->setReadOnly(true);
    ui->typeLineEdit->setReadOnly(true);
    ui->breedLineEdit->setReadOnly(true);
    ui->ageLineEdit->setReadOnly(true);
    ui->sexLineEdit->setReadOnly(true);
    ui->colourLineEdit->setReadOnly(true);
    ui->sizeLineEdit->setReadOnly(true);

    CuacsAPI capi;
    capi.init();

    *animalsVec = capi.getAnimals();

    if (animalsVec->size() != 0) {
        //Make QList from vector
        myList.reserve(animalsVec->size());
        std::copy(animalsVec->begin(), animalsVec->end(), std::back_inserter(myList));

        for (int i = 0; i < animalsVec->size(); i++)
            ui->viewAnimalsListWidget->addItem(QString::fromStdString(myList.at(i)->getName()) + " (ID: " + QString::number(myList.at(i)->getId()) + ")");
    }
}

ViewAnimals::~ViewAnimals()
{
    delete capi;
    delete animalsVec;
    delete ui;
}


void ViewAnimals::on_viewAnimalsListWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
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
    string name, type, breed, sex, colour, size;
    int age;

    for (int i = 0; i < myList.size(); i++){
        if (to_string(myList.at(i)->getId()).find(stringId) != string::npos) {
            name = myList.at(i)->getName();
            type = myList.at(i)->getAnimalType();
            breed = myList.at(i)->getBreed();
            age = myList.at(i)->getAge();
            sex = myList.at(i)->getGender();
            colour = myList.at(i)->getColor();
            size = myList.at(i)->getSize();
            i = myList.size();
        }
    }
    int tempIndex;
    ui->nameLineEdit->setText(QString::fromStdString(name));
    ui->typeLineEdit->setText(QString::fromStdString(type));
    ui->breedLineEdit->setText(QString::fromStdString(breed));
    ui->ageLineEdit->setText(QString::number(age));
    ui->sexLineEdit->setText(QString::fromStdString(sex));
    ui->colourLineEdit->setText(QString::fromStdString(colour));
    ui->sizeLineEdit->setText(QString::fromStdString(size));
}



