/********************************************************************************
** Form generated from reading UI file 'postloginclient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTLOGINCLIENT_H
#define UI_POSTLOGINCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PostLoginClient
{
public:
    QPushButton *ViewAnimalsButton;
    QPushButton *ViewProfileButton;
    QPushButton *editProfileButton;

    void setupUi(QDialog *PostLoginClient)
    {
        if (PostLoginClient->objectName().isEmpty())
            PostLoginClient->setObjectName(QStringLiteral("PostLoginClient"));
        PostLoginClient->resize(321, 159);
        QFont font;
        font.setFamily(QStringLiteral("Egyptienne F"));
        PostLoginClient->setFont(font);
        ViewAnimalsButton = new QPushButton(PostLoginClient);
        ViewAnimalsButton->setObjectName(QStringLiteral("ViewAnimalsButton"));
        ViewAnimalsButton->setGeometry(QRect(20, 90, 281, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Egyptienne F"));
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        ViewAnimalsButton->setFont(font1);
        ViewAnimalsButton->setAutoDefault(true);
        ViewProfileButton = new QPushButton(PostLoginClient);
        ViewProfileButton->setObjectName(QStringLiteral("ViewProfileButton"));
        ViewProfileButton->setGeometry(QRect(20, 20, 131, 51));
        ViewProfileButton->setFont(font1);
        ViewProfileButton->setAutoDefault(true);
        editProfileButton = new QPushButton(PostLoginClient);
        editProfileButton->setObjectName(QStringLiteral("editProfileButton"));
        editProfileButton->setGeometry(QRect(170, 20, 131, 51));
        editProfileButton->setFont(font1);
        editProfileButton->setAutoDefault(true);
        QWidget::setTabOrder(ViewProfileButton, editProfileButton);
        QWidget::setTabOrder(editProfileButton, ViewAnimalsButton);

        retranslateUi(PostLoginClient);

        QMetaObject::connectSlotsByName(PostLoginClient);
    } // setupUi

    void retranslateUi(QDialog *PostLoginClient)
    {
        PostLoginClient->setWindowTitle(QApplication::translate("PostLoginClient", "Dialog", Q_NULLPTR));
        ViewAnimalsButton->setText(QApplication::translate("PostLoginClient", "View Animals", Q_NULLPTR));
        ViewProfileButton->setText(QApplication::translate("PostLoginClient", "View Profile", Q_NULLPTR));
        editProfileButton->setText(QApplication::translate("PostLoginClient", "Edit Profile", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PostLoginClient: public Ui_PostLoginClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTLOGINCLIENT_H
