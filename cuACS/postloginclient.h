#ifndef POSTLOGINCLIENT_H
#define POSTLOGINCLIENT_H
#include <QMessageBox>
#include <QDialog>
#include <viewanimals.h>

namespace Ui {
class PostLoginClient;
}

class PostLoginClient : public QDialog
{
    Q_OBJECT

public:
    explicit PostLoginClient(QWidget *parent = nullptr);
    void setData(const QString &labelText);
    ~PostLoginClient();

private slots:
    void on_ViewAnimalsButton_clicked();

    void reject();
private:
    Ui::PostLoginClient *ui;
    ViewAnimals *viewAnimals;
};

#endif // POSTLOGINCLIENT_H
