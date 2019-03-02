#include "viewclients.h"
#include "ui_viewclients.h"

ViewClients::ViewClients(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewClients)
{
    ui->setupUi(this);
    this->setWindowTitle("View Clients");

    ui->nameLineEdit_2->setReadOnly(true);
    ui->ageLineEdit_2->setReadOnly(true);
    ui->sexLineEdit_2->setReadOnly(true);
    ui->childrenLineEdit->setReadOnly(true);
    ui->salaryLineEdit->setReadOnly(true);
    ui->allergyLineEdit->setReadOnly(true);
    ui->purposeLineEdit->setReadOnly(true);
    ui->homeLineEdit->setReadOnly(true);
    ui->travelLineEdit->setReadOnly(true);
    ui->freeTimeLineEdit->setReadOnly(true);
    ui->budgetLineEdit->setReadOnly(true);
    ui->irritationLineEdit->setReadOnly(true);
    ui->patienceLineEdit->setReadOnly(true);
    ui->attachmentLineEdit_2->setReadOnly(true);
    ui->neuteredLineEdit->setReadOnly(true);

    capi = new CuacsAPI();

    vector<Human*> humansVec = capi->getHumans(); //THIS LINE CRASHES

    if (humansVec.size() != 0) {
        //Make QList from vector
        myList.reserve(humansVec.size());
        std::copy(humansVec.begin(), humansVec.end(), std::back_inserter(myList));

        for (int i = 0; i < humansVec.size(); i++)
            ui->viewClientsListWidget->addItem(QString::fromStdString(myList.at(i)->getName()) + " (ID: " + QString::number(myList.at(i)->getId()) + ")");
    }

}

ViewClients::~ViewClients()
{
    delete capi;
    delete ui;
}
