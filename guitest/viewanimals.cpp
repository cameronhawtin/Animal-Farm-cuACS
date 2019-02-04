#include "viewanimals.h"
#include "ui_viewanimals.h"

ViewAnimals::ViewAnimals(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewAnimals)
{
    QString someList[] = {"first", "second"};
    ui->setupUi(this);

    for (int i = 0; i < 2; i++){
        ui->viewAnimalsListWidget->addItem(someList[i]);
    }
}

ViewAnimals::~ViewAnimals()
{
    delete ui;
}
