#ifndef POSTLOGINSTAFF_H
#define POSTLOGINSTAFF_H

#include <QDialog>

namespace Ui {
class PostLoginStaff;
}

class PostLoginStaff : public QDialog
{
    Q_OBJECT

public:
    explicit PostLoginStaff(QWidget *parent = nullptr);
    ~PostLoginStaff();

private:
    Ui::PostLoginStaff *ui;
};

#endif // POSTLOGINSTAFF_H
