#ifndef VIEWMATCHES_H
#define VIEWMATCHES_H

#include <QDialog>

namespace Ui {
class ViewMatches;
}

class ViewMatches : public QDialog
{
    Q_OBJECT

public:
    explicit ViewMatches(QWidget *parent = nullptr);
    ~ViewMatches();

private:
    Ui::ViewMatches *ui;
};

#endif // VIEWMATCHES_H
