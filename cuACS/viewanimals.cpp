#include "viewanimals.h"
#include "ui_viewanimals.h"

using namespace std;

//Constructor for ViewAnimals class
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

    ui->aggressionLineEdit->setReadOnly(true);
    ui->attachmentLineEdit->setReadOnly(true);
    ui->obedienceLineEdit->setReadOnly(true);
    ui->cleanlinessLineEdit->setReadOnly(true);
    ui->childrenComfortLineEdit->setReadOnly(true);
    ui->loudnessLineEdit->setReadOnly(true);
    ui->intelligenceLineEdit->setReadOnly(true);
    ui->energyLineEdit->setReadOnly(true);
    ui->costLineEdit->setReadOnly(true);
    ui->costPerYearLineEdit->setReadOnly(true);
    ui->isHypoallergenicLineEdit->setReadOnly(true);
    ui->isCrateTrainedLineEdit->setReadOnly(true);
    ui->isNeuteredLineEdit->setReadOnly(true);

    capi = new CuacsAPI();

    vector<Animal*> animalsVec = capi->getAnimals();

    if (animalsVec.size() != 0) {
        //Make QList from vector
        myList.reserve(animalsVec.size());
        std::copy(animalsVec.begin(), animalsVec.end(), std::back_inserter(myList));

        for (int i = 0; i < animalsVec.size(); i++)
            ui->viewAnimalsListWidget->addItem(QString::fromStdString(myList.at(i)->getName()) + " (ID: " + QString::number(myList.at(i)->getId()) + ")");
            ui->viewAnimalsListWidget->setCurrentRow(0);
    }
}

//Destructor for ViewAnimals class
ViewAnimals::~ViewAnimals()
{
    delete capi;
    delete ui;
}

//This function updates the fields on the right hand side when the user clicks on an animal in the list widget
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

    string name, type, breed, sex, colour, size, energy;
    int age, aggression, attachment, obedience, childrenComfort, loudness, intelligence, cleanliness;
    bool isCrateTrained, isHypoallergenic, isNeutered;
    float cost, costPerYear;

    for (int i = 0; i < myList.size(); i++){
        if (to_string(myList.at(i)->getId()).compare(stringId) == 0) {
            name = myList.at(i)->getName();
            type = myList.at(i)->getAnimalType();
            breed = myList.at(i)->getBreed();
            age = myList.at(i)->getAge();
            sex = myList.at(i)->getGender();
            colour = myList.at(i)->getColor();
            size = myList.at(i)->getSize();

            energy = myList.at(i)->getEnergy();
            aggression = myList.at(i)->getAggression();
            attachment = myList.at(i)->getAttachment();
            obedience = myList.at(i)->getObedience();
            childrenComfort = myList.at(i)->getChildrenComfort();
            loudness = myList.at(i)->getLoudness();
            intelligence = myList.at(i)->getIntelligence();
            cleanliness = myList.at(i)->getCleanliness();
            isCrateTrained = myList.at(i)->getIsCrateTrained();
            isHypoallergenic = myList.at(i)->getIsHypoallergenic();
            isNeutered = myList.at(i)->getIsNeutered();
            cost = myList.at(i)->getCost();
            costPerYear = myList.at(i)->getCostPerYear();

            i = myList.size();
        }
    }

    string title = name + " the " + breed;
    ui->titleLabel->setText(QString::fromStdString(title));
    ui->nameLineEdit->setText(QString::fromStdString(name));
    ui->typeLineEdit->setText(QString::fromStdString(type));
    ui->breedLineEdit->setText(QString::fromStdString(breed));
    ui->ageLineEdit->setText(QString::number(age));
    ui->sexLineEdit->setText(QString::fromStdString(sex));
    ui->colourLineEdit->setText(QString::fromStdString(colour));
    ui->sizeLineEdit->setText(QString::fromStdString(size));

    ui->energyLineEdit->setText(QString::fromStdString(energy));
    ui->aggressionLineEdit->setText(QString::number(aggression));
    ui->attachmentLineEdit->setText(QString::number(attachment));
    ui->obedienceLineEdit->setText(QString::number(obedience));
    ui->childrenComfortLineEdit->setText(QString::number(childrenComfort));
    ui->loudnessLineEdit->setText(QString::number(loudness));
    ui->intelligenceLineEdit->setText(QString::number(intelligence));
    ui->cleanlinessLineEdit->setText(QString::number(cleanliness));
    if (isCrateTrained == true) ui->isCrateTrainedLineEdit->setText("Yes"); else ui->isCrateTrainedLineEdit->setText("No");
    if (isHypoallergenic == true) ui->isHypoallergenicLineEdit->setText("Yes"); else ui->isHypoallergenicLineEdit->setText("No");
    if (isNeutered == true) ui->isNeuteredLineEdit->setText("Yes"); else ui->isNeuteredLineEdit->setText("No");
    ui->costLineEdit->setText(QString::number(cost));
    ui->costPerYearLineEdit->setText(QString::number(costPerYear));
}



