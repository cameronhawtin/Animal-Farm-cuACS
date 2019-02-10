/********************************************************************************
** Form generated from reading UI file 'postloginclient.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
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
        PostLoginClient->resize(392, 364);
        label = new QLabel(PostLoginClient);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 100, 401, 161));

        retranslateUi(PostLoginClient);

        QMetaObject::connectSlotsByName(PostLoginClient);
    } // setupUi

    void retranslateUi(QDialog *PostLoginClient)
    {
        PostLoginClient->setWindowTitle(QApplication::translate("PostLoginClient", "Dialog", nullptr));
        label->setText(QApplication::translate("PostLoginClient", "This is the client window. Not yet implemented for deliverable 1.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PostLoginClient: public Ui_PostLoginClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTLOGINCLIENT_H
