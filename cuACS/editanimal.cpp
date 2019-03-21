#include "editanimal.h"
#include "ui_editanimal.h"
#include <viewanimals.h>

EditAnimal::EditAnimal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditAnimal)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(752, 559));
    this->setWindowTitle("Edit an Animal");

    QDoubleValidator* floatValidator = new QDoubleValidator(this);
    QIntValidator* ageRange = new QIntValidator(0, 999, this);
    floatValidator->setRange(0,99999,2);

    ui->ageLineEdit->setValidator(ageRange);
    ui->costLineEdit->setValidator(floatValidator);
    ui->costPerYearLineEdit->setValidator(floatValidator);

    capi = new CuacsAPI();
    updateOk();
}

EditAnimal::~EditAnimal()
{
    delete ui;
    delete capi;
}

void EditAnimal::setData(int &labelText) {
    passedData = labelText;

    vector<Animal*> animalsVec = capi->getAnimals();

    if (animalsVec.size() != 0) {
        //Make QList from vector
        myList.reserve(animalsVec.size());
        std::copy(animalsVec.begin(), animalsVec.end(), std::back_inserter(myList));
    }

    int id = passedData;
    for (int i = 0; i < myList.size(); i++){
        if (to_string(myList.at(i)->getId()).compare(to_string(id)) == 0) {

            string name = myList.at(i)->getName();
            string breed = myList.at(i)->getBreed();
            string title = name + " the " + breed;

            ui->titleLabel->setText(QString::fromStdString(title));
            ui->nameLineEdit->setText(QString::fromStdString(myList.at(i)->getName()));
            ui->typeComboBox->setCurrentText(QString::fromStdString(myList.at(i)->getAnimalType()));
            ui->breedComboBox->setCurrentText(QString::fromStdString(myList.at(i)->getBreed()));
            ui->ageLineEdit->setText(QString::number(myList.at(i)->getAge()));
            ui->sexComboBox->setCurrentText(QString::fromStdString(myList.at(i)->getGender()));
            ui->colourComboBox->setCurrentText(QString::fromStdString(myList.at(i)->getColor()));
            ui->sizeComboBox->setCurrentText(QString::fromStdString(myList.at(i)->getSize()));

            ui->energyComboBox->setCurrentText(QString::fromStdString(myList.at(i)->getEnergy()));
            ui->aggressionLineEdit->setText(QString::number(myList.at(i)->getAggression()));
            ui->aggressionSlider->setValue(myList.at(i)->getAggression());
            ui->attachmentLineEdit->setText(QString::number(myList.at(i)->getAttachment()));
            ui->attachmentSlider->setValue(myList.at(i)->getAttachment());
            ui->obedienceLineEdit->setText(QString::number(myList.at(i)->getObedience()));
            ui->obedienceSlider->setValue(myList.at(i)->getObedience());
            ui->childrenComfortLineEdit->setText(QString::number(myList.at(i)->getChildrenComfort()));
            ui->childrenComfortSlider->setValue(myList.at(i)->getChildrenComfort());
            ui->loudnessLineEdit->setText(QString::number(myList.at(i)->getLoudness()));
            ui->loudnessSlider->setValue(myList.at(i)->getLoudness());
            ui->intelligenceLineEdit->setText(QString::number(myList.at(i)->getIntelligence()));
            ui->intelligenceSlider->setValue(myList.at(i)->getIntelligence());
            ui->cleanlinessLineEdit->setText(QString::number(myList.at(i)->getCleanliness()));
            ui->cleanlinessSlider->setValue(myList.at(i)->getCleanliness());

            if (myList.at(i)->getIsCrateTrained() == true) ui->isCrateTrainedRadioButtonYES->setChecked(true);
            else ui->isCrateTrainedRadioButtonNO->setChecked(true);
            if (myList.at(i)->getIsHypoallergenic() == true) ui->isHypoallergenicRadioButtonYES->setChecked(true);
            else ui->isHypoallergenicRadioButtonNO->setChecked(true);
            if (myList.at(i)->getIsNeutered() == true) ui->isNeuteredRadioButtonYES->setChecked(true);
            else ui->isNeuteredRadioButtonNO->setChecked(true);

            ui->costLineEdit->setText(QString::number(myList.at(i)->getCost()));
            ui->costPerYearLineEdit->setText(QString::number(myList.at(i)->getCostPerYear()));

            i=myList.size();
        }
    }

}

//void EditAnimal::reject() {
//    this->hide();
//    ViewAnimals t;
//    t.setModal(false);
//    t.exec();
//}

