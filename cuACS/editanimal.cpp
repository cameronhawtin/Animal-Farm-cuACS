#include "editanimal.h"
#include "ui_editanimal.h"

EditAnimal::EditAnimal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditAnimal)
{
    ui->setupUi(this);
}

EditAnimal::~EditAnimal()
{
    delete ui;
}

void EditAnimal::setData(int &labelText) {
    passedData = labelText;
}
