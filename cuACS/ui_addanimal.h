/********************************************************************************
** Form generated from reading UI file 'addanimal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDANIMAL_H
#define UI_ADDANIMAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
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
            AddAnimal->setObjectName(QStringLiteral("AddAnimal"));
        AddAnimal->resize(610, 432);
        buttonBox = new QDialogButtonBox(AddAnimal);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setEnabled(true);
        buttonBox->setGeometry(QRect(260, 390, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(AddAnimal);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setEnabled(true);
        layoutWidget->setGeometry(QRect(10, 10, 591, 361));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setEnabled(true);

        verticalLayout_2->addWidget(nameLabel);

        nameLineEdit = new QLineEdit(layoutWidget);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setEnabled(true);

        verticalLayout_2->addWidget(nameLineEdit);

        typeLabel = new QLabel(layoutWidget);
        typeLabel->setObjectName(QStringLiteral("typeLabel"));
        typeLabel->setEnabled(true);

        verticalLayout_2->addWidget(typeLabel);

        typeComboBox = new QComboBox(layoutWidget);
        typeComboBox->setObjectName(QStringLiteral("typeComboBox"));
        typeComboBox->setEnabled(true);

        verticalLayout_2->addWidget(typeComboBox);

        labelBreed = new QLabel(layoutWidget);
        labelBreed->setObjectName(QStringLiteral("labelBreed"));
        labelBreed->setEnabled(true);

        verticalLayout_2->addWidget(labelBreed);

        breedComboBox = new QComboBox(layoutWidget);
        breedComboBox->setObjectName(QStringLiteral("breedComboBox"));
        breedComboBox->setEnabled(true);

        verticalLayout_2->addWidget(breedComboBox);

        sexLabel = new QLabel(layoutWidget);
        sexLabel->setObjectName(QStringLiteral("sexLabel"));
        sexLabel->setEnabled(true);

        verticalLayout_2->addWidget(sexLabel);

        sexComboBox = new QComboBox(layoutWidget);
        sexComboBox->setObjectName(QStringLiteral("sexComboBox"));
        sexComboBox->setEnabled(true);

        verticalLayout_2->addWidget(sexComboBox);

        ageLabel = new QLabel(layoutWidget);
        ageLabel->setObjectName(QStringLiteral("ageLabel"));
        ageLabel->setEnabled(true);

        verticalLayout_2->addWidget(ageLabel);

        ageLineEdit = new QLineEdit(layoutWidget);
        ageLineEdit->setObjectName(QStringLiteral("ageLineEdit"));
        ageLineEdit->setEnabled(true);

        verticalLayout_2->addWidget(ageLineEdit);

        labelColour = new QLabel(layoutWidget);
        labelColour->setObjectName(QStringLiteral("labelColour"));
        labelColour->setEnabled(true);

        verticalLayout_2->addWidget(labelColour);

        colourComboBox = new QComboBox(layoutWidget);
        colourComboBox->setObjectName(QStringLiteral("colourComboBox"));
        colourComboBox->setEnabled(true);

        verticalLayout_2->addWidget(colourComboBox);

        sizeLabel = new QLabel(layoutWidget);
        sizeLabel->setObjectName(QStringLiteral("sizeLabel"));
        sizeLabel->setEnabled(true);

        verticalLayout_2->addWidget(sizeLabel);

        sizeComboBox = new QComboBox(layoutWidget);
        sizeComboBox->setObjectName(QStringLiteral("sizeComboBox"));
        sizeComboBox->setEnabled(true);

        verticalLayout_2->addWidget(sizeComboBox);


        retranslateUi(AddAnimal);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddAnimal, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddAnimal, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddAnimal);
    } // setupUi

    void retranslateUi(QDialog *AddAnimal)
    {
        AddAnimal->setWindowTitle(QApplication::translate("AddAnimal", "Dialog", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("AddAnimal", "Name", Q_NULLPTR));
        typeLabel->setText(QApplication::translate("AddAnimal", "Type", Q_NULLPTR));
        typeComboBox->clear();
        typeComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddAnimal", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Cat", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Dog", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Hamster", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Fish", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Snake", Q_NULLPTR)
        );
        labelBreed->setText(QApplication::translate("AddAnimal", "Breed", Q_NULLPTR));
        breedComboBox->clear();
        breedComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddAnimal", "Please Select a Type", Q_NULLPTR)
        );
        sexLabel->setText(QApplication::translate("AddAnimal", "Sex", Q_NULLPTR));
        sexComboBox->clear();
        sexComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddAnimal", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Male", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Female", Q_NULLPTR)
        );
        ageLabel->setText(QApplication::translate("AddAnimal", "Age", Q_NULLPTR));
        labelColour->setText(QApplication::translate("AddAnimal", "Colour", Q_NULLPTR));
        colourComboBox->clear();
        colourComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddAnimal", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Black", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "White", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Brown", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Grey", Q_NULLPTR)
        );
        sizeLabel->setText(QApplication::translate("AddAnimal", "Size", Q_NULLPTR));
        sizeComboBox->clear();
        sizeComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddAnimal", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Small", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Medium", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Large", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class AddAnimal: public Ui_AddAnimal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDANIMAL_H
