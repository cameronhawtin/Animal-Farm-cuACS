#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPalette>

//MainWindow class constructor
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(300, 120));
    //QColor cuRED = QColor(200, 16, 46);
}
//MainWindow class destructor
MainWindow::~MainWindow()
{
    delete ui;
}

//This function is called when the login button is clicked
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
