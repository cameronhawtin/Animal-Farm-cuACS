#include "viewanimals.h"
#include "ui_viewanimals.h"

using namespace std;

ViewAnimals::ViewAnimals(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewAnimals)
{

    ui->setupUi(this);
    this->setWindowTitle("View Animals");

    CuacsAPI capi;
    capi.init();

    *animalsVec = capi.getAnimals();

    if (animalsVec->size() != 0) {
        cout << "Number of Animals: "<< animalsVec->size() << endl;
        cout << animalsVec->at(0)->getAnimalType() << endl;

        //Make QList from vector
        myList.reserve(animalsVec->size());
        std::copy(animalsVec->begin(), animalsVec->end(), std::back_inserter(myList));

        for (int i = 0; i < animalsVec->size(); i++){
            ui->viewAnimalsListWidget->addItem(QString::fromStdString(myList.at(i)->getName()) + " (ID: " + QString::number(myList.at(i)->getId()) + ")");
        }
    }
}

ViewAnimals::~ViewAnimals()
{
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
    tempIndex = ui->typeComboBox->findText(QString::fromStdString(type));
    ui->typeComboBox->setCurrentIndex(tempIndex);

    QStringList list = QStringList();

    if (ui->typeComboBox->currentText().toStdString() == "Cat")
        list << "Please Select" << "Tabby" << "Siamese" << "Persian";
    else if (ui->typeComboBox->currentText().toStdString() == "Dog")
        list << "Please Select" << "Golden Retriever" << "Poodle" << "Bulldog";
    else if (ui->typeComboBox->currentText().toStdString() == "Hamster")
        list << "Please Select" << "Dwarf" << "Winter White" << "Chinese";
    else if (ui->typeComboBox->currentText().toStdString() == "Fish")
        list << "Please Select" << "Common Carp" << "Guppy" << "Goldfish";
    else if (ui->typeComboBox->currentText().toStdString() == "Snake")
        list << "Please Select" << "Anaconda" << "Viper" << "Python";

    ui->breedComboBox->clear();
    ui->breedComboBox->addItems(list);

    tempIndex = ui->breedComboBox->findText(QString::fromStdString(breed));
    ui->breedComboBox->setCurrentIndex(tempIndex);
    ui->ageLineEdit->setText(QString::number(age));
    tempIndex = ui->sexComboBox->findText(QString::fromStdString(sex));
    ui->sexComboBox->setCurrentIndex(tempIndex);
    tempIndex = ui->colourComboBox->findText(QString::fromStdString(colour));
    ui->colourComboBox->setCurrentIndex(tempIndex);
    tempIndex = ui->sizeComboBox->findText(QString::fromStdString(size));
    ui->sizeComboBox->setCurrentIndex(tempIndex);
}



