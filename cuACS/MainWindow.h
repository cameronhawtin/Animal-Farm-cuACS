#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "PostLoginStaff.h"
#include "PostLoginClient.h"
#include "ViewProfile.h"
#include "CuacsAPI.h"
#include <QFontDatabase>

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
    ViewProfile *viewProfile;
    CuacsAPI *capi;
    QList<Human*> myList;
};

#endif // MAINWINDOW_H
