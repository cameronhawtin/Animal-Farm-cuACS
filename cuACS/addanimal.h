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
    void on_nameLineEdit_cursorPositionChanged();
    void on_typeComboBox_currentIndexChanged(const QString &arg1);
    void on_breedComboBox_currentIndexChanged(int i);
    void on_sexComboBox_currentIndexChanged(int i);
    void on_ageLineEdit_cursorPositionChanged();
    void on_colourComboBox_currentIndexChanged(int i);
    void on_sizeComboBox_currentIndexChanged(int i);
    void on_energyComboBox_currentIndexChanged(int i);

    void on_costLineEdit_cursorPositionChanged();
    void on_costPerYearLineEdit_cursorPositionChanged();
    void on_aggressionSlider_valueChanged(int value);
    void on_attachmentSlider_valueChanged(int value);
    void on_obedienceSlider_valueChanged(int value);
    void on_childrenComfortSlider_valueChanged(int value);
    void on_loudnessSlider_valueChanged(int value);
    void on_intelligenceSlider_valueChanged(int value);
    void on_cleanlinessSlider_valueChanged(int value);
    void on_isCrateTrainedRadioButtonYES_toggled();
    void on_isCrateTrainedRadioButtonNO_toggled();
    void on_isHypoallergenicRadioButtonYES_toggled();
    void on_isHypoallergenicRadioButtonNO_toggled();
    void on_isNeuteredRadioButtonYES_toggled();
    void on_isNeuteredRadioButtonNO_toggled();

private:
    CuacsAPI *capi;
    Ui::AddAnimal *ui;
};

#endif // ADDANIMAL_H
