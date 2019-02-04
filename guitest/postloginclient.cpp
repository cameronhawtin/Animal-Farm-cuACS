#include "postloginclient.h"
#include "ui_postloginclient.h"

PostLoginClient::PostLoginClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PostLoginClient)
{
    ui->setupUi(this);
}

PostLoginClient::~PostLoginClient()
{
    delete ui;
}
