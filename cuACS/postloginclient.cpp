#include "postloginclient.h"
#include "ui_postloginclient.h"

PostLoginClient::PostLoginClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PostLoginClient)
{
    ui->setupUi(this);
    this->setWindowTitle("Homepage - Clients");
    //ui->label->setFont(font);
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
            QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes,
            QMessageBox::Yes);
    if (resBtn == QMessageBox::Yes) {
        QDialog::reject();
        QWidget *parent = this->parentWidget();
        parent->show();
    }
}

// This function is called when the viewAnimalsButton is clicked
void PostLoginClient::on_ViewAnimalsButton_clicked()
{
    //open view animals interface
    viewAnimals = new ViewAnimals(this);
    viewAnimals->show();
}
