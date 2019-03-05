#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "postloginstaff.h"
#include "postloginclient.h"
#include "CuacsAPI.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_loginButton_clicked();

private:
    Ui::MainWindow *ui;
    PostLoginStaff *postLoginStaff;
    PostLoginClient *postLoginClient;
    CuacsAPI *capi;
    QList<Human*> myList;
};

#endif // MAINWINDOW_H
