#include "viewclients.h"
#include "ui_viewclients.h"

ViewClients::ViewClients(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewClients)
{
    ui->setupUi(this);
    this->setWindowTitle("View Clients");
}

ViewClients::~ViewClients()
{
    delete ui;
}
