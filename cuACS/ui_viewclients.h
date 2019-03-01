/********************************************************************************
** Form generated from reading UI file 'viewclients.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWCLIENTS_H
#define UI_VIEWCLIENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ViewClients
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ViewClients)
    {
        if (ViewClients->objectName().isEmpty())
            ViewClients->setObjectName(QStringLiteral("ViewClients"));
        ViewClients->resize(400, 300);
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
        ViewClients->setPalette(palette);
        buttonBox = new QDialogButtonBox(ViewClients);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(40, 260, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(ViewClients);
        QObject::connect(buttonBox, SIGNAL(accepted()), ViewClients, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ViewClients, SLOT(reject()));

        QMetaObject::connectSlotsByName(ViewClients);
    } // setupUi

    void retranslateUi(QDialog *ViewClients)
    {
        ViewClients->setWindowTitle(QApplication::translate("ViewClients", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ViewClients: public Ui_ViewClients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWCLIENTS_H
