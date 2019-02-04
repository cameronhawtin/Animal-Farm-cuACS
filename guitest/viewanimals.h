#ifndef VIEWANIMALS_H
#define VIEWANIMALS_H

#include <QDialog>

namespace Ui {
class ViewAnimals;
}

class ViewAnimals : public QDialog
{
    Q_OBJECT

public:
    explicit ViewAnimals(QWidget *parent = nullptr);
    ~ViewAnimals();

private:
    Ui::ViewAnimals *ui;
};

#endif // VIEWANIMALS_H
