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

    void setData(int &labelText);
private:
    Ui::EditAnimal *ui;
    int passedData;
};

#endif // EDITANIMAL_H
