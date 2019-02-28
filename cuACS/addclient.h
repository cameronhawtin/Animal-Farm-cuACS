#ifndef ADDCLIENT_H
#define ADDCLIENT_H

#include <QDialog>
#include <QPushButton>
#include "CuacsAPI.h"

namespace Ui {
class AddClient;
}

class AddClient : public QDialog
{
    Q_OBJECT

public:
    explicit AddClient(QWidget *parent = nullptr);
    ~AddClient();

private slots:
    void on_buttonBox_accepted();
    void updateOk();
    void on_nameLineEdit_cursorPositionChanged(int arg1, int arg2);
    void on_ageLineEdit_cursorPositionChanged(int arg1, int arg2);

private:
    CuacsAPI *capi;
    Ui::AddClient *ui;
};

#endif // ADDCLIENT_H
