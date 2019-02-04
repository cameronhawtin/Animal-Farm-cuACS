/********************************************************************************
** Form generated from reading UI file 'postloginclient.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTLOGINCLIENT_H
#define UI_POSTLOGINCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_PostLoginClient
{
public:
    QLabel *label;

    void setupUi(QDialog *PostLoginClient)
    {
        if (PostLoginClient->objectName().isEmpty())
            PostLoginClient->setObjectName(QString::fromUtf8("PostLoginClient"));
        PostLoginClient->resize(272, 215);
        label = new QLabel(PostLoginClient);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 90, 161, 31));

        retranslateUi(PostLoginClient);

        QMetaObject::connectSlotsByName(PostLoginClient);
    } // setupUi

    void retranslateUi(QDialog *PostLoginClient)
    {
        PostLoginClient->setWindowTitle(QApplication::translate("PostLoginClient", "Dialog", nullptr));
        label->setText(QApplication::translate("PostLoginClient", "you are client", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PostLoginClient: public Ui_PostLoginClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTLOGINCLIENT_H
