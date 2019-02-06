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

void PostLoginStaff::on_AddAnimalButton_clicked()
{
    //open add an animal interface
    addAnimal = new AddAnimal(this);
    addAnimal->show();
}

void PostLoginStaff::on_ViewAnimalsButton_clicked()
{
    //open view animals interface
    viewAnimals = new ViewAnimals(this);
    viewAnimals->show();
}

void PostLoginStaff::on_AddClientButton_clicked()
{
    //open add a client interface
}

void PostLoginStaff::on_ViewClientsButton_clicked()
{
    //open view clients interface
}
