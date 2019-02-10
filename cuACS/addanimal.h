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
    CuacsAPI * capi;
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


    void on_buttonBox_rejected();

private:
    Ui::AddAnimal *ui;
};

#endif // ADDANIMAL_H
