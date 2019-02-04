/********************************************************************************
** Form generated from reading UI file 'viewanimals.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWANIMALS_H
#define UI_VIEWANIMALS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewAnimals
{
public:
    QListWidget *viewAnimalsListWidget;

    void setupUi(QDialog *ViewAnimals)
    {
        if (ViewAnimals->objectName().isEmpty())
            ViewAnimals->setObjectName(QString::fromUtf8("ViewAnimals"));
        ViewAnimals->resize(400, 300);
        viewAnimalsListWidget = new QListWidget(ViewAnimals);
        viewAnimalsListWidget->setObjectName(QString::fromUtf8("viewAnimalsListWidget"));
        viewAnimalsListWidget->setGeometry(QRect(60, 60, 256, 192));

        retranslateUi(ViewAnimals);

        QMetaObject::connectSlotsByName(ViewAnimals);
    } // setupUi

    void retranslateUi(QDialog *ViewAnimals)
    {
        ViewAnimals->setWindowTitle(QApplication::translate("ViewAnimals", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewAnimals: public Ui_ViewAnimals {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWANIMALS_H
