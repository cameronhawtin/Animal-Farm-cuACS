/********************************************************************************
** Form generated from reading UI file 'postloginstaff.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTLOGINSTAFF_H
#define UI_POSTLOGINSTAFF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PostLoginStaff
{
public:
    QLabel *WelcomeLabel;
    QPushButton *AddAnimalButton;
    QPushButton *ViewAnimalsButton;
    QPushButton *AddClientButton;
    QPushButton *ViewClientsButton;

    void setupUi(QDialog *PostLoginStaff)
    {
        if (PostLoginStaff->objectName().isEmpty())
            PostLoginStaff->setObjectName(QString::fromUtf8("PostLoginStaff"));
        PostLoginStaff->resize(341, 260);
        WelcomeLabel = new QLabel(PostLoginStaff);
        WelcomeLabel->setObjectName(QString::fromUtf8("WelcomeLabel"));
        WelcomeLabel->setGeometry(QRect(100, 20, 181, 61));
        AddAnimalButton = new QPushButton(PostLoginStaff);
        AddAnimalButton->setObjectName(QString::fromUtf8("AddAnimalButton"));
        AddAnimalButton->setGeometry(QRect(20, 170, 141, 71));
        ViewAnimalsButton = new QPushButton(PostLoginStaff);
        ViewAnimalsButton->setObjectName(QString::fromUtf8("ViewAnimalsButton"));
        ViewAnimalsButton->setGeometry(QRect(180, 170, 141, 71));
        AddClientButton = new QPushButton(PostLoginStaff);
        AddClientButton->setObjectName(QString::fromUtf8("AddClientButton"));
        AddClientButton->setGeometry(QRect(20, 80, 141, 71));
        ViewClientsButton = new QPushButton(PostLoginStaff);
        ViewClientsButton->setObjectName(QString::fromUtf8("ViewClientsButton"));
        ViewClientsButton->setGeometry(QRect(180, 80, 141, 71));

        retranslateUi(PostLoginStaff);

        QMetaObject::connectSlotsByName(PostLoginStaff);
    } // setupUi

    void retranslateUi(QDialog *PostLoginStaff)
    {
        PostLoginStaff->setWindowTitle(QApplication::translate("PostLoginStaff", "Dialog", nullptr));
        WelcomeLabel->setText(QApplication::translate("PostLoginStaff", "Welcome to the Staff View", nullptr));
        AddAnimalButton->setText(QApplication::translate("PostLoginStaff", "Add Animal", nullptr));
        ViewAnimalsButton->setText(QApplication::translate("PostLoginStaff", "View Animals", nullptr));
        AddClientButton->setText(QApplication::translate("PostLoginStaff", "Add Client", nullptr));
        ViewClientsButton->setText(QApplication::translate("PostLoginStaff", "View Clients", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PostLoginStaff: public Ui_PostLoginStaff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTLOGINSTAFF_H