void EditAnimal::on_buttonBox_accepted()
{
    //get attributes from ui
    string name = ui->nameLineEdit->text().toStdString();
    string type = ui->typeComboBox->currentText().toStdString();
    string breed = ui->breedComboBox->currentText().toStdString();
    string sex = ui->sexComboBox->currentText().toStdString();
    int age = ui->ageLineEdit->text().toInt();
    string colour = ui->colourComboBox->currentText().toStdString();
    string size = ui->sizeComboBox->currentText().toStdString();

    int aggression = ui->aggressionLineEdit->text().toInt();
    int attachment = ui->attachmentLineEdit->text().toInt();
    int obedience = ui->obedienceLineEdit->text().toInt();
    string energy = ui->energyComboBox->currentText().toStdString();
    int childrenComfort = ui->childrenComfortLineEdit->text().toInt();
    int loudness = ui->loudnessLineEdit->text().toInt();
    float cost = ui->costLineEdit->text().toFloat();
    float costPerYear = ui->costPerYearLineEdit->text().toFloat();
    int intelligence = ui->intelligenceLineEdit->text().toInt();
    int cleanliness = ui->cleanlinessLineEdit->text().toInt();
    bool isCrateTrained;
    bool isHypoallergenic;
    bool isNeutered;

    if (ui->isCrateTrainedRadioButtonYES->isChecked())
        isCrateTrained = true;
    else if (ui->isCrateTrainedRadioButtonNO->isChecked())
        isCrateTrained = false;
    if (ui->isHypoallergenicRadioButtonYES->isChecked())
        isHypoallergenic = true;
    else if (ui->isHypoallergenicRadioButtonNO->isChecked())
        isHypoallergenic = false;
    if (ui->isNeuteredRadioButtonYES->isChecked())
        isNeutered = true;
    else if (ui->isNeuteredRadioButtonNO->isChecked())
        isNeutered = false;

    //now give attributes to animal class
    capi->editAnimal(passedData, name, type, breed, age, sex, colour, size, aggression, attachment, obedience, energy,
                    isCrateTrained, isHypoallergenic, isNeutered, childrenComfort, loudness, cost, costPerYear, intelligence, cleanliness);

    //ViewAnimals t;
    //t.setModal(false);
    //t.exec();
}

void EditAnimal::updateOk()
{
    if (ui->nameLineEdit->text().isEmpty() || ui->typeComboBox->currentText() == "Please Select"
            || ui->breedComboBox->currentText() == "Please Select" || ui->sexComboBox->currentText() == "Please Select"
            || ui->ageLineEdit->text().isEmpty() || ui->colourComboBox->currentText() == "Please Select"
            || ui->sizeComboBox->currentText() == "Please Select"
            || ui->aggressionLineEdit->text().isEmpty() || ui->attachmentLineEdit->text().isEmpty()
            || ui->obedienceLineEdit->text().isEmpty() || ui->cleanlinessLineEdit->text().isEmpty()
            || ui->energyComboBox->currentText() == "Please Select" || ui->childrenComfortLineEdit->text().isEmpty()
            || ui->loudnessLineEdit->text().isEmpty() || ui->costLineEdit->text().isEmpty()
            || ui->costPerYearLineEdit->text().isEmpty() || ui->intelligenceLineEdit->text().isEmpty()
            || (ui->isCrateTrainedRadioButtonYES->isChecked() == false && ui->isCrateTrainedRadioButtonNO->isChecked() == false)
            || (ui->isHypoallergenicRadioButtonYES->isChecked() == false && ui->isHypoallergenicRadioButtonNO->isChecked() == false)
            || (ui->isNeuteredRadioButtonYES->isChecked() == false && ui->isNeuteredRadioButtonNO->isChecked() == false))
        ui->buttonBox->button(QDialogButtonBox::Save)->setEnabled(false);
    else
        ui->buttonBox->button(QDialogButtonBox::Save)->setEnabled(true);
}

