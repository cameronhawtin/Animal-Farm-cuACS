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
    QLineEdit *typeLineEdit;
    QLabel *labelBreed;
    QLineEdit *breedLineEdit;
    QLabel *sexLabel;
    QLineEdit *sexLineEdit;
    QLabel *ageLabel;
    QLineEdit *ageLineEdit;
    QLabel *labelColour;
    QLineEdit *colourLineEdit;
    QLabel *sizeLabel;
    QLineEdit *sizeLineEdit;

    void setupUi(QDialog *ViewAnimals)
    {
        if (ViewAnimals->objectName().isEmpty())
            ViewAnimals->setObjectName(QStringLiteral("ViewAnimals"));
        ViewAnimals->resize(941, 470);
        viewAnimalsListWidget = new QListWidget(ViewAnimals);
        viewAnimalsListWidget->setObjectName(QStringLiteral("viewAnimalsListWidget"));
        viewAnimalsListWidget->setGeometry(QRect(20, 20, 281, 421));
        buttonBox = new QDialogButtonBox(ViewAnimals);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(580, 430, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(ViewAnimals);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(330, 20, 591, 401));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        verticalLayout_2->addWidget(nameLabel);

        nameLineEdit = new QLineEdit(layoutWidget);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setEnabled(true);

        verticalLayout_2->addWidget(nameLineEdit);

        typeLabel = new QLabel(layoutWidget);
        typeLabel->setObjectName(QStringLiteral("typeLabel"));

        verticalLayout_2->addWidget(typeLabel);

        typeLineEdit = new QLineEdit(layoutWidget);
        typeLineEdit->setObjectName(QStringLiteral("typeLineEdit"));

        verticalLayout_2->addWidget(typeLineEdit);

        labelBreed = new QLabel(layoutWidget);
        labelBreed->setObjectName(QStringLiteral("labelBreed"));

        verticalLayout_2->addWidget(labelBreed);

        breedLineEdit = new QLineEdit(layoutWidget);
        breedLineEdit->setObjectName(QStringLiteral("breedLineEdit"));

        verticalLayout_2->addWidget(breedLineEdit);

        sexLabel = new QLabel(layoutWidget);
        sexLabel->setObjectName(QStringLiteral("sexLabel"));

        verticalLayout_2->addWidget(sexLabel);

        sexLineEdit = new QLineEdit(layoutWidget);
        sexLineEdit->setObjectName(QStringLiteral("sexLineEdit"));

        verticalLayout_2->addWidget(sexLineEdit);

        ageLabel = new QLabel(layoutWidget);
        ageLabel->setObjectName(QStringLiteral("ageLabel"));

        verticalLayout_2->addWidget(ageLabel);

        ageLineEdit = new QLineEdit(layoutWidget);
        ageLineEdit->setObjectName(QStringLiteral("ageLineEdit"));
        ageLineEdit->setEnabled(true);

        verticalLayout_2->addWidget(ageLineEdit);

        labelColour = new QLabel(layoutWidget);
        labelColour->setObjectName(QStringLiteral("labelColour"));

        verticalLayout_2->addWidget(labelColour);

        colourLineEdit = new QLineEdit(layoutWidget);
        colourLineEdit->setObjectName(QStringLiteral("colourLineEdit"));

        verticalLayout_2->addWidget(colourLineEdit);

        sizeLabel = new QLabel(layoutWidget);
        sizeLabel->setObjectName(QStringLiteral("sizeLabel"));

        verticalLayout_2->addWidget(sizeLabel);

        sizeLineEdit = new QLineEdit(layoutWidget);
        sizeLineEdit->setObjectName(QStringLiteral("sizeLineEdit"));

        verticalLayout_2->addWidget(sizeLineEdit);


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
        labelBreed->setText(QApplication::translate("ViewAnimals", "Breed", Q_NULLPTR));
        sexLabel->setText(QApplication::translate("ViewAnimals", "Sex", Q_NULLPTR));
        ageLabel->setText(QApplication::translate("ViewAnimals", "Age", Q_NULLPTR));
        labelColour->setText(QApplication::translate("ViewAnimals", "Colour", Q_NULLPTR));
        sizeLabel->setText(QApplication::translate("ViewAnimals", "Size", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ViewAnimals: public Ui_ViewAnimals {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWANIMALS_H
