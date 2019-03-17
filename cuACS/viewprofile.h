#ifndef VIEWPROFILE_H
#define VIEWPROFILE_H

#include <QDialog>
#include "CuacsAPI.h"
#include <iostream>

namespace Ui {
class ViewProfile;
}

class ViewProfile : public QDialog
{
    Q_OBJECT

public:
    explicit ViewProfile(QWidget *parent = nullptr);
    void setData(int &labelText);
    ~ViewProfile();
private slots:

private:
    Ui::ViewProfile *ui;
    CuacsAPI *capi;
    QList<Human*> myList;
    int passedData;
};

#endif // VIEWPROFILE_H