void EditAnimal::on_typeComboBox_currentIndexChanged(const QString &arg1)
{
    QStringList list = QStringList();

    if (arg1.toLatin1() == "Cat")
        list << "Exotic" << "Ragdoll" << "British Shorthair" << "Persian" << "Maine Coon" << "American Shorthair"
             << "Scottish Fold" << "Sphynx" << "Devon Rex" << "Abyssinian" << "Oriental" << "Siamese" << "Cornish Rex" << "Norwegian Forest"
             << "Siberian" << "Birman" << "Russian Blue" << "Bengal" << "Tonkinese" << "Burmese";
    else if (arg1.toLatin1() == "Dog")
        list << "Labrador Retriever" << "Golden Retriever" << "German Shepherd" << "French Bulldog"
             << "English Bulldog" << "Beagle" << "Poodle" << "Rottweiler" << "Yorkshire Terrier" << "German Pointer"
             << "Boxer" << "Siberian Husky" << "Dachshund" << "Great Dane" << "Pembroke Welsh Corgi" << "Doberman Pinscher"
             << "Australian Shepherd" << "Miniature Schnauzer" << "Cavalier King Charles Spaniel" << "Shih Tzu";
    else if (arg1.toLatin1() == "Hamster")
        list << "Roborovski" << "Dwarf Winter White" << "Hybrid" << "Chinese"
             << "Dwarf Campbell's Russian" << "Golden";
    else if (arg1.toLatin1() == "Bird")
        list << "Canary" << "Budgierigar" << "Finch" << "Cockatiel" << "Quaker Parakeet"
             << "Pionus Parrot" << "Poicephalus Parrot" << "Amazon" << "Pyrrhura Conure" << "Peach-Faced Lovebird";
    else if (arg1.toLatin1() == "Mouse")
        list << "Wood" << "Deer" << "Albino";
    else if (arg1.toLatin1() == "Guinea Pig")
        list << "American" << "Abyssinian" << "Peruvian" << "Silkie" << "Teddy" << "Texel" << "White Crested"
             << "Rex" << "Himalayan" << "Skinny Pig";

    list.sort();
    list.push_front("Please Select");
    ui->breedComboBox->clear();
    ui->breedComboBox->addItems(list);

    updateOk();

}

void EditAnimal::on_nameLineEdit_cursorPositionChanged(int arg1, int arg2)
{
    updateOk();
}

void EditAnimal::on_breedComboBox_currentIndexChanged(const QString &arg1)
{
    updateOk();
}

void EditAnimal::on_sexComboBox_currentIndexChanged(const QString &arg1)
{
    updateOk();
}

void EditAnimal::on_ageLineEdit_cursorPositionChanged(int arg1, int arg2)
{
    updateOk();
}

void EditAnimal::on_colourComboBox_currentIndexChanged(const QString &arg1)
{
    updateOk();
}

void EditAnimal::on_sizeComboBox_currentIndexChanged(const QString &arg1)
{
    updateOk();
}

void EditAnimal::on_costLineEdit_cursorPositionChanged(int arg1, int arg2)
{
    updateOk();
}

void EditAnimal::on_costPerYearLineEdit_cursorPositionChanged(int arg1, int arg2)
{
    updateOk();
}

void EditAnimal::on_energyComboBox_currentIndexChanged(const QString &arg1)
{
    updateOk();
}


// Slider functionality
void EditAnimal::on_aggressionSlider_valueChanged(int value)
{
    QString s = QString::number(value);
    ui->aggressionLineEdit->setText(s);
    updateOk();
}

void EditAnimal::on_attachmentSlider_valueChanged(int value)
{
    QString s = QString::number(value);
    ui->attachmentLineEdit->setText(s);
    updateOk();
}

void EditAnimal::on_obedienceSlider_valueChanged(int value)
{
    QString s = QString::number(value);
    ui->obedienceLineEdit->setText(s);
    updateOk();
}

void EditAnimal::on_childrenComfortSlider_valueChanged(int value)
{
    QString s = QString::number(value);
    ui->childrenComfortLineEdit->setText(s);
    updateOk();
}

void EditAnimal::on_loudnessSlider_valueChanged(int value)
{
    QString s = QString::number(value);
    ui->loudnessLineEdit->setText(s);
    updateOk();
}

void EditAnimal::on_intelligenceSlider_valueChanged(int value)
{
    QString s = QString::number(value);
    ui->intelligenceLineEdit->setText(s);
    updateOk();
}
void EditAnimal::on_cleanlinessSlider_valueChanged(int value)
{
    QString s = QString::number(value);
    ui->cleanlinessLineEdit->setText(s);
    updateOk();
}

void EditAnimal::on_isCrateTrainedRadioButtonYES_toggled(bool checked)
{
    updateOk();
}

void EditAnimal::on_isCrateTrainedRadioButtonNO_toggled(bool checked)
{
    updateOk();
}

void EditAnimal::on_isHypoallergenicRadioButtonYES_toggled(bool checked)
{
    updateOk();
}

void EditAnimal::on_isHypoallergenicRadioButtonNO_toggled(bool checked)
{
    updateOk();
}


void EditAnimal::on_isNeuteredRadioButtonYES_toggled(bool checked)
{
    updateOk();
}

void EditAnimal::on_isNeuteredRadioButtonNO_toggled(bool checked)
{
    updateOk();
}
