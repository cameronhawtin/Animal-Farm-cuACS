#ifndef VIEWMATCHES_H
#define VIEWMATCHES_H

#include <QDialog>
#include "generatematches.h"

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
    GenerateMatches *gm;
};

#endif // VIEWMATCHES_H
