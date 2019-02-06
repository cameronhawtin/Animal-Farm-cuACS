#include "addanimal.h"
#include "ui_addanimal.h"

using namespace std;

AddAnimal::AddAnimal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddAnimal)
{
    ui->setupUi(this);
    QString s = ui->typeComboBox->currentText();

}

AddAnimal::~AddAnimal()
{
    delete ui;
}

void AddAnimal::on_buttonBox_accepted()
{

    //get attributes from ui
    QString name = ui->nameLineEdit->text();
    QString type = ui->typeComboBox->currentText();
    QString breed = ui->breedComboBox->currentText();
    QString sex = ui->sexComboBox->currentText();
    int age = ui->ageLineEdit->text().toInt();
    QString colour = ui->colourComboBox->currentText();
    QString size = ui->sizeComboBox->currentText();

    //change to std strings for storage
    string typeString = type.toUtf8().constData();
    string colourString = type.toUtf8().constData();

    //printf("%s\n%s\n", typeString, colourString);
}

void AddAnimal::on_typeComboBox_currentIndexChanged(const QString &arg1)
{
    QStringList list = QStringList();

    if (arg1.toLatin1() == "Cat"){
        list << "Tabby" << "Siamese" << "Persian";
    }
    else if (arg1.toLatin1() == "Dog"){
        list << "" << "" << "";
    }
    else if (arg1.toLatin1() == "Hamster"){
        list << "" << "" << "";
    }
    else if (arg1.toLatin1() == "Fish"){
        list << "" << "" << "";
    }
    else if (arg1.toLatin1() == "Snake"){
        list << "" << "" << "";
    }

    ui->breedComboBox->clear();
    ui->breedComboBox->addItems(list);

}
