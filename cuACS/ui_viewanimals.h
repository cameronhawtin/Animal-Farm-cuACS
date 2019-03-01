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
    QLabel *titleLabel;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *nameLabel_2;
    QLineEdit *aggressionLineEdit;
    QLabel *typeLabel_2;
    QLineEdit *attachmentLineEdit;
    QLabel *labelBreed_2;
    QLineEdit *obedienceLineEdit;
    QLabel *sexLabel_2;
    QLineEdit *cleanlinessLineEdit;
    QLabel *ageLabel_6;
    QLineEdit *childrenComfortLineEdit;
    QLabel *ageLabel_2;
    QLineEdit *loudnessLineEdit;
    QLabel *typeLabel_3;
    QLineEdit *intelligenceLineEdit;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *nameLabel_3;
    QLineEdit *energyLineEdit;
    QLabel *labelBreed_3;
    QLineEdit *costLineEdit;
    QLabel *sexLabel_3;
    QLineEdit *costPerYearLineEdit;
    QLabel *ageLabel_3;
    QLineEdit *isHypoallergenicLineEdit;
    QLabel *ageLabel_4;
    QLineEdit *isCrateTrainedLineEdit;
    QLabel *ageLabel_5;
    QLineEdit *isNeuteredLineEdit;

    void setupUi(QDialog *ViewAnimals)
    {
        if (ViewAnimals->objectName().isEmpty())
            ViewAnimals->setObjectName(QStringLiteral("ViewAnimals"));
        ViewAnimals->resize(1071, 533);
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
        ViewAnimals->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Egyptienne F"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        ViewAnimals->setFont(font);
        viewAnimalsListWidget = new QListWidget(ViewAnimals);
        viewAnimalsListWidget->setObjectName(QStringLiteral("viewAnimalsListWidget"));
        viewAnimalsListWidget->setGeometry(QRect(20, 30, 281, 461));
        buttonBox = new QDialogButtonBox(ViewAnimals);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(700, 490, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(ViewAnimals);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(330, 80, 161, 391));
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

        titleLabel = new QLabel(ViewAnimals);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(340, 20, 581, 41));
        QFont font1;
        font1.setPointSize(24);
        titleLabel->setFont(font1);
        titleLabel->setAlignment(Qt::AlignCenter);
        layoutWidget_2 = new QWidget(ViewAnimals);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(520, 80, 241, 391));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        nameLabel_2 = new QLabel(layoutWidget_2);
        nameLabel_2->setObjectName(QStringLiteral("nameLabel_2"));

        verticalLayout_3->addWidget(nameLabel_2);

        aggressionLineEdit = new QLineEdit(layoutWidget_2);
        aggressionLineEdit->setObjectName(QStringLiteral("aggressionLineEdit"));
        aggressionLineEdit->setEnabled(true);

        verticalLayout_3->addWidget(aggressionLineEdit);

        typeLabel_2 = new QLabel(layoutWidget_2);
        typeLabel_2->setObjectName(QStringLiteral("typeLabel_2"));

        verticalLayout_3->addWidget(typeLabel_2);

        attachmentLineEdit = new QLineEdit(layoutWidget_2);
        attachmentLineEdit->setObjectName(QStringLiteral("attachmentLineEdit"));

        verticalLayout_3->addWidget(attachmentLineEdit);

        labelBreed_2 = new QLabel(layoutWidget_2);
        labelBreed_2->setObjectName(QStringLiteral("labelBreed_2"));

        verticalLayout_3->addWidget(labelBreed_2);

        obedienceLineEdit = new QLineEdit(layoutWidget_2);
        obedienceLineEdit->setObjectName(QStringLiteral("obedienceLineEdit"));

        verticalLayout_3->addWidget(obedienceLineEdit);

        sexLabel_2 = new QLabel(layoutWidget_2);
        sexLabel_2->setObjectName(QStringLiteral("sexLabel_2"));

        verticalLayout_3->addWidget(sexLabel_2);

        cleanlinessLineEdit = new QLineEdit(layoutWidget_2);
        cleanlinessLineEdit->setObjectName(QStringLiteral("cleanlinessLineEdit"));

        verticalLayout_3->addWidget(cleanlinessLineEdit);

        ageLabel_6 = new QLabel(layoutWidget_2);
        ageLabel_6->setObjectName(QStringLiteral("ageLabel_6"));

        verticalLayout_3->addWidget(ageLabel_6);

        childrenComfortLineEdit = new QLineEdit(layoutWidget_2);
        childrenComfortLineEdit->setObjectName(QStringLiteral("childrenComfortLineEdit"));
        childrenComfortLineEdit->setEnabled(true);

        verticalLayout_3->addWidget(childrenComfortLineEdit);

        ageLabel_2 = new QLabel(layoutWidget_2);
        ageLabel_2->setObjectName(QStringLiteral("ageLabel_2"));

        verticalLayout_3->addWidget(ageLabel_2);

        loudnessLineEdit = new QLineEdit(layoutWidget_2);
        loudnessLineEdit->setObjectName(QStringLiteral("loudnessLineEdit"));
        loudnessLineEdit->setEnabled(true);

        verticalLayout_3->addWidget(loudnessLineEdit);

        typeLabel_3 = new QLabel(layoutWidget_2);
        typeLabel_3->setObjectName(QStringLiteral("typeLabel_3"));

        verticalLayout_3->addWidget(typeLabel_3);

        intelligenceLineEdit = new QLineEdit(layoutWidget_2);
        intelligenceLineEdit->setObjectName(QStringLiteral("intelligenceLineEdit"));

        verticalLayout_3->addWidget(intelligenceLineEdit);

        layoutWidget_3 = new QWidget(ViewAnimals);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(800, 80, 241, 391));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        nameLabel_3 = new QLabel(layoutWidget_3);
        nameLabel_3->setObjectName(QStringLiteral("nameLabel_3"));

        verticalLayout_4->addWidget(nameLabel_3);

        energyLineEdit = new QLineEdit(layoutWidget_3);
        energyLineEdit->setObjectName(QStringLiteral("energyLineEdit"));
        energyLineEdit->setEnabled(true);

        verticalLayout_4->addWidget(energyLineEdit);

        labelBreed_3 = new QLabel(layoutWidget_3);
        labelBreed_3->setObjectName(QStringLiteral("labelBreed_3"));

        verticalLayout_4->addWidget(labelBreed_3);

        costLineEdit = new QLineEdit(layoutWidget_3);
        costLineEdit->setObjectName(QStringLiteral("costLineEdit"));

        verticalLayout_4->addWidget(costLineEdit);

        sexLabel_3 = new QLabel(layoutWidget_3);
        sexLabel_3->setObjectName(QStringLiteral("sexLabel_3"));

        verticalLayout_4->addWidget(sexLabel_3);

        costPerYearLineEdit = new QLineEdit(layoutWidget_3);
        costPerYearLineEdit->setObjectName(QStringLiteral("costPerYearLineEdit"));

        verticalLayout_4->addWidget(costPerYearLineEdit);

        ageLabel_3 = new QLabel(layoutWidget_3);
        ageLabel_3->setObjectName(QStringLiteral("ageLabel_3"));

        verticalLayout_4->addWidget(ageLabel_3);

        isHypoallergenicLineEdit = new QLineEdit(layoutWidget_3);
        isHypoallergenicLineEdit->setObjectName(QStringLiteral("isHypoallergenicLineEdit"));
        isHypoallergenicLineEdit->setEnabled(true);

        verticalLayout_4->addWidget(isHypoallergenicLineEdit);

        ageLabel_4 = new QLabel(layoutWidget_3);
        ageLabel_4->setObjectName(QStringLiteral("ageLabel_4"));

        verticalLayout_4->addWidget(ageLabel_4);

        isCrateTrainedLineEdit = new QLineEdit(layoutWidget_3);
        isCrateTrainedLineEdit->setObjectName(QStringLiteral("isCrateTrainedLineEdit"));
        isCrateTrainedLineEdit->setEnabled(true);

        verticalLayout_4->addWidget(isCrateTrainedLineEdit);

        ageLabel_5 = new QLabel(layoutWidget_3);
        ageLabel_5->setObjectName(QStringLiteral("ageLabel_5"));

        verticalLayout_4->addWidget(ageLabel_5);

        isNeuteredLineEdit = new QLineEdit(layoutWidget_3);
        isNeuteredLineEdit->setObjectName(QStringLiteral("isNeuteredLineEdit"));
        isNeuteredLineEdit->setEnabled(true);

        verticalLayout_4->addWidget(isNeuteredLineEdit);


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
        titleLabel->setText(QApplication::translate("ViewAnimals", "No Animals are Currently Available", Q_NULLPTR));
        nameLabel_2->setText(QApplication::translate("ViewAnimals", "Aggression Level (Out of 10)", Q_NULLPTR));
        typeLabel_2->setText(QApplication::translate("ViewAnimals", "Attachment Level (Out of 10)", Q_NULLPTR));
        labelBreed_2->setText(QApplication::translate("ViewAnimals", "Obedience Level (Out of 10)", Q_NULLPTR));
        sexLabel_2->setText(QApplication::translate("ViewAnimals", "Cleanliness Level (Out of 10)", Q_NULLPTR));
        ageLabel_6->setText(QApplication::translate("ViewAnimals", "Comfort with Children (Out of 10)", Q_NULLPTR));
        ageLabel_2->setText(QApplication::translate("ViewAnimals", "Loudness Level (Out of 10)", Q_NULLPTR));
        typeLabel_3->setText(QApplication::translate("ViewAnimals", "Intelligence Level (Out of 10)", Q_NULLPTR));
        nameLabel_3->setText(QApplication::translate("ViewAnimals", "Energy Level", Q_NULLPTR));
        labelBreed_3->setText(QApplication::translate("ViewAnimals", "Flat Cost", Q_NULLPTR));
        sexLabel_3->setText(QApplication::translate("ViewAnimals", "Cost Per Year", Q_NULLPTR));
        ageLabel_3->setText(QApplication::translate("ViewAnimals", "Hypoallergenic", Q_NULLPTR));
        ageLabel_4->setText(QApplication::translate("ViewAnimals", "Crate Trained", Q_NULLPTR));
        ageLabel_5->setText(QApplication::translate("ViewAnimals", "Neutered/Spayed", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ViewAnimals: public Ui_ViewAnimals {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWANIMALS_H
