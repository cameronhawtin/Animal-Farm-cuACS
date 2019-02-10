/********************************************************************************
** Form generated from reading UI file 'postloginstaff.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTLOGINSTAFF_H
#define UI_POSTLOGINSTAFF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PostLoginStaff
{
public:
    QPushButton *AddAnimalButton;
    QPushButton *ViewAnimalsButton;
    QPushButton *AddClientButton;
    QPushButton *ViewClientsButton;
    QPushButton *generateACMButton;

    void setupUi(QDialog *PostLoginStaff)
    {
        if (PostLoginStaff->objectName().isEmpty())
            PostLoginStaff->setObjectName(QString::fromUtf8("PostLoginStaff"));
        PostLoginStaff->resize(341, 254);
        AddAnimalButton = new QPushButton(PostLoginStaff);
        AddAnimalButton->setObjectName(QString::fromUtf8("AddAnimalButton"));
        AddAnimalButton->setGeometry(QRect(20, 110, 141, 71));
        AddAnimalButton->setAutoDefault(false);
        ViewAnimalsButton = new QPushButton(PostLoginStaff);
        ViewAnimalsButton->setObjectName(QString::fromUtf8("ViewAnimalsButton"));
        ViewAnimalsButton->setGeometry(QRect(180, 110, 141, 71));
        ViewAnimalsButton->setAutoDefault(false);
        AddClientButton = new QPushButton(PostLoginStaff);
        AddClientButton->setObjectName(QString::fromUtf8("AddClientButton"));
        AddClientButton->setGeometry(QRect(20, 20, 141, 71));
        AddClientButton->setAutoDefault(false);
        ViewClientsButton = new QPushButton(PostLoginStaff);
        ViewClientsButton->setObjectName(QString::fromUtf8("ViewClientsButton"));
        ViewClientsButton->setGeometry(QRect(180, 20, 141, 71));
        ViewClientsButton->setAutoDefault(false);
        generateACMButton = new QPushButton(PostLoginStaff);
        generateACMButton->setObjectName(QString::fromUtf8("generateACMButton"));
        generateACMButton->setGeometry(QRect(20, 200, 301, 41));

        retranslateUi(PostLoginStaff);

        QMetaObject::connectSlotsByName(PostLoginStaff);
    } // setupUi

    void retranslateUi(QDialog *PostLoginStaff)
    {
        PostLoginStaff->setWindowTitle(QApplication::translate("PostLoginStaff", "Dialog", nullptr));
        AddAnimalButton->setText(QApplication::translate("PostLoginStaff", "Add Animal", nullptr));
        ViewAnimalsButton->setText(QApplication::translate("PostLoginStaff", "View Animals", nullptr));
        AddClientButton->setText(QApplication::translate("PostLoginStaff", "Add Client", nullptr));
        ViewClientsButton->setText(QApplication::translate("PostLoginStaff", "View Clients", nullptr));
        generateACMButton->setText(QApplication::translate("PostLoginStaff", "Generate Matches", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PostLoginStaff: public Ui_PostLoginStaff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTLOGINSTAFF_H
