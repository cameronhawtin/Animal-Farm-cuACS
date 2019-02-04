#ifndef ADDANIMAL_H
#define ADDANIMAL_H

#include <QDialog>

namespace Ui {
class AddAnimal;
}

class AddAnimal : public QDialog
{
    Q_OBJECT

public:
    explicit AddAnimal(QWidget *parent = nullptr);
    ~AddAnimal();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::AddAnimal *ui;
};

#endif // ADDANIMAL_H
