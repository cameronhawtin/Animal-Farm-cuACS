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
    void on_nameLineEdit_cursorPositionChanged(int arg1, int arg2);
    void on_ageLineEdit_cursorPositionChanged(int arg1, int arg2);
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

private:
    CuacsAPI *capi;
    Ui::AddClient *ui;
    QList<Human*> myList;
    vector<string> users;
};

#endif // ADDCLIENT_H
