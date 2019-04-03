#ifndef ADDCLIENT_H
#define ADDCLIENT_H

#include <QDialog>
#include <QPushButton>
#include "CuacsAPI.h"

namespace Ui {
class AddClient;
}

class AddClient : public QDialog
{
    Q_OBJECT

public:
    explicit AddClient(QWidget *parent = nullptr);
    ~AddClient();

private slots:
    void on_buttonBox_accepted();
    void updateOk();
    void on_patienceSlider_valueChanged(int value);

    void on_irritationSlider_valueChanged(int value);

    void on_attachmentSlider_valueChanged(int value);

    void on_isNeuteredRadioButtonYES_toggled();

    void on_isNeuteredRadioButtonNO_toggled();

    void on_budgetLineEdit_textChanged();

    void on_childrenLineEdit_textChanged();

    void on_ageLineEdit_textChanged();

    void on_nameLineEdit_textChanged();

    void on_sexComboBox_currentIndexChanged(int i);

    void on_salaryComboBox_currentIndexChanged(int i);

    void on_typePreferenceComboBox_currentIndexChanged(int i);

    void on_purposeComboBox_currentIndexChanged(int i);

    void on_homeTypeComboBox_currentIndexChanged(int i);

    void on_travelComboBox_currentIndexChanged(int i);

    void on_freeTimeComboBox_currentIndexChanged(int i);

    void on_emailLineEdit_textChanged(const QString &arg1);

    void on_addressLineEdit_textChanged(const QString &arg1);

    void on_phoneLineEdit_textChanged(const QString &arg1);

private:
    CuacsAPI *capi;
    Ui::AddClient *ui;
    QList<Human*> myList;
    vector<string> users;
};

#endif // ADDCLIENT_H
