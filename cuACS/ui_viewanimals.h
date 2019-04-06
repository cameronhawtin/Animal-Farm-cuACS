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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewAnimals
{
public:
    QListWidget *viewAnimalsListWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *childrenComfortLineEdit;
    QLabel *typeLabel_3;
    QLabel *typeLabel_2;
    QLineEdit *breedLineEdit;
    QLineEdit *obedienceLineEdit;
    QLineEdit *ageLineEdit;
    QLineEdit *attachmentLineEdit;
    QLabel *labelBreed;
    QLabel *sexLabel_2;
    QLineEdit *aggressionLineEdit;
    QLineEdit *cleanlinessLineEdit;
    QLineEdit *typeLineEdit;
    QLabel *labelBreed_2;
    QLineEdit *intelligenceLineEdit;
    QLabel *nameLabel;
    QLineEdit *sexLineEdit;
    QLabel *ageLabel_2;
    QLineEdit *loudnessLineEdit;
    QLabel *typeLabel;
    QLabel *nameLabel_2;
    QLabel *sexLabel;
    QLineEdit *nameLineEdit;
    QLabel *ageLabel_6;
    QLabel *ageLabel;
    QLabel *typeLabel_5;
    QLineEdit *isNeuteredLineEdit;
    QLabel *ageLabel_5;
    QLineEdit *isCrateTrainedLineEdit;
    QLabel *ageLabel_4;
    QLineEdit *isHypoallergenicLineEdit;
    QLabel *ageLabel_3;
    QLineEdit *costPerYearLineEdit;
    QLabel *sexLabel_3;
    QLineEdit *costLineEdit;
    QLabel *labelBreed_3;
    QLineEdit *energyLineEdit;
    QLabel *nameLabel_3;
    QLabel *typeLabel_4;
    QLineEdit *loyaltyLineEdit;
    QLineEdit *playfulnessLineEdit;
    QLineEdit *sizeLineEdit;
    QLabel *sizeLabel;
    QLineEdit *colourLineEdit;
    QLabel *labelColour;
    QLabel *lifeExpLabel;
    QLineEdit *lifeExpLineEdit;
    QDialogButtonBox *buttonBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *titleLabel;
    QPushButton *editAnimal;

    void setupUi(QDialog *ViewAnimals)
    {
        if (ViewAnimals->objectName().isEmpty())
            ViewAnimals->setObjectName(QStringLiteral("ViewAnimals"));
        ViewAnimals->resize(1016, 586);
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
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        QBrush brush3(QColor(190, 190, 190, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        QBrush brush4(QColor(145, 141, 126, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush4);
        ViewAnimals->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Egyptienne F"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        ViewAnimals->setFont(font);
        viewAnimalsListWidget = new QListWidget(ViewAnimals);
        viewAnimalsListWidget->setObjectName(QStringLiteral("viewAnimalsListWidget"));
        viewAnimalsListWidget->setGeometry(QRect(20, 30, 281, 441));
        gridLayoutWidget = new QWidget(ViewAnimals);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(320, 80, 671, 444));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        childrenComfortLineEdit = new QLineEdit(gridLayoutWidget);
        childrenComfortLineEdit->setObjectName(QStringLiteral("childrenComfortLineEdit"));
        childrenComfortLineEdit->setEnabled(true);

        gridLayout->addWidget(childrenComfortLineEdit, 10, 1, 1, 1);

        typeLabel_3 = new QLabel(gridLayoutWidget);
        typeLabel_3->setObjectName(QStringLiteral("typeLabel_3"));

        gridLayout->addWidget(typeLabel_3, 13, 1, 1, 1);

        typeLabel_2 = new QLabel(gridLayoutWidget);
        typeLabel_2->setObjectName(QStringLiteral("typeLabel_2"));

        gridLayout->addWidget(typeLabel_2, 3, 1, 1, 1);

        breedLineEdit = new QLineEdit(gridLayoutWidget);
        breedLineEdit->setObjectName(QStringLiteral("breedLineEdit"));

        gridLayout->addWidget(breedLineEdit, 6, 0, 1, 1);

        obedienceLineEdit = new QLineEdit(gridLayoutWidget);
        obedienceLineEdit->setObjectName(QStringLiteral("obedienceLineEdit"));

        gridLayout->addWidget(obedienceLineEdit, 6, 1, 1, 1);

        ageLineEdit = new QLineEdit(gridLayoutWidget);
        ageLineEdit->setObjectName(QStringLiteral("ageLineEdit"));
        ageLineEdit->setEnabled(true);

        gridLayout->addWidget(ageLineEdit, 10, 0, 1, 1);

        attachmentLineEdit = new QLineEdit(gridLayoutWidget);
        attachmentLineEdit->setObjectName(QStringLiteral("attachmentLineEdit"));

        gridLayout->addWidget(attachmentLineEdit, 4, 1, 1, 1);

        labelBreed = new QLabel(gridLayoutWidget);
        labelBreed->setObjectName(QStringLiteral("labelBreed"));

        gridLayout->addWidget(labelBreed, 5, 0, 1, 1);

        sexLabel_2 = new QLabel(gridLayoutWidget);
        sexLabel_2->setObjectName(QStringLiteral("sexLabel_2"));

        gridLayout->addWidget(sexLabel_2, 7, 1, 1, 1);

        aggressionLineEdit = new QLineEdit(gridLayoutWidget);
        aggressionLineEdit->setObjectName(QStringLiteral("aggressionLineEdit"));
        aggressionLineEdit->setEnabled(true);

        gridLayout->addWidget(aggressionLineEdit, 2, 1, 1, 1);

        cleanlinessLineEdit = new QLineEdit(gridLayoutWidget);
        cleanlinessLineEdit->setObjectName(QStringLiteral("cleanlinessLineEdit"));

        gridLayout->addWidget(cleanlinessLineEdit, 8, 1, 1, 1);

        typeLineEdit = new QLineEdit(gridLayoutWidget);
        typeLineEdit->setObjectName(QStringLiteral("typeLineEdit"));

        gridLayout->addWidget(typeLineEdit, 4, 0, 1, 1);

        labelBreed_2 = new QLabel(gridLayoutWidget);
        labelBreed_2->setObjectName(QStringLiteral("labelBreed_2"));

        gridLayout->addWidget(labelBreed_2, 5, 1, 1, 1);

        intelligenceLineEdit = new QLineEdit(gridLayoutWidget);
        intelligenceLineEdit->setObjectName(QStringLiteral("intelligenceLineEdit"));

        gridLayout->addWidget(intelligenceLineEdit, 14, 1, 1, 1);

        nameLabel = new QLabel(gridLayoutWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        gridLayout->addWidget(nameLabel, 1, 0, 1, 1);

        sexLineEdit = new QLineEdit(gridLayoutWidget);
        sexLineEdit->setObjectName(QStringLiteral("sexLineEdit"));

        gridLayout->addWidget(sexLineEdit, 8, 0, 1, 1);

        ageLabel_2 = new QLabel(gridLayoutWidget);
        ageLabel_2->setObjectName(QStringLiteral("ageLabel_2"));

        gridLayout->addWidget(ageLabel_2, 11, 1, 1, 1);

        loudnessLineEdit = new QLineEdit(gridLayoutWidget);
        loudnessLineEdit->setObjectName(QStringLiteral("loudnessLineEdit"));
        loudnessLineEdit->setEnabled(true);

        gridLayout->addWidget(loudnessLineEdit, 12, 1, 1, 1);

        typeLabel = new QLabel(gridLayoutWidget);
        typeLabel->setObjectName(QStringLiteral("typeLabel"));

        gridLayout->addWidget(typeLabel, 3, 0, 1, 1);

        nameLabel_2 = new QLabel(gridLayoutWidget);
        nameLabel_2->setObjectName(QStringLiteral("nameLabel_2"));

        gridLayout->addWidget(nameLabel_2, 1, 1, 1, 1);

        sexLabel = new QLabel(gridLayoutWidget);
        sexLabel->setObjectName(QStringLiteral("sexLabel"));

        gridLayout->addWidget(sexLabel, 7, 0, 1, 1);

        nameLineEdit = new QLineEdit(gridLayoutWidget);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setEnabled(true);

        gridLayout->addWidget(nameLineEdit, 2, 0, 1, 1);

        ageLabel_6 = new QLabel(gridLayoutWidget);
        ageLabel_6->setObjectName(QStringLiteral("ageLabel_6"));

        gridLayout->addWidget(ageLabel_6, 9, 1, 1, 1);

        ageLabel = new QLabel(gridLayoutWidget);
        ageLabel->setObjectName(QStringLiteral("ageLabel"));

        gridLayout->addWidget(ageLabel, 9, 0, 1, 1);

        typeLabel_5 = new QLabel(gridLayoutWidget);
        typeLabel_5->setObjectName(QStringLiteral("typeLabel_5"));

        gridLayout->addWidget(typeLabel_5, 15, 1, 1, 1);

        isNeuteredLineEdit = new QLineEdit(gridLayoutWidget);
        isNeuteredLineEdit->setObjectName(QStringLiteral("isNeuteredLineEdit"));
        isNeuteredLineEdit->setEnabled(true);

        gridLayout->addWidget(isNeuteredLineEdit, 14, 2, 1, 1);

        ageLabel_5 = new QLabel(gridLayoutWidget);
        ageLabel_5->setObjectName(QStringLiteral("ageLabel_5"));

        gridLayout->addWidget(ageLabel_5, 13, 2, 1, 1);

        isCrateTrainedLineEdit = new QLineEdit(gridLayoutWidget);
        isCrateTrainedLineEdit->setObjectName(QStringLiteral("isCrateTrainedLineEdit"));
        isCrateTrainedLineEdit->setEnabled(true);

        gridLayout->addWidget(isCrateTrainedLineEdit, 12, 2, 1, 1);

        ageLabel_4 = new QLabel(gridLayoutWidget);
        ageLabel_4->setObjectName(QStringLiteral("ageLabel_4"));

        gridLayout->addWidget(ageLabel_4, 11, 2, 1, 1);

        isHypoallergenicLineEdit = new QLineEdit(gridLayoutWidget);
        isHypoallergenicLineEdit->setObjectName(QStringLiteral("isHypoallergenicLineEdit"));
        isHypoallergenicLineEdit->setEnabled(true);

        gridLayout->addWidget(isHypoallergenicLineEdit, 10, 2, 1, 1);

        ageLabel_3 = new QLabel(gridLayoutWidget);
        ageLabel_3->setObjectName(QStringLiteral("ageLabel_3"));

        gridLayout->addWidget(ageLabel_3, 9, 2, 1, 1);

        costPerYearLineEdit = new QLineEdit(gridLayoutWidget);
        costPerYearLineEdit->setObjectName(QStringLiteral("costPerYearLineEdit"));

        gridLayout->addWidget(costPerYearLineEdit, 8, 2, 1, 1);

        sexLabel_3 = new QLabel(gridLayoutWidget);
        sexLabel_3->setObjectName(QStringLiteral("sexLabel_3"));

        gridLayout->addWidget(sexLabel_3, 7, 2, 1, 1);

        costLineEdit = new QLineEdit(gridLayoutWidget);
        costLineEdit->setObjectName(QStringLiteral("costLineEdit"));

        gridLayout->addWidget(costLineEdit, 6, 2, 1, 1);

        labelBreed_3 = new QLabel(gridLayoutWidget);
        labelBreed_3->setObjectName(QStringLiteral("labelBreed_3"));

        gridLayout->addWidget(labelBreed_3, 5, 2, 1, 1);

        energyLineEdit = new QLineEdit(gridLayoutWidget);
        energyLineEdit->setObjectName(QStringLiteral("energyLineEdit"));
        energyLineEdit->setEnabled(true);

        gridLayout->addWidget(energyLineEdit, 4, 2, 1, 1);

        nameLabel_3 = new QLabel(gridLayoutWidget);
        nameLabel_3->setObjectName(QStringLiteral("nameLabel_3"));

        gridLayout->addWidget(nameLabel_3, 3, 2, 1, 1);

        typeLabel_4 = new QLabel(gridLayoutWidget);
        typeLabel_4->setObjectName(QStringLiteral("typeLabel_4"));

        gridLayout->addWidget(typeLabel_4, 1, 2, 1, 1);

        loyaltyLineEdit = new QLineEdit(gridLayoutWidget);
        loyaltyLineEdit->setObjectName(QStringLiteral("loyaltyLineEdit"));
        loyaltyLineEdit->setEnabled(true);

        gridLayout->addWidget(loyaltyLineEdit, 2, 2, 1, 1);

        playfulnessLineEdit = new QLineEdit(gridLayoutWidget);
        playfulnessLineEdit->setObjectName(QStringLiteral("playfulnessLineEdit"));
        playfulnessLineEdit->setEnabled(true);

        gridLayout->addWidget(playfulnessLineEdit, 16, 1, 1, 1);

        sizeLineEdit = new QLineEdit(gridLayoutWidget);
        sizeLineEdit->setObjectName(QStringLiteral("sizeLineEdit"));

        gridLayout->addWidget(sizeLineEdit, 16, 0, 1, 1);

        sizeLabel = new QLabel(gridLayoutWidget);
        sizeLabel->setObjectName(QStringLiteral("sizeLabel"));

        gridLayout->addWidget(sizeLabel, 15, 0, 1, 1);

        colourLineEdit = new QLineEdit(gridLayoutWidget);
        colourLineEdit->setObjectName(QStringLiteral("colourLineEdit"));

        gridLayout->addWidget(colourLineEdit, 14, 0, 1, 1);

        labelColour = new QLabel(gridLayoutWidget);
        labelColour->setObjectName(QStringLiteral("labelColour"));

        gridLayout->addWidget(labelColour, 13, 0, 1, 1);

        lifeExpLabel = new QLabel(gridLayoutWidget);
        lifeExpLabel->setObjectName(QStringLiteral("lifeExpLabel"));

        gridLayout->addWidget(lifeExpLabel, 11, 0, 1, 1);

        lifeExpLineEdit = new QLineEdit(gridLayoutWidget);
        lifeExpLineEdit->setObjectName(QStringLiteral("lifeExpLineEdit"));

        gridLayout->addWidget(lifeExpLineEdit, 12, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ViewAnimals);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(780, 540, 209, 26));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        horizontalLayoutWidget = new QWidget(ViewAnimals);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(320, 10, 676, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        titleLabel = new QLabel(horizontalLayoutWidget);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QFont font1;
        font1.setPointSize(24);
        titleLabel->setFont(font1);
        titleLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(titleLabel);

        editAnimal = new QPushButton(ViewAnimals);
        editAnimal->setObjectName(QStringLiteral("editAnimal"));
        editAnimal->setGeometry(QRect(20, 480, 281, 41));
        QWidget::setTabOrder(viewAnimalsListWidget, nameLineEdit);
        QWidget::setTabOrder(nameLineEdit, aggressionLineEdit);
        QWidget::setTabOrder(aggressionLineEdit, typeLineEdit);
        QWidget::setTabOrder(typeLineEdit, attachmentLineEdit);
        QWidget::setTabOrder(attachmentLineEdit, breedLineEdit);
        QWidget::setTabOrder(breedLineEdit, obedienceLineEdit);
        QWidget::setTabOrder(obedienceLineEdit, sexLineEdit);
        QWidget::setTabOrder(sexLineEdit, cleanlinessLineEdit);
        QWidget::setTabOrder(cleanlinessLineEdit, ageLineEdit);
        QWidget::setTabOrder(ageLineEdit, childrenComfortLineEdit);
        QWidget::setTabOrder(childrenComfortLineEdit, loudnessLineEdit);
        QWidget::setTabOrder(loudnessLineEdit, intelligenceLineEdit);
        QWidget::setTabOrder(intelligenceLineEdit, editAnimal);

        retranslateUi(ViewAnimals);
        QObject::connect(buttonBox, SIGNAL(accepted()), ViewAnimals, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ViewAnimals, SLOT(reject()));

        QMetaObject::connectSlotsByName(ViewAnimals);
    } // setupUi

    void retranslateUi(QDialog *ViewAnimals)
    {
        ViewAnimals->setWindowTitle(QApplication::translate("ViewAnimals", "Dialog", Q_NULLPTR));
        typeLabel_3->setText(QApplication::translate("ViewAnimals", "Intelligence Level (Out of 10)", Q_NULLPTR));
        typeLabel_2->setText(QApplication::translate("ViewAnimals", "Attachment Level (Out of 10)", Q_NULLPTR));
        labelBreed->setText(QApplication::translate("ViewAnimals", "Breed", Q_NULLPTR));
        sexLabel_2->setText(QApplication::translate("ViewAnimals", "Cleanliness Level (Out of 10)", Q_NULLPTR));
        labelBreed_2->setText(QApplication::translate("ViewAnimals", "Obedience Level (Out of 10)", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("ViewAnimals", "Name", Q_NULLPTR));
        ageLabel_2->setText(QApplication::translate("ViewAnimals", "Loudness Level (Out of 10)", Q_NULLPTR));
        typeLabel->setText(QApplication::translate("ViewAnimals", "Type", Q_NULLPTR));
        nameLabel_2->setText(QApplication::translate("ViewAnimals", "Aggression Level (Out of 10)", Q_NULLPTR));
        sexLabel->setText(QApplication::translate("ViewAnimals", "Sex", Q_NULLPTR));
        ageLabel_6->setText(QApplication::translate("ViewAnimals", "Comfort with Children (Out of 10)", Q_NULLPTR));
        ageLabel->setText(QApplication::translate("ViewAnimals", "Age", Q_NULLPTR));
        typeLabel_5->setText(QApplication::translate("ViewAnimals", "<html><head/><body><p>Playfulness Level (Out of 10)</p></body></html>", Q_NULLPTR));
        ageLabel_5->setText(QApplication::translate("ViewAnimals", "Neutered/Spayed", Q_NULLPTR));
        ageLabel_4->setText(QApplication::translate("ViewAnimals", "Crate Trained", Q_NULLPTR));
        ageLabel_3->setText(QApplication::translate("ViewAnimals", "Hypoallergenic", Q_NULLPTR));
        sexLabel_3->setText(QApplication::translate("ViewAnimals", "Cost Per Year in dollars)", Q_NULLPTR));
        labelBreed_3->setText(QApplication::translate("ViewAnimals", "Flat Cost (in dollars)", Q_NULLPTR));
        nameLabel_3->setText(QApplication::translate("ViewAnimals", "Energy Level", Q_NULLPTR));
        typeLabel_4->setText(QApplication::translate("ViewAnimals", "<html><head/><body><p>Loyalty Level (Out of 10)</p></body></html>", Q_NULLPTR));
        sizeLabel->setText(QApplication::translate("ViewAnimals", "Size", Q_NULLPTR));
        labelColour->setText(QApplication::translate("ViewAnimals", "Colour", Q_NULLPTR));
        lifeExpLabel->setText(QApplication::translate("ViewAnimals", "Life Expectancy", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("ViewAnimals", "No Animals are Currently Available", Q_NULLPTR));
        editAnimal->setText(QApplication::translate("ViewAnimals", "Edit Selected Animal", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ViewAnimals: public Ui_ViewAnimals {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWANIMALS_H
