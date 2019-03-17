#ifndef EDITANIMAL_H
#define EDITANIMAL_H

#include <QDialog>

namespace Ui {
class EditAnimal;
}

class EditAnimal : public QDialog
{
    Q_OBJECT

public:
    explicit EditAnimal(QWidget *parent = nullptr);
    ~EditAnimal();

private:
    Ui::EditAnimal *ui;
};

#endif // EDITANIMAL_H
