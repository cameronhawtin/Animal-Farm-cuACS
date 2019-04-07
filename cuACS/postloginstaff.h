#ifndef POSTLOGINSTAFF_H
#define POSTLOGINSTAFF_H

#include <QDialog>
#include <QMessageBox>
#include "viewanimals.h"
#include "viewclients.h"
#include "viewmatches.h"
#include "addanimal.h"
#include "addclient.h"
#include "CuacsAPI.h"
#include <QFontDatabase>


namespace Ui {
class PostLoginStaff;
}

class PostLoginStaff : public QDialog
{
    Q_OBJECT

public:
    explicit PostLoginStaff(QWidget *parent = nullptr);
    ~PostLoginStaff();

private slots:
    void on_AddAnimalButton_clicked();

    void on_ViewAnimalsButton_clicked();

    void on_AddClientButton_clicked();

    void on_ViewClientsButton_clicked();

    void on_generateACMButton_clicked();

    void reject();

private:
    Ui::PostLoginStaff *ui;
    ViewAnimals *viewAnimals;
    ViewClients *viewClients;
    AddAnimal *addAnimal;
    AddClient *addClient;
    ViewMatches *viewMatches;
};

#endif // POSTLOGINSTAFF_H
