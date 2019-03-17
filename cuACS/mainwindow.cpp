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
    this->setFixedSize(QSize(429, 217));
    //QColor cuRED = QColor(200, 16, 46);

    capi = new CuacsAPI();

    vector<Human*> humansVec = capi->getHumans();

    if (humansVec.size() != 0) {
        //Make QList from vector
        myList.reserve(humansVec.size());
        std::copy(humansVec.begin(), humansVec.end(), std::back_inserter(myList));
    }
}


//MainWindow class destructor
MainWindow::~MainWindow()
{
    delete ui;
    delete capi;
}

//This function is called when the login button is clicked
void MainWindow::on_loginButton_clicked()
{
   QString username = ui->usernameLineEdit->text();

   bool loggedIn = false;
   for (int i = 0; i < myList.size(); i++){
           if (username.toStdString() == myList.at(i)->getName()) {
               loggedIn = true;
               hide();
               postLoginClient = new PostLoginClient(this);
               viewProfile = new ViewProfile(this);
               postLoginClient->setData(myList.at(i)->getId());
               postLoginClient->show();
           }
   }

   if (loggedIn == false) {
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
}
