#ifndef POSTLOGINCLIENT_H
#define POSTLOGINCLIENT_H
#include <QMessageBox>
#include <QDialog>

namespace Ui {
class PostLoginClient;
}

class PostLoginClient : public QDialog
{
    Q_OBJECT

public:
    explicit PostLoginClient(QWidget *parent = nullptr);
    ~PostLoginClient();

private slots:
    void reject();

private:
    Ui::PostLoginClient *ui;
};

#endif // POSTLOGINCLIENT_H
