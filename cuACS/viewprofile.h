#ifndef VIEWPROFILE_H
#define VIEWPROFILE_H

#include <QDialog>

namespace Ui {
class ViewProfile;
}

class ViewProfile : public QDialog
{
    Q_OBJECT

public:
    explicit ViewProfile(QWidget *parent = nullptr);
    void setData(const QString &labelText);
    ~ViewProfile();

private:
    Ui::ViewProfile *ui;
};

#endif // VIEWPROFILE_H
