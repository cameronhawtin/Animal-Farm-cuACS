#ifndef ADDANIMAL_H
#define ADDANIMAL_H

#include <QDialog>
#include <QPushButton>
#include "CuacsAPI.h"

namespace Ui {
class AddAnimal;
}

class AddAnimal : public QDialog
{
    Q_OBJECT

public:
    explicit AddAnimal(QWidget *parent = nullptr);
    ~AddAnimal();

private slots:
    void on_buttonBox_accepted();
    void updateOk();
    void on_nameLineEdit_cursorPositionChanged(int arg1, int arg2);
    void on_typeComboBox_currentIndexChanged(const QString &arg1);
    void on_breedComboBox_currentIndexChanged(const QString &arg1);
    void on_sexComboBox_currentIndexChanged(const QString &arg1);
    void on_ageLineEdit_cursorPositionChanged(int arg1, int arg2);
    void on_colourComboBox_currentIndexChanged(const QString &arg1);
    void on_sizeComboBox_currentIndexChanged(const QString &arg1);
    void on_energyComboBox_currentIndexChanged(const QString &arg1);

    void on_costLineEdit_cursorPositionChanged(int arg1, int arg2);
    void on_costPerYearLineEdit_cursorPositionChanged(int arg1, int arg2);
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

private:
    CuacsAPI *capi;
    Ui::AddAnimal *ui;
};

#endif // ADDANIMAL_H
