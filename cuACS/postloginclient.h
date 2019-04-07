#ifndef POSTLOGINCLIENT_H
#define POSTLOGINCLIENT_H
#include <QMessageBox>
#include <QDialog>
#include <viewanimals.h>
#include <viewprofile.h>
#include <editprofile.h>
#include <QFontDatabase>

namespace Ui {
class PostLoginClient;
}

class PostLoginClient : public QDialog
{
    Q_OBJECT

public:
    explicit PostLoginClient(QWidget *parent = nullptr);
    void setData(int labelText);
    ~PostLoginClient();

private slots:
    void on_ViewAnimalsButton_clicked();

    void reject();
    void on_ViewProfileButton_clicked();

    void on_editProfileButton_clicked();

private:
    int passedData;
    Ui::PostLoginClient *ui;
    ViewProfile *viewProfile;
    ViewAnimals *viewAnimals;
    EditProfile *editProfile;
};

#endif // POSTLOGINCLIENT_H
