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

    void on_typeComboBox_currentIndexChanged(const QString &arg1);

private:
    Ui::AddAnimal *ui;
    enum sexes {MALE, FEMALE};
    enum sizes {SMALL, MEDIUM, LARGE};
};

#endif // ADDANIMAL_H
