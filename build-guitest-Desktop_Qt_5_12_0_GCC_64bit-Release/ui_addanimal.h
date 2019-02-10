/********************************************************************************
** Form generated from reading UI file 'addanimal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddAnimal
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QLabel *typeLabel;
    QComboBox *typeComboBox;
    QLabel *labelBreed;
    QComboBox *breedComboBox;
    QLabel *sexLabel;
    QComboBox *sexComboBox;
    QLabel *ageLabel;
    QLineEdit *ageLineEdit;
    QLabel *labelColour;
    QComboBox *colourComboBox;
    QLabel *sizeLabel;
    QComboBox *sizeComboBox;

    void setupUi(QDialog *AddAnimal)
    {
        if (AddAnimal->objectName().isEmpty())
            AddAnimal->setObjectName(QString::fromUtf8("AddAnimal"));
        AddAnimal->resize(610, 432);
        buttonBox = new QDialogButtonBox(AddAnimal);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setEnabled(true);
        buttonBox->setGeometry(QRect(260, 390, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(AddAnimal);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setEnabled(true);
        layoutWidget->setGeometry(QRect(10, 10, 591, 361));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setEnabled(true);

        verticalLayout_2->addWidget(nameLabel);

        nameLineEdit = new QLineEdit(layoutWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setEnabled(true);

        verticalLayout_2->addWidget(nameLineEdit);

        typeLabel = new QLabel(layoutWidget);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));
        typeLabel->setEnabled(true);

        verticalLayout_2->addWidget(typeLabel);

        typeComboBox = new QComboBox(layoutWidget);
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->setObjectName(QString::fromUtf8("typeComboBox"));
        typeComboBox->setEnabled(true);

        verticalLayout_2->addWidget(typeComboBox);

        labelBreed = new QLabel(layoutWidget);
        labelBreed->setObjectName(QString::fromUtf8("labelBreed"));
        labelBreed->setEnabled(true);

        verticalLayout_2->addWidget(labelBreed);

        breedComboBox = new QComboBox(layoutWidget);
        breedComboBox->addItem(QString());
        breedComboBox->setObjectName(QString::fromUtf8("breedComboBox"));
        breedComboBox->setEnabled(true);

        verticalLayout_2->addWidget(breedComboBox);

        sexLabel = new QLabel(layoutWidget);
        sexLabel->setObjectName(QString::fromUtf8("sexLabel"));
        sexLabel->setEnabled(true);

        verticalLayout_2->addWidget(sexLabel);

        sexComboBox = new QComboBox(layoutWidget);
        sexComboBox->addItem(QString());
        sexComboBox->addItem(QString());
        sexComboBox->addItem(QString());
        sexComboBox->setObjectName(QString::fromUtf8("sexComboBox"));
        sexComboBox->setEnabled(true);

        verticalLayout_2->addWidget(sexComboBox);

        ageLabel = new QLabel(layoutWidget);
        ageLabel->setObjectName(QString::fromUtf8("ageLabel"));
        ageLabel->setEnabled(true);

        verticalLayout_2->addWidget(ageLabel);

        ageLineEdit = new QLineEdit(layoutWidget);
        ageLineEdit->setObjectName(QString::fromUtf8("ageLineEdit"));
        ageLineEdit->setEnabled(true);

        verticalLayout_2->addWidget(ageLineEdit);

        labelColour = new QLabel(layoutWidget);
        labelColour->setObjectName(QString::fromUtf8("labelColour"));
        labelColour->setEnabled(true);

        verticalLayout_2->addWidget(labelColour);

        colourComboBox = new QComboBox(layoutWidget);
        colourComboBox->addItem(QString());
        colourComboBox->addItem(QString());
        colourComboBox->addItem(QString());
        colourComboBox->addItem(QString());
        colourComboBox->addItem(QString());
        colourComboBox->setObjectName(QString::fromUtf8("colourComboBox"));
        colourComboBox->setEnabled(true);

        verticalLayout_2->addWidget(colourComboBox);

        sizeLabel = new QLabel(layoutWidget);
        sizeLabel->setObjectName(QString::fromUtf8("sizeLabel"));
        sizeLabel->setEnabled(true);

        verticalLayout_2->addWidget(sizeLabel);

        sizeComboBox = new QComboBox(layoutWidget);
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->setObjectName(QString::fromUtf8("sizeComboBox"));
        sizeComboBox->setEnabled(true);

        verticalLayout_2->addWidget(sizeComboBox);


        retranslateUi(AddAnimal);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddAnimal, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddAnimal, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddAnimal);
    } // setupUi

    void retranslateUi(QDialog *AddAnimal)
    {
        AddAnimal->setWindowTitle(QApplication::translate("AddAnimal", "Dialog", nullptr));
        nameLabel->setText(QApplication::translate("AddAnimal", "Name", nullptr));
        typeLabel->setText(QApplication::translate("AddAnimal", "Type", nullptr));
        typeComboBox->setItemText(0, QApplication::translate("AddAnimal", "Please Select", nullptr));
        typeComboBox->setItemText(1, QApplication::translate("AddAnimal", "Cat", nullptr));
        typeComboBox->setItemText(2, QApplication::translate("AddAnimal", "Dog", nullptr));
        typeComboBox->setItemText(3, QApplication::translate("AddAnimal", "Hamster", nullptr));
        typeComboBox->setItemText(4, QApplication::translate("AddAnimal", "Fish", nullptr));
        typeComboBox->setItemText(5, QApplication::translate("AddAnimal", "Snake", nullptr));

        labelBreed->setText(QApplication::translate("AddAnimal", "Breed", nullptr));
        breedComboBox->setItemText(0, QApplication::translate("AddAnimal", "Please Select a Type", nullptr));

        sexLabel->setText(QApplication::translate("AddAnimal", "Sex", nullptr));
        sexComboBox->setItemText(0, QApplication::translate("AddAnimal", "Please Select", nullptr));
        sexComboBox->setItemText(1, QApplication::translate("AddAnimal", "Male", nullptr));
        sexComboBox->setItemText(2, QApplication::translate("AddAnimal", "Female", nullptr));

        ageLabel->setText(QApplication::translate("AddAnimal", "Age", nullptr));
        labelColour->setText(QApplication::translate("AddAnimal", "Colour", nullptr));
        colourComboBox->setItemText(0, QApplication::translate("AddAnimal", "Please Select", nullptr));
        colourComboBox->setItemText(1, QApplication::translate("AddAnimal", "Black", nullptr));
        colourComboBox->setItemText(2, QApplication::translate("AddAnimal", "White", nullptr));
        colourComboBox->setItemText(3, QApplication::translate("AddAnimal", "Brown", nullptr));
        colourComboBox->setItemText(4, QApplication::translate("AddAnimal", "Grey", nullptr));

        sizeLabel->setText(QApplication::translate("AddAnimal", "Size", nullptr));
        sizeComboBox->setItemText(0, QApplication::translate("AddAnimal", "Please Select", nullptr));
        sizeComboBox->setItemText(1, QApplication::translate("AddAnimal", "Small", nullptr));
        sizeComboBox->setItemText(2, QApplication::translate("AddAnimal", "Medium", nullptr));
        sizeComboBox->setItemText(3, QApplication::translate("AddAnimal", "Large", nullptr));

    } // retranslateUi

};

namespace Ui {
    class AddAnimal: public Ui_AddAnimal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDANIMAL_H
