/********************************************************************************
** Form generated from reading UI file 'viewanimals.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWANIMALS_H
#define UI_VIEWANIMALS_H

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
            ViewAnimals->setObjectName(QStringLiteral("ViewAnimals"));
        ViewAnimals->resize(956, 450);
        viewAnimalsListWidget = new QListWidget(ViewAnimals);
        viewAnimalsListWidget->setObjectName(QStringLiteral("viewAnimalsListWidget"));
        viewAnimalsListWidget->setGeometry(QRect(20, 20, 281, 411));
        buttonBox = new QDialogButtonBox(ViewAnimals);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(580, 410, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(ViewAnimals);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(330, 20, 591, 374));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        verticalLayout_2->addWidget(nameLabel);

        nameLineEdit = new QLineEdit(layoutWidget);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setEnabled(false);

        verticalLayout_2->addWidget(nameLineEdit);

        typeLabel = new QLabel(layoutWidget);
        typeLabel->setObjectName(QStringLiteral("typeLabel"));

        verticalLayout_2->addWidget(typeLabel);

        typeComboBox = new QComboBox(layoutWidget);
        typeComboBox->setObjectName(QStringLiteral("typeComboBox"));
        typeComboBox->setEnabled(false);

        verticalLayout_2->addWidget(typeComboBox);

        labelBreed = new QLabel(layoutWidget);
        labelBreed->setObjectName(QStringLiteral("labelBreed"));

        verticalLayout_2->addWidget(labelBreed);

        breedComboBox = new QComboBox(layoutWidget);
        breedComboBox->setObjectName(QStringLiteral("breedComboBox"));
        breedComboBox->setEnabled(false);

        verticalLayout_2->addWidget(breedComboBox);

        sexLabel = new QLabel(layoutWidget);
        sexLabel->setObjectName(QStringLiteral("sexLabel"));

        verticalLayout_2->addWidget(sexLabel);

        sexComboBox = new QComboBox(layoutWidget);
        sexComboBox->setObjectName(QStringLiteral("sexComboBox"));
        sexComboBox->setEnabled(false);

        verticalLayout_2->addWidget(sexComboBox);

        ageLabel = new QLabel(layoutWidget);
        ageLabel->setObjectName(QStringLiteral("ageLabel"));

        verticalLayout_2->addWidget(ageLabel);

        ageLineEdit = new QLineEdit(layoutWidget);
        ageLineEdit->setObjectName(QStringLiteral("ageLineEdit"));
        ageLineEdit->setEnabled(false);

        verticalLayout_2->addWidget(ageLineEdit);

        labelColour = new QLabel(layoutWidget);
        labelColour->setObjectName(QStringLiteral("labelColour"));

        verticalLayout_2->addWidget(labelColour);

        colourComboBox = new QComboBox(layoutWidget);
        colourComboBox->setObjectName(QStringLiteral("colourComboBox"));
        colourComboBox->setEnabled(false);

        verticalLayout_2->addWidget(colourComboBox);

        sizeLabel = new QLabel(layoutWidget);
        sizeLabel->setObjectName(QStringLiteral("sizeLabel"));

        verticalLayout_2->addWidget(sizeLabel);

        sizeComboBox = new QComboBox(layoutWidget);
        sizeComboBox->setObjectName(QStringLiteral("sizeComboBox"));
        sizeComboBox->setEnabled(false);

        verticalLayout_2->addWidget(sizeComboBox);


        retranslateUi(ViewAnimals);
        QObject::connect(buttonBox, SIGNAL(accepted()), ViewAnimals, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ViewAnimals, SLOT(reject()));

        QMetaObject::connectSlotsByName(ViewAnimals);
    } // setupUi

    void retranslateUi(QDialog *ViewAnimals)
    {
        ViewAnimals->setWindowTitle(QApplication::translate("ViewAnimals", "Dialog", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("ViewAnimals", "Name", Q_NULLPTR));
        typeLabel->setText(QApplication::translate("ViewAnimals", "Type", Q_NULLPTR));
        typeComboBox->clear();
        typeComboBox->insertItems(0, QStringList()
         << QApplication::translate("ViewAnimals", "Please Select", Q_NULLPTR)
         << QApplication::translate("ViewAnimals", "Cat", Q_NULLPTR)
         << QApplication::translate("ViewAnimals", "Dog", Q_NULLPTR)
         << QApplication::translate("ViewAnimals", "Hamster", Q_NULLPTR)
         << QApplication::translate("ViewAnimals", "Fish", Q_NULLPTR)
         << QApplication::translate("ViewAnimals", "Snake", Q_NULLPTR)
        );
        labelBreed->setText(QApplication::translate("ViewAnimals", "Breed", Q_NULLPTR));
        sexLabel->setText(QApplication::translate("ViewAnimals", "Sex", Q_NULLPTR));
        sexComboBox->clear();
        sexComboBox->insertItems(0, QStringList()
         << QApplication::translate("ViewAnimals", "Please Select", Q_NULLPTR)
         << QApplication::translate("ViewAnimals", "Male", Q_NULLPTR)
         << QApplication::translate("ViewAnimals", "Female", Q_NULLPTR)
        );
        ageLabel->setText(QApplication::translate("ViewAnimals", "Age", Q_NULLPTR));
        labelColour->setText(QApplication::translate("ViewAnimals", "Colour", Q_NULLPTR));
        colourComboBox->clear();
        colourComboBox->insertItems(0, QStringList()
         << QApplication::translate("ViewAnimals", "Please Select", Q_NULLPTR)
         << QApplication::translate("ViewAnimals", "Black", Q_NULLPTR)
         << QApplication::translate("ViewAnimals", "White", Q_NULLPTR)
         << QApplication::translate("ViewAnimals", "Brown", Q_NULLPTR)
         << QApplication::translate("ViewAnimals", "Grey", Q_NULLPTR)
        );
        sizeLabel->setText(QApplication::translate("ViewAnimals", "Size", Q_NULLPTR));
        sizeComboBox->clear();
        sizeComboBox->insertItems(0, QStringList()
         << QApplication::translate("ViewAnimals", "Please Select", Q_NULLPTR)
         << QApplication::translate("ViewAnimals", "Small", Q_NULLPTR)
         << QApplication::translate("ViewAnimals", "Medium", Q_NULLPTR)
         << QApplication::translate("ViewAnimals", "Large", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class ViewAnimals: public Ui_ViewAnimals {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWANIMALS_H
