#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginButton_clicked()
{
   QString username = ui->usernameLineEdit->text();

   if (username == "Staff") {
       hide();
       postLoginStaff = new PostLoginStaff(this);
       postLoginStaff->exec();
   }

   else if (username == "Client") {
      hide();
      postLoginClient = new PostLoginClient(this);
      postLoginClient->show();

   }
   else QMessageBox::warning(this, "Invalid Login", "The provided username does not exist");
}
