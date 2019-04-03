#ifndef VIEWCLIENTS_H
#define VIEWCLIENTS_H

#include <QDialog>
#include <iostream>
#include "CuacsAPI.h"
#include <QListWidget>
#include <sstream>

namespace Ui {
class ViewClients;
}

class ViewClients : public QDialog
{
    Q_OBJECT

public:
    explicit ViewClients(QWidget *parent = nullptr);
    ~ViewClients();

    static bool sortClients(Human *a, Human *b);
private slots:
    void on_viewClientsListWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

private:
    CuacsAPI * capi;
    QList<Human*> myList;
    Ui::ViewClients *ui;
};

#endif // VIEWCLIENTS_H
