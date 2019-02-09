#include "viewanimals.h"
#include "ui_viewanimals.h"

ViewAnimals::ViewAnimals(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewAnimals)
{
    QString someList[] = {"first", "second", "third", "fourth"};
    ui->setupUi(this);
    this->setWindowTitle("View Animals");

    for (int i = 0; i < sizeof(someList)/(int)sizeof(QString); i++){
        ui->viewAnimalsListWidget->addItem(someList[i]);
    }
}

ViewAnimals::~ViewAnimals()
{
    delete ui;
}


