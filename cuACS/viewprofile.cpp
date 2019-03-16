#include "viewprofile.h"
#include "ui_viewprofile.h"

ViewProfile::ViewProfile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewProfile)
{
    ui->setupUi(this);
}

ViewProfile::~ViewProfile()
{
    delete ui;
}




void ViewProfile::setData(const QString &labelText) {
    ui->nameLineEdit_25->setText(labelText);
}
