#ifndef VIEWANIMALS_H
#define VIEWANIMALS_H

#include <QDialog>
#include <iostream>
#include "CuacsAPI.h"
#include <QListWidget>
#include <sstream>
#include <EditAnimal.h>
#include <QFontDatabase>

namespace Ui {
class ViewAnimals;
}

class ViewAnimals : public QDialog
{
    Q_OBJECT

public:
    explicit ViewAnimals(QWidget *parent = nullptr, bool isStaff = false);
    ~ViewAnimals();

    static bool sortAnimals(Animal *a, Animal *b);
private slots:

    void on_viewAnimalsListWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

    void on_editAnimal_clicked();

private:
    Ui::ViewAnimals *ui;
    CuacsAPI *capi;
    QList<Animal*> myList;
    EditAnimal *editAnimal;
    bool isStaff;
};

#endif // VIEWANIMALS_H
