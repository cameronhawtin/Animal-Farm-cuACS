#include "viewanimals.h"
#include "ui_viewanimals.h"
#include <QList>


using namespace std;

ViewAnimals::ViewAnimals(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewAnimals)
{

    ui->setupUi(this);
    this->setWindowTitle("View Animals");

    CuacsAPI capi;
    capi.init();

    vector<Animal*> animalsVec = capi.getAnimals();
    cout << animalsVec.size() << endl;
    cout << animalsVec.at(0)->getSize() << endl;

    //QList<T> myList;
    //myList.reserve(vector.size());
    //std::copy(vector.begin(), vector.end(), std::back_inserter(myList));

//    for (unsigned int i = 0; i < animalList.size(); i++)
//        cout << "asdsadsa";

//    QString someList[] = {"first", "second", "third", "fourth"};


//    for (int i = 0; i < sizeof(someList)/(int)sizeof(QString); i++){
//        ui->viewAnimalsListWidget->addItem(someList[i]);
//    }
}

ViewAnimals::~ViewAnimals()
{
    delete ui;
}


