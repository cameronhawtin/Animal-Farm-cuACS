/********************************************************************************
** Form generated from reading UI file 'viewmatches.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWMATCHES_H
#define UI_VIEWMATCHES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ViewMatches
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ViewMatches)
    {
        if (ViewMatches->objectName().isEmpty())
            ViewMatches->setObjectName(QStringLiteral("ViewMatches"));
        ViewMatches->resize(400, 300);
        buttonBox = new QDialogButtonBox(ViewMatches);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(ViewMatches);
        QObject::connect(buttonBox, SIGNAL(accepted()), ViewMatches, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ViewMatches, SLOT(reject()));

        QMetaObject::connectSlotsByName(ViewMatches);
    } // setupUi

    void retranslateUi(QDialog *ViewMatches)
    {
        ViewMatches->setWindowTitle(QApplication::translate("ViewMatches", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ViewMatches: public Ui_ViewMatches {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWMATCHES_H
