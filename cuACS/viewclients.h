#ifndef VIEWCLIENTS_H
#define VIEWCLIENTS_H

#include <QDialog>

namespace Ui {
class ViewClients;
}

class ViewClients : public QDialog
{
    Q_OBJECT

public:
    explicit ViewClients(QWidget *parent = 0);
    ~ViewClients();

private:
    Ui::ViewClients *ui;
};

#endif // VIEWCLIENTS_H
