#ifndef VIEWANIMALS_H
#define VIEWANIMALS_H

#include <QDialog>
#include <iostream>
#include "CuacsAPI.h"

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

private:
    Ui::ViewAnimals *ui;
};

#endif // VIEWANIMALS_H
