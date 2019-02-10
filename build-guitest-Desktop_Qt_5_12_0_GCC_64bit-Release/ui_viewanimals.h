/********************************************************************************
** Form generated from reading UI file 'viewanimals.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWANIMALS_H
#define UI_VIEWANIMALS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewAnimals
{
public:
    QListWidget *viewAnimalsListWidget;
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

    void setupUi(QDialog *ViewAnimals)
    {
        if (ViewAnimals->objectName().isEmpty())
            ViewAnimals->setObjectName(QString::fromUtf8("ViewAnimals"));
        ViewAnimals->resize(956, 450);
        viewAnimalsListWidget = new QListWidget(ViewAnimals);
        viewAnimalsListWidget->setObjectName(QString::fromUtf8("viewAnimalsListWidget"));
        viewAnimalsListWidget->setGeometry(QRect(20, 20, 281, 411));
        buttonBox = new QDialogButtonBox(ViewAnimals);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(580, 410, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(ViewAnimals);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(330, 20, 591, 374));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        verticalLayout_2->addWidget(nameLabel);

        nameLineEdit = new QLineEdit(layoutWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setEnabled(false);

        verticalLayout_2->addWidget(nameLineEdit);

        typeLabel = new QLabel(layoutWidget);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));

        verticalLayout_2->addWidget(typeLabel);

        typeComboBox = new QComboBox(layoutWidget);
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->setObjectName(QString::fromUtf8("typeComboBox"));
        typeComboBox->setEnabled(false);

        verticalLayout_2->addWidget(typeComboBox);

        labelBreed = new QLabel(layoutWidget);
        labelBreed->setObjectName(QString::fromUtf8("labelBreed"));

        verticalLayout_2->addWidget(labelBreed);

        breedComboBox = new QComboBox(layoutWidget);
        breedComboBox->setObjectName(QString::fromUtf8("breedComboBox"));
        breedComboBox->setEnabled(false);

        verticalLayout_2->addWidget(breedComboBox);

        sexLabel = new QLabel(layoutWidget);
        sexLabel->setObjectName(QString::fromUtf8("sexLabel"));

        verticalLayout_2->addWidget(sexLabel);

        sexComboBox = new QComboBox(layoutWidget);
        sexComboBox->addItem(QString());
        sexComboBox->addItem(QString());
        sexComboBox->addItem(QString());
        sexComboBox->setObjectName(QString::fromUtf8("sexComboBox"));
        sexComboBox->setEnabled(false);

        verticalLayout_2->addWidget(sexComboBox);

        ageLabel = new QLabel(layoutWidget);
        ageLabel->setObjectName(QString::fromUtf8("ageLabel"));

        verticalLayout_2->addWidget(ageLabel);

        ageLineEdit = new QLineEdit(layoutWidget);
        ageLineEdit->setObjectName(QString::fromUtf8("ageLineEdit"));
        ageLineEdit->setEnabled(false);

        verticalLayout_2->addWidget(ageLineEdit);

        labelColour = new QLabel(layoutWidget);
        labelColour->setObjectName(QString::fromUtf8("labelColour"));

        verticalLayout_2->addWidget(labelColour);

        colourComboBox = new QComboBox(layoutWidget);
        colourComboBox->addItem(QString());
        colourComboBox->addItem(QString());
        colourComboBox->addItem(QString());
        colourComboBox->addItem(QString());
        colourComboBox->addItem(QString());
        colourComboBox->setObjectName(QString::fromUtf8("colourComboBox"));
        colourComboBox->setEnabled(false);

        verticalLayout_2->addWidget(colourComboBox);

        sizeLabel = new QLabel(layoutWidget);
        sizeLabel->setObjectName(QString::fromUtf8("sizeLabel"));

        verticalLayout_2->addWidget(sizeLabel);

        sizeComboBox = new QComboBox(layoutWidget);
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->setObjectName(QString::fromUtf8("sizeComboBox"));
        sizeComboBox->setEnabled(false);

        verticalLayout_2->addWidget(sizeComboBox);


        retranslateUi(ViewAnimals);
        QObject::connect(buttonBox, SIGNAL(accepted()), ViewAnimals, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ViewAnimals, SLOT(reject()));

        QMetaObject::connectSlotsByName(ViewAnimals);
    } // setupUi

    void retranslateUi(QDialog *ViewAnimals)
    {
        ViewAnimals->setWindowTitle(QApplication::translate("ViewAnimals", "Dialog", nullptr));
        nameLabel->setText(QApplication::translate("ViewAnimals", "Name", nullptr));
        typeLabel->setText(QApplication::translate("ViewAnimals", "Type", nullptr));
        typeComboBox->setItemText(0, QApplication::translate("ViewAnimals", "Please Select", nullptr));
        typeComboBox->setItemText(1, QApplication::translate("ViewAnimals", "Cat", nullptr));
        typeComboBox->setItemText(2, QApplication::translate("ViewAnimals", "Dog", nullptr));
        typeComboBox->setItemText(3, QApplication::translate("ViewAnimals", "Hamster", nullptr));
        typeComboBox->setItemText(4, QApplication::translate("ViewAnimals", "Fish", nullptr));
        typeComboBox->setItemText(5, QApplication::translate("ViewAnimals", "Snake", nullptr));

        labelBreed->setText(QApplication::translate("ViewAnimals", "Breed", nullptr));
        sexLabel->setText(QApplication::translate("ViewAnimals", "Sex", nullptr));
        sexComboBox->setItemText(0, QApplication::translate("ViewAnimals", "Please Select", nullptr));
        sexComboBox->setItemText(1, QApplication::translate("ViewAnimals", "Male", nullptr));
        sexComboBox->setItemText(2, QApplication::translate("ViewAnimals", "Female", nullptr));

        ageLabel->setText(QApplication::translate("ViewAnimals", "Age", nullptr));
        labelColour->setText(QApplication::translate("ViewAnimals", "Colour", nullptr));
        colourComboBox->setItemText(0, QApplication::translate("ViewAnimals", "Please Select", nullptr));
        colourComboBox->setItemText(1, QApplication::translate("ViewAnimals", "Black", nullptr));
        colourComboBox->setItemText(2, QApplication::translate("ViewAnimals", "White", nullptr));
        colourComboBox->setItemText(3, QApplication::translate("ViewAnimals", "Brown", nullptr));
        colourComboBox->setItemText(4, QApplication::translate("ViewAnimals", "Grey", nullptr));

        sizeLabel->setText(QApplication::translate("ViewAnimals", "Size", nullptr));
        sizeComboBox->setItemText(0, QApplication::translate("ViewAnimals", "Please Select", nullptr));
        sizeComboBox->setItemText(1, QApplication::translate("ViewAnimals", "Small", nullptr));
        sizeComboBox->setItemText(2, QApplication::translate("ViewAnimals", "Medium", nullptr));
        sizeComboBox->setItemText(3, QApplication::translate("ViewAnimals", "Large", nullptr));

    } // retranslateUi

};

namespace Ui {
    class ViewAnimals: public Ui_ViewAnimals {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWANIMALS_H
