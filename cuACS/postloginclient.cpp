#include "postloginclient.h"
#include "ui_postloginclient.h"

PostLoginClient::PostLoginClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PostLoginClient)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(321, 159));
    this->setWindowTitle("Homepage - Clients");
    int id = QFontDatabase::addApplicationFont ( ":/fonts/EgyptienneRoman.ttf" );
    QFont egyptienne(QFontDatabase::applicationFontFamilies(id).at(0), 11);
    this->setFont(egyptienne);
}

// PostLoginClient destructor
PostLoginClient::~PostLoginClient()
{
    delete ui;
}

// This function is called when the close window button is clicked (top right)
void PostLoginClient::reject()
{
    QMessageBox::StandardButton resBtn = QMessageBox::Yes;
    resBtn = QMessageBox::question( this, "cuACS",
            tr("This action will log you out. Are you sure?\n"),
            QMessageBox::No | QMessageBox::Yes,
            QMessageBox::Yes);
    if (resBtn == QMessageBox::Yes) {
        QDialog::reject();
        QWidget *parent = this->parentWidget();
        parent->show();
    }
}

// This function is called when the viewAnimals Button is clicked
void PostLoginClient::on_ViewAnimalsButton_clicked()
{
    //open view animals interface
    viewAnimals = new ViewAnimals(this, false);
    viewAnimals->show();
}

// This function is called when the viewProfile Button is clicked
void PostLoginClient::on_ViewProfileButton_clicked()
{
    //open view profile interface
    viewProfile = new ViewProfile(this);
    viewProfile->setData(passedData);
    viewProfile->show();
}

void PostLoginClient::on_editProfileButton_clicked()
{
    //open edit profile interface
    editProfile = new EditProfile(this);
    editProfile->setData(passedData);
    editProfile->show();
}

void PostLoginClient::setData(int labelText) {
    passedData = labelText;
}
