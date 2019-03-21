#ifndef EDITPROFILE_H
#define EDITPROFILE_H

#include <QDialog>
#include "CuacsAPI.h"
#include "iostream"
#include <QPushButton>

namespace Ui {
class EditProfile;
}

class EditProfile : public QDialog
{
    Q_OBJECT

public:
    explicit EditProfile(QWidget *parent = nullptr);
    ~EditProfile();

    void setData(int &labelText);
    void updateOk();

private slots:
    void on_buttonBox_accepted();
    void on_patienceSlider_valueChanged(int value);
    void on_irritationSlider_valueChanged(int value);
    void on_attachmentSlider_valueChanged(int value);
    void on_isNeuteredRadioButtonYES_toggled(bool checked);
    void on_isNeuteredRadioButtonNO_toggled(bool checked);
    void on_budgetLineEdit_textChanged(const QString &arg1);
    void on_childrenLineEdit_textChanged(const QString &arg1);
    void on_ageLineEdit_textChanged(const QString &arg1);
    void on_nameLineEdit_textChanged(const QString &arg1);
    void on_sexComboBox_currentIndexChanged(const QString &arg1);
    void on_salaryComboBox_currentIndexChanged(const QString &arg1);
    void on_typePreferenceComboBox_currentIndexChanged(const QString &arg1);
    void on_purposeComboBox_currentIndexChanged(const QString &arg1);
    void on_homeTypeComboBox_currentIndexChanged(const QString &arg1);
    void on_travelComboBox_currentIndexChanged(const QString &arg1);
    void on_freeTimeComboBox_currentIndexChanged(const QString &arg1);

    void on_emailLineEdit_textChanged(const QString &arg1);

    void on_addressLineEdit_textChanged(const QString &arg1);

    void on_phoneLineEdit_textChanged(const QString &arg1);

private:
    Ui::EditProfile *ui;
    CuacsAPI *capi;
    QList<Human*> myList;
    int passedData;
    vector<string> users;
};

#endif // EDITPROFILE_H
