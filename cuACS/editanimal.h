#ifndef EDITANIMAL_H
#define EDITANIMAL_H

#include <QDialog>
#include <iostream>
#include <QPushButton>
#include <CuacsAPI.h>


namespace Ui {
class EditAnimal;
}

class EditAnimal : public QDialog
{
    Q_OBJECT

public:
    explicit EditAnimal(QWidget *parent = nullptr);
    ~EditAnimal();

    void setData(int &labelText);

    void updateOk();

    //void reject();
private slots:


    void on_buttonBox_accepted();

    void on_typeComboBox_currentIndexChanged(const QString &arg1);
    void on_breedComboBox_currentIndexChanged(const QString &arg1);
    void on_sexComboBox_currentIndexChanged(const QString &arg1);
    void on_colourComboBox_currentIndexChanged(const QString &arg1);
    void on_sizeComboBox_currentIndexChanged(const QString &arg1);
    void on_energyComboBox_currentIndexChanged(const QString &arg1);
    void on_aggressionSlider_valueChanged(int value);
    void on_attachmentSlider_valueChanged(int value);
    void on_obedienceSlider_valueChanged(int value);
    void on_childrenComfortSlider_valueChanged(int value);
    void on_loudnessSlider_valueChanged(int value);
    void on_intelligenceSlider_valueChanged(int value);
    void on_cleanlinessSlider_valueChanged(int value);
    void on_isCrateTrainedRadioButtonYES_toggled(bool checked);
    void on_isCrateTrainedRadioButtonNO_toggled(bool checked);
    void on_isHypoallergenicRadioButtonYES_toggled(bool checked);
    void on_isHypoallergenicRadioButtonNO_toggled(bool checked);
    void on_isNeuteredRadioButtonYES_toggled(bool checked);
    void on_isNeuteredRadioButtonNO_toggled(bool checked);

    void on_nameLineEdit_textChanged(const QString &arg1);

    void on_ageLineEdit_textChanged(const QString &arg1);

    void on_costLineEdit_textChanged(const QString &arg1);

    void on_costPerYearLineEdit_textChanged(const QString &arg1);
    void on_playfulnessSlider_valueChanged(int value);
    void on_loyaltySlider_valueChanged(int value);
    void on_playfulnessLineEdit_textChanged(const QString &arg1);
    void on_loyaltyLineEdit_textChanged(const QString &arg1);

private:
    Ui::EditAnimal *ui;
    QList<Animal*> myList;
    CuacsAPI *capi;
    int passedData;
};

#endif // EDITANIMAL_H
