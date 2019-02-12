#ifndef POSTLOGINSTAFF_H
#define POSTLOGINSTAFF_H

#include <QDialog>
#include <QMessageBox>
#include "viewanimals.h"
#include "addanimal.h"
#include "CuacsAPI.h"


namespace Ui {
class PostLoginStaff;
}

class PostLoginStaff : public QDialog
{
    Q_OBJECT

public:
    CuacsAPI * capi;
    explicit PostLoginStaff(QWidget *parent = nullptr);
    ~PostLoginStaff();

private slots:
    void on_AddAnimalButton_clicked();

    void on_ViewAnimalsButton_clicked();

    void on_AddClientButton_clicked();

    void on_ViewClientsButton_clicked();

    void reject();

private:
    Ui::PostLoginStaff *ui;
    ViewAnimals *viewAnimals;
    AddAnimal *addAnimal;
};

#endif // POSTLOGINSTAFF_H
