/********************************************************************************
** Form generated from reading UI file 'postloginstaff.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTLOGINSTAFF_H
#define UI_POSTLOGINSTAFF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
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
            PostLoginStaff->setObjectName(QStringLiteral("PostLoginStaff"));
        PostLoginStaff->resize(341, 238);
        QPalette palette;
        QBrush brush(QColor(200, 16, 46, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(238, 238, 238, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        QBrush brush3(QColor(190, 190, 190, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        PostLoginStaff->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Egyptienne F"));
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        PostLoginStaff->setFont(font);
        AddAnimalButton = new QPushButton(PostLoginStaff);
        AddAnimalButton->setObjectName(QStringLiteral("AddAnimalButton"));
        AddAnimalButton->setGeometry(QRect(20, 100, 141, 61));
        AddAnimalButton->setAutoDefault(false);
        ViewAnimalsButton = new QPushButton(PostLoginStaff);
        ViewAnimalsButton->setObjectName(QStringLiteral("ViewAnimalsButton"));
        ViewAnimalsButton->setGeometry(QRect(180, 100, 141, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Egyptienne F"));
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        ViewAnimalsButton->setFont(font1);
        ViewAnimalsButton->setAutoDefault(false);
        AddClientButton = new QPushButton(PostLoginStaff);
        AddClientButton->setObjectName(QStringLiteral("AddClientButton"));
        AddClientButton->setEnabled(true);
        AddClientButton->setGeometry(QRect(20, 20, 141, 61));
        AddClientButton->setAutoDefault(false);
        ViewClientsButton = new QPushButton(PostLoginStaff);
        ViewClientsButton->setObjectName(QStringLiteral("ViewClientsButton"));
        ViewClientsButton->setEnabled(true);
        ViewClientsButton->setGeometry(QRect(180, 20, 141, 61));
        ViewClientsButton->setAutoDefault(false);
        generateACMButton = new QPushButton(PostLoginStaff);
        generateACMButton->setObjectName(QStringLiteral("generateACMButton"));
        generateACMButton->setEnabled(false);
        generateACMButton->setGeometry(QRect(20, 180, 301, 41));

        retranslateUi(PostLoginStaff);

        QMetaObject::connectSlotsByName(PostLoginStaff);
    } // setupUi

    void retranslateUi(QDialog *PostLoginStaff)
    {
        PostLoginStaff->setWindowTitle(QApplication::translate("PostLoginStaff", "Dialog", Q_NULLPTR));
        AddAnimalButton->setText(QApplication::translate("PostLoginStaff", "Add Animal", Q_NULLPTR));
        ViewAnimalsButton->setText(QApplication::translate("PostLoginStaff", "View Animals", Q_NULLPTR));
        AddClientButton->setText(QApplication::translate("PostLoginStaff", "Add Client", Q_NULLPTR));
        ViewClientsButton->setText(QApplication::translate("PostLoginStaff", "View Clients", Q_NULLPTR));
        generateACMButton->setText(QApplication::translate("PostLoginStaff", "Generate Matches", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PostLoginStaff: public Ui_PostLoginStaff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTLOGINSTAFF_H
