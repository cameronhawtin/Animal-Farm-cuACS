#ifndef VIEWANIMALS_H
#define VIEWANIMALS_H

#include <QDialog>
#include <iostream>
#include "CuacsAPI.h"
#include <QListWidget>
#include <sstream>

namespace Ui {
class ViewAnimals;
}

class ViewAnimals : public QDialog
{
    Q_OBJECT

public:
    CuacsAPI * capi;
    explicit ViewAnimals(QWidget *parent = nullptr);
    ~ViewAnimals();

private slots:

    void on_viewAnimalsListWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::ViewAnimals *ui;
    QList<Animal*> myList;
};

#endif // VIEWANIMALS_H
