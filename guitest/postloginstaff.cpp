#include "postloginstaff.h"
#include "ui_postloginstaff.h"

PostLoginStaff::PostLoginStaff(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PostLoginStaff)
{
    ui->setupUi(this);
}

PostLoginStaff::~PostLoginStaff()
{
    delete ui;
}
