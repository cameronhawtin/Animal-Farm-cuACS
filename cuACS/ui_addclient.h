/********************************************************************************
** Form generated from reading UI file 'addclient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCLIENT_H
#define UI_ADDCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_AddClient
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *nameLineEdit;
    QLineEdit *ageLineEdit;

    void setupUi(QDialog *AddClient)
    {
        if (AddClient->objectName().isEmpty())
            AddClient->setObjectName(QStringLiteral("AddClient"));
        AddClient->resize(647, 510);
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
        AddClient->setPalette(palette);
        buttonBox = new QDialogButtonBox(AddClient);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        nameLineEdit = new QLineEdit(AddClient);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setEnabled(true);
        nameLineEdit->setGeometry(QRect(90, 120, 439, 24));
        ageLineEdit = new QLineEdit(AddClient);
        ageLineEdit->setObjectName(QStringLiteral("ageLineEdit"));
        ageLineEdit->setEnabled(true);
        ageLineEdit->setGeometry(QRect(90, 200, 439, 24));

        retranslateUi(AddClient);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddClient, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddClient, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddClient);
    } // setupUi

    void retranslateUi(QDialog *AddClient)
    {
        AddClient->setWindowTitle(QApplication::translate("AddClient", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddClient: public Ui_AddClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCLIENT_H
