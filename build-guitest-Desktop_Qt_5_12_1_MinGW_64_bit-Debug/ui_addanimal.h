/********************************************************************************
** Form generated from reading UI file 'addanimal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDANIMAL_H
#define UI_ADDANIMAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AddAnimal
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *typeComboBox;
    QLabel *typeLabel;

    void setupUi(QDialog *AddAnimal)
    {
        if (AddAnimal->objectName().isEmpty())
            AddAnimal->setObjectName(QString::fromUtf8("AddAnimal"));
        AddAnimal->resize(608, 436);
        buttonBox = new QDialogButtonBox(AddAnimal);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(250, 400, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        typeComboBox = new QComboBox(AddAnimal);
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->setObjectName(QString::fromUtf8("typeComboBox"));
        typeComboBox->setGeometry(QRect(60, 50, 131, 21));
        typeLabel = new QLabel(AddAnimal);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));
        typeLabel->setGeometry(QRect(40, 30, 51, 16));

        retranslateUi(AddAnimal);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddAnimal, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddAnimal, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddAnimal);
    } // setupUi

    void retranslateUi(QDialog *AddAnimal)
    {
        AddAnimal->setWindowTitle(QApplication::translate("AddAnimal", "Dialog", nullptr));
        typeComboBox->setItemText(0, QApplication::translate("AddAnimal", "Please Select", nullptr));
        typeComboBox->setItemText(1, QApplication::translate("AddAnimal", "Cat", nullptr));
        typeComboBox->setItemText(2, QApplication::translate("AddAnimal", "Dog", nullptr));
        typeComboBox->setItemText(3, QApplication::translate("AddAnimal", "Giraffe", nullptr));

        typeLabel->setText(QApplication::translate("AddAnimal", "Type", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddAnimal: public Ui_AddAnimal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDANIMAL_H
