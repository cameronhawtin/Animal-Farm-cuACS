#ifndef VIEWCLIENTS_H
#define VIEWCLIENTS_H

#include <QDialog>
#include "CuacsAPI.h"

namespace Ui {
class ViewClients;
}

class ViewClients : public QDialog
{
    Q_OBJECT

public:
    explicit ViewClients(QWidget *parent = 0);
    ~ViewClients();

private:
    CuacsAPI * capi;
    QList<Human*> myList;
    Ui::ViewClients *ui;
};

#endif // VIEWCLIENTS_H
