/********************************************************************************
** Form generated from reading UI file 'editanimal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITANIMAL_H
#define UI_EDITANIMAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditAnimal
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_20;
    QRadioButton *isNeuteredRadioButtonYES;
    QRadioButton *isNeuteredRadioButtonNO;
    QLabel *energyLabel_2;
    QLabel *sizeLabel_4;
    QLabel *ageLabel_6;
    QLabel *typeLabel_2;
    QLabel *labelColour_5;
    QHBoxLayout *horizontalLayout_18;
    QRadioButton *isCrateTrainedRadioButtonYES;
    QRadioButton *isCrateTrainedRadioButtonNO;
    QLabel *attachmentLabel_3;
    QHBoxLayout *horizontalLayout_12;
    QSlider *cleanlinessSlider;
    QLineEdit *cleanlinessLineEdit;
    QLabel *nameLabel_2;
    QLineEdit *costLineEdit;
    QLabel *labelColour_6;
    QLineEdit *ageLineEdit;
    QLabel *sexLabel_2;
    QHBoxLayout *horizontalLayout_14;
    QSlider *obedienceSlider;
    QLineEdit *obedienceLineEdit;
    QLabel *aggressionLabel_3;
    QHBoxLayout *horizontalLayout_13;
    QSlider *loudnessSlider;
    QLineEdit *loudnessLineEdit;
    QLineEdit *costPerYearLineEdit;
    QLabel *sexLabel_4;
    QLineEdit *nameLineEdit;
    QLabel *aggressionLabel_4;
    QHBoxLayout *horizontalLayout_7;
    QSlider *attachmentSlider;
    QLineEdit *attachmentLineEdit;
    QHBoxLayout *horizontalLayout_17;
    QSlider *intelligenceSlider;
    QLineEdit *intelligenceLineEdit;
    QLabel *ageLabel_5;
    QComboBox *sexComboBox;
    QComboBox *breedComboBox;
    QLabel *ageLabel_4;
    QLabel *ageLabel_8;
    QLabel *ageLabel_7;
    QComboBox *typeComboBox;
    QLabel *labelBreed_4;
    QHBoxLayout *horizontalLayout_16;
    QSlider *aggressionSlider;
    QLineEdit *aggressionLineEdit;
    QLabel *attachmentLabel_4;
    QLabel *labelBreed_5;
    QHBoxLayout *horizontalLayout_15;
    QSlider *childrenComfortSlider;
    QLineEdit *childrenComfortLineEdit;
    QHBoxLayout *horizontalLayout_19;
    QRadioButton *isHypoallergenicRadioButtonYES;
    QRadioButton *isHypoallergenicRadioButtonNO;
    QComboBox *energyComboBox;
    QLabel *labelBreed_6;
    QHBoxLayout *horizontalLayout_21;
    QSlider *playfulnessSlider;
    QLineEdit *playfulnessLineEdit;
    QHBoxLayout *horizontalLayout_22;
    QSlider *loyaltySlider;
    QLineEdit *loyaltyLineEdit;
    QComboBox *sizeComboBox;
    QLabel *sizeLabel_3;
    QComboBox *colourComboBox;
    QLabel *labelColour_4;
    QLabel *ageLabel_9;
    QLineEdit *lifeExpLineEdit;
    QDialogButtonBox *buttonBox;
    QLabel *titleLabel;
    QButtonGroup *buttonGroup_2;
    QButtonGroup *buttonGroup_3;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *EditAnimal)
    {
        if (EditAnimal->objectName().isEmpty())
            EditAnimal->setObjectName(QStringLiteral("EditAnimal"));
        EditAnimal->resize(783, 577);
        QPalette palette;
        QBrush brush(QColor(200, 16, 46, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        QBrush brush3(QColor(190, 190, 190, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        QBrush brush4(QColor(145, 145, 145, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush4);
        EditAnimal->setPalette(palette);
        gridLayoutWidget = new QWidget(EditAnimal);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 70, 740, 457));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(12);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        isNeuteredRadioButtonYES = new QRadioButton(gridLayoutWidget);
        buttonGroup_2 = new QButtonGroup(EditAnimal);
        buttonGroup_2->setObjectName(QStringLiteral("buttonGroup_2"));
        buttonGroup_2->addButton(isNeuteredRadioButtonYES);
        isNeuteredRadioButtonYES->setObjectName(QStringLiteral("isNeuteredRadioButtonYES"));

        horizontalLayout_20->addWidget(isNeuteredRadioButtonYES);

        isNeuteredRadioButtonNO = new QRadioButton(gridLayoutWidget);
        buttonGroup_2->addButton(isNeuteredRadioButtonNO);
        isNeuteredRadioButtonNO->setObjectName(QStringLiteral("isNeuteredRadioButtonNO"));

        horizontalLayout_20->addWidget(isNeuteredRadioButtonNO);


        gridLayout_2->addLayout(horizontalLayout_20, 13, 2, 1, 1);

        energyLabel_2 = new QLabel(gridLayoutWidget);
        energyLabel_2->setObjectName(QStringLiteral("energyLabel_2"));
        energyLabel_2->setEnabled(true);

        gridLayout_2->addWidget(energyLabel_2, 2, 2, 1, 1);

        sizeLabel_4 = new QLabel(gridLayoutWidget);
        sizeLabel_4->setObjectName(QStringLiteral("sizeLabel_4"));
        sizeLabel_4->setEnabled(true);

        gridLayout_2->addWidget(sizeLabel_4, 12, 2, 1, 1);

        ageLabel_6 = new QLabel(gridLayoutWidget);
        ageLabel_6->setObjectName(QStringLiteral("ageLabel_6"));
        ageLabel_6->setEnabled(true);

        gridLayout_2->addWidget(ageLabel_6, 10, 2, 1, 1);

        typeLabel_2 = new QLabel(gridLayoutWidget);
        typeLabel_2->setObjectName(QStringLiteral("typeLabel_2"));
        typeLabel_2->setEnabled(true);

        gridLayout_2->addWidget(typeLabel_2, 2, 0, 1, 1);

        labelColour_5 = new QLabel(gridLayoutWidget);
        labelColour_5->setObjectName(QStringLiteral("labelColour_5"));
        labelColour_5->setEnabled(true);

        gridLayout_2->addWidget(labelColour_5, 6, 1, 1, 1);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        isCrateTrainedRadioButtonYES = new QRadioButton(gridLayoutWidget);
        buttonGroup_3 = new QButtonGroup(EditAnimal);
        buttonGroup_3->setObjectName(QStringLiteral("buttonGroup_3"));
        buttonGroup_3->addButton(isCrateTrainedRadioButtonYES);
        isCrateTrainedRadioButtonYES->setObjectName(QStringLiteral("isCrateTrainedRadioButtonYES"));

        horizontalLayout_18->addWidget(isCrateTrainedRadioButtonYES);

        isCrateTrainedRadioButtonNO = new QRadioButton(gridLayoutWidget);
        buttonGroup_3->addButton(isCrateTrainedRadioButtonNO);
        isCrateTrainedRadioButtonNO->setObjectName(QStringLiteral("isCrateTrainedRadioButtonNO"));

        horizontalLayout_18->addWidget(isCrateTrainedRadioButtonNO);


        gridLayout_2->addLayout(horizontalLayout_18, 9, 2, 1, 1);

        attachmentLabel_3 = new QLabel(gridLayoutWidget);
        attachmentLabel_3->setObjectName(QStringLiteral("attachmentLabel_3"));
        attachmentLabel_3->setEnabled(true);

        gridLayout_2->addWidget(attachmentLabel_3, 2, 1, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(12);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        cleanlinessSlider = new QSlider(gridLayoutWidget);
        cleanlinessSlider->setObjectName(QStringLiteral("cleanlinessSlider"));
        cleanlinessSlider->setMaximum(10);
        cleanlinessSlider->setPageStep(2);
        cleanlinessSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(cleanlinessSlider);

        cleanlinessLineEdit = new QLineEdit(gridLayoutWidget);
        cleanlinessLineEdit->setObjectName(QStringLiteral("cleanlinessLineEdit"));
        cleanlinessLineEdit->setEnabled(false);
        cleanlinessLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(cleanlinessLineEdit);

        horizontalLayout_12->setStretch(0, 10);
        horizontalLayout_12->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout_12, 7, 1, 1, 1);

        nameLabel_2 = new QLabel(gridLayoutWidget);
        nameLabel_2->setObjectName(QStringLiteral("nameLabel_2"));
        nameLabel_2->setEnabled(true);

        gridLayout_2->addWidget(nameLabel_2, 0, 0, 1, 1);

        costLineEdit = new QLineEdit(gridLayoutWidget);
        costLineEdit->setObjectName(QStringLiteral("costLineEdit"));
        costLineEdit->setEnabled(true);

        gridLayout_2->addWidget(costLineEdit, 5, 2, 1, 1);

        labelColour_6 = new QLabel(gridLayoutWidget);
        labelColour_6->setObjectName(QStringLiteral("labelColour_6"));
        labelColour_6->setEnabled(true);

        gridLayout_2->addWidget(labelColour_6, 8, 2, 1, 1);

        ageLineEdit = new QLineEdit(gridLayoutWidget);
        ageLineEdit->setObjectName(QStringLiteral("ageLineEdit"));
        ageLineEdit->setEnabled(true);

        gridLayout_2->addWidget(ageLineEdit, 9, 0, 1, 1);

        sexLabel_2 = new QLabel(gridLayoutWidget);
        sexLabel_2->setObjectName(QStringLiteral("sexLabel_2"));
        sexLabel_2->setEnabled(true);

        gridLayout_2->addWidget(sexLabel_2, 6, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(12);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        obedienceSlider = new QSlider(gridLayoutWidget);
        obedienceSlider->setObjectName(QStringLiteral("obedienceSlider"));
        obedienceSlider->setMaximum(10);
        obedienceSlider->setPageStep(2);
        obedienceSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_14->addWidget(obedienceSlider);

        obedienceLineEdit = new QLineEdit(gridLayoutWidget);
        obedienceLineEdit->setObjectName(QStringLiteral("obedienceLineEdit"));
        obedienceLineEdit->setEnabled(false);
        obedienceLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(obedienceLineEdit);

        horizontalLayout_14->setStretch(0, 10);
        horizontalLayout_14->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout_14, 5, 1, 1, 1);

        aggressionLabel_3 = new QLabel(gridLayoutWidget);
        aggressionLabel_3->setObjectName(QStringLiteral("aggressionLabel_3"));
        aggressionLabel_3->setEnabled(true);

        gridLayout_2->addWidget(aggressionLabel_3, 0, 1, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(12);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        loudnessSlider = new QSlider(gridLayoutWidget);
        loudnessSlider->setObjectName(QStringLiteral("loudnessSlider"));
        loudnessSlider->setMaximum(10);
        loudnessSlider->setPageStep(2);
        loudnessSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_13->addWidget(loudnessSlider);

        loudnessLineEdit = new QLineEdit(gridLayoutWidget);
        loudnessLineEdit->setObjectName(QStringLiteral("loudnessLineEdit"));
        loudnessLineEdit->setEnabled(false);
        loudnessLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(loudnessLineEdit);

        horizontalLayout_13->setStretch(0, 10);
        horizontalLayout_13->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout_13, 11, 1, 1, 1);

        costPerYearLineEdit = new QLineEdit(gridLayoutWidget);
        costPerYearLineEdit->setObjectName(QStringLiteral("costPerYearLineEdit"));
        costPerYearLineEdit->setEnabled(true);

        gridLayout_2->addWidget(costPerYearLineEdit, 7, 2, 1, 1);

        sexLabel_4 = new QLabel(gridLayoutWidget);
        sexLabel_4->setObjectName(QStringLiteral("sexLabel_4"));
        sexLabel_4->setEnabled(true);

        gridLayout_2->addWidget(sexLabel_4, 6, 2, 1, 1);

        nameLineEdit = new QLineEdit(gridLayoutWidget);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setEnabled(true);

        gridLayout_2->addWidget(nameLineEdit, 1, 0, 1, 1);

        aggressionLabel_4 = new QLabel(gridLayoutWidget);
        aggressionLabel_4->setObjectName(QStringLiteral("aggressionLabel_4"));
        aggressionLabel_4->setEnabled(true);

        gridLayout_2->addWidget(aggressionLabel_4, 8, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(12);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        attachmentSlider = new QSlider(gridLayoutWidget);
        attachmentSlider->setObjectName(QStringLiteral("attachmentSlider"));
        attachmentSlider->setMaximum(10);
        attachmentSlider->setPageStep(2);
        attachmentSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(attachmentSlider);

        attachmentLineEdit = new QLineEdit(gridLayoutWidget);
        attachmentLineEdit->setObjectName(QStringLiteral("attachmentLineEdit"));
        attachmentLineEdit->setEnabled(false);
        attachmentLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(attachmentLineEdit);

        horizontalLayout_7->setStretch(0, 10);
        horizontalLayout_7->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout_7, 3, 1, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(12);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        intelligenceSlider = new QSlider(gridLayoutWidget);
        intelligenceSlider->setObjectName(QStringLiteral("intelligenceSlider"));
        intelligenceSlider->setMaximum(10);
        intelligenceSlider->setPageStep(2);
        intelligenceSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_17->addWidget(intelligenceSlider);

        intelligenceLineEdit = new QLineEdit(gridLayoutWidget);
        intelligenceLineEdit->setObjectName(QStringLiteral("intelligenceLineEdit"));
        intelligenceLineEdit->setEnabled(false);
        intelligenceLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_17->addWidget(intelligenceLineEdit);

        horizontalLayout_17->setStretch(0, 10);
        horizontalLayout_17->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout_17, 13, 1, 1, 1);

        ageLabel_5 = new QLabel(gridLayoutWidget);
        ageLabel_5->setObjectName(QStringLiteral("ageLabel_5"));
        ageLabel_5->setEnabled(true);

        gridLayout_2->addWidget(ageLabel_5, 8, 0, 1, 1);

        sexComboBox = new QComboBox(gridLayoutWidget);
        sexComboBox->setObjectName(QStringLiteral("sexComboBox"));
        sexComboBox->setEnabled(true);

        gridLayout_2->addWidget(sexComboBox, 7, 0, 1, 1);

        breedComboBox = new QComboBox(gridLayoutWidget);
        breedComboBox->setObjectName(QStringLiteral("breedComboBox"));
        breedComboBox->setEnabled(true);

        gridLayout_2->addWidget(breedComboBox, 5, 0, 1, 1);

        ageLabel_4 = new QLabel(gridLayoutWidget);
        ageLabel_4->setObjectName(QStringLiteral("ageLabel_4"));
        ageLabel_4->setEnabled(true);

        gridLayout_2->addWidget(ageLabel_4, 12, 1, 1, 1);

        ageLabel_8 = new QLabel(gridLayoutWidget);
        ageLabel_8->setObjectName(QStringLiteral("ageLabel_8"));
        ageLabel_8->setEnabled(true);

        gridLayout_2->addWidget(ageLabel_8, 14, 1, 1, 1);

        ageLabel_7 = new QLabel(gridLayoutWidget);
        ageLabel_7->setObjectName(QStringLiteral("ageLabel_7"));
        ageLabel_7->setEnabled(true);

        gridLayout_2->addWidget(ageLabel_7, 0, 2, 1, 1);

        typeComboBox = new QComboBox(gridLayoutWidget);
        typeComboBox->setObjectName(QStringLiteral("typeComboBox"));
        typeComboBox->setEnabled(true);

        gridLayout_2->addWidget(typeComboBox, 3, 0, 1, 1);

        labelBreed_4 = new QLabel(gridLayoutWidget);
        labelBreed_4->setObjectName(QStringLiteral("labelBreed_4"));
        labelBreed_4->setEnabled(true);

        gridLayout_2->addWidget(labelBreed_4, 4, 0, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(12);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        aggressionSlider = new QSlider(gridLayoutWidget);
        aggressionSlider->setObjectName(QStringLiteral("aggressionSlider"));
        aggressionSlider->setMaximum(10);
        aggressionSlider->setPageStep(2);
        aggressionSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_16->addWidget(aggressionSlider);

        aggressionLineEdit = new QLineEdit(gridLayoutWidget);
        aggressionLineEdit->setObjectName(QStringLiteral("aggressionLineEdit"));
        aggressionLineEdit->setEnabled(false);
        aggressionLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(aggressionLineEdit);

        horizontalLayout_16->setStretch(0, 10);
        horizontalLayout_16->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout_16, 1, 1, 1, 1);

        attachmentLabel_4 = new QLabel(gridLayoutWidget);
        attachmentLabel_4->setObjectName(QStringLiteral("attachmentLabel_4"));
        attachmentLabel_4->setEnabled(true);

        gridLayout_2->addWidget(attachmentLabel_4, 10, 1, 1, 1);

        labelBreed_5 = new QLabel(gridLayoutWidget);
        labelBreed_5->setObjectName(QStringLiteral("labelBreed_5"));
        labelBreed_5->setEnabled(true);

        gridLayout_2->addWidget(labelBreed_5, 4, 1, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(12);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        childrenComfortSlider = new QSlider(gridLayoutWidget);
        childrenComfortSlider->setObjectName(QStringLiteral("childrenComfortSlider"));
        childrenComfortSlider->setMaximum(10);
        childrenComfortSlider->setPageStep(2);
        childrenComfortSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_15->addWidget(childrenComfortSlider);

        childrenComfortLineEdit = new QLineEdit(gridLayoutWidget);
        childrenComfortLineEdit->setObjectName(QStringLiteral("childrenComfortLineEdit"));
        childrenComfortLineEdit->setEnabled(false);
        childrenComfortLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(childrenComfortLineEdit);

        horizontalLayout_15->setStretch(0, 10);
        horizontalLayout_15->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout_15, 9, 1, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        isHypoallergenicRadioButtonYES = new QRadioButton(gridLayoutWidget);
        buttonGroup = new QButtonGroup(EditAnimal);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(isHypoallergenicRadioButtonYES);
        isHypoallergenicRadioButtonYES->setObjectName(QStringLiteral("isHypoallergenicRadioButtonYES"));

        horizontalLayout_19->addWidget(isHypoallergenicRadioButtonYES);

        isHypoallergenicRadioButtonNO = new QRadioButton(gridLayoutWidget);
        buttonGroup->addButton(isHypoallergenicRadioButtonNO);
        isHypoallergenicRadioButtonNO->setObjectName(QStringLiteral("isHypoallergenicRadioButtonNO"));

        horizontalLayout_19->addWidget(isHypoallergenicRadioButtonNO);


        gridLayout_2->addLayout(horizontalLayout_19, 11, 2, 1, 1);

        energyComboBox = new QComboBox(gridLayoutWidget);
        energyComboBox->setObjectName(QStringLiteral("energyComboBox"));
        energyComboBox->setEnabled(true);

        gridLayout_2->addWidget(energyComboBox, 3, 2, 1, 1);

        labelBreed_6 = new QLabel(gridLayoutWidget);
        labelBreed_6->setObjectName(QStringLiteral("labelBreed_6"));
        labelBreed_6->setEnabled(true);

        gridLayout_2->addWidget(labelBreed_6, 4, 2, 1, 1);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(12);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        playfulnessSlider = new QSlider(gridLayoutWidget);
        playfulnessSlider->setObjectName(QStringLiteral("playfulnessSlider"));
        playfulnessSlider->setMaximum(10);
        playfulnessSlider->setPageStep(2);
        playfulnessSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_21->addWidget(playfulnessSlider);

        playfulnessLineEdit = new QLineEdit(gridLayoutWidget);
        playfulnessLineEdit->setObjectName(QStringLiteral("playfulnessLineEdit"));
        playfulnessLineEdit->setEnabled(false);
        playfulnessLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_21->addWidget(playfulnessLineEdit);

        horizontalLayout_21->setStretch(0, 10);
        horizontalLayout_21->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout_21, 15, 1, 1, 1);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(12);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        loyaltySlider = new QSlider(gridLayoutWidget);
        loyaltySlider->setObjectName(QStringLiteral("loyaltySlider"));
        loyaltySlider->setMaximum(10);
        loyaltySlider->setPageStep(2);
        loyaltySlider->setOrientation(Qt::Horizontal);

        horizontalLayout_22->addWidget(loyaltySlider);

        loyaltyLineEdit = new QLineEdit(gridLayoutWidget);
        loyaltyLineEdit->setObjectName(QStringLiteral("loyaltyLineEdit"));
        loyaltyLineEdit->setEnabled(false);
        loyaltyLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_22->addWidget(loyaltyLineEdit);

        horizontalLayout_22->setStretch(0, 10);
        horizontalLayout_22->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout_22, 1, 2, 1, 1);

        sizeComboBox = new QComboBox(gridLayoutWidget);
        sizeComboBox->setObjectName(QStringLiteral("sizeComboBox"));
        sizeComboBox->setEnabled(true);

        gridLayout_2->addWidget(sizeComboBox, 15, 0, 1, 1);

        sizeLabel_3 = new QLabel(gridLayoutWidget);
        sizeLabel_3->setObjectName(QStringLiteral("sizeLabel_3"));
        sizeLabel_3->setEnabled(true);

        gridLayout_2->addWidget(sizeLabel_3, 14, 0, 1, 1);

        colourComboBox = new QComboBox(gridLayoutWidget);
        colourComboBox->setObjectName(QStringLiteral("colourComboBox"));
        colourComboBox->setEnabled(true);

        gridLayout_2->addWidget(colourComboBox, 13, 0, 1, 1);

        labelColour_4 = new QLabel(gridLayoutWidget);
        labelColour_4->setObjectName(QStringLiteral("labelColour_4"));
        labelColour_4->setEnabled(true);

        gridLayout_2->addWidget(labelColour_4, 12, 0, 1, 1);

        ageLabel_9 = new QLabel(gridLayoutWidget);
        ageLabel_9->setObjectName(QStringLiteral("ageLabel_9"));
        ageLabel_9->setEnabled(true);

        gridLayout_2->addWidget(ageLabel_9, 10, 0, 1, 1);

        lifeExpLineEdit = new QLineEdit(gridLayoutWidget);
        lifeExpLineEdit->setObjectName(QStringLiteral("lifeExpLineEdit"));
        lifeExpLineEdit->setEnabled(true);

        gridLayout_2->addWidget(lifeExpLineEdit, 11, 0, 1, 1);

        buttonBox = new QDialogButtonBox(EditAnimal);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setEnabled(true);
        buttonBox->setGeometry(QRect(410, 530, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        titleLabel = new QLabel(EditAnimal);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(40, 10, 669, 59));
        QFont font;
        font.setPointSize(24);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignCenter);
        QWidget::setTabOrder(nameLineEdit, aggressionSlider);
        QWidget::setTabOrder(aggressionSlider, aggressionLineEdit);
        QWidget::setTabOrder(aggressionLineEdit, loyaltySlider);
        QWidget::setTabOrder(loyaltySlider, loyaltyLineEdit);
        QWidget::setTabOrder(loyaltyLineEdit, typeComboBox);
        QWidget::setTabOrder(typeComboBox, attachmentSlider);
        QWidget::setTabOrder(attachmentSlider, attachmentLineEdit);
        QWidget::setTabOrder(attachmentLineEdit, energyComboBox);
        QWidget::setTabOrder(energyComboBox, breedComboBox);
        QWidget::setTabOrder(breedComboBox, obedienceSlider);
        QWidget::setTabOrder(obedienceSlider, obedienceLineEdit);
        QWidget::setTabOrder(obedienceLineEdit, costLineEdit);
        QWidget::setTabOrder(costLineEdit, sexComboBox);
        QWidget::setTabOrder(sexComboBox, cleanlinessSlider);
        QWidget::setTabOrder(cleanlinessSlider, cleanlinessLineEdit);
        QWidget::setTabOrder(cleanlinessLineEdit, costPerYearLineEdit);
        QWidget::setTabOrder(costPerYearLineEdit, ageLineEdit);
        QWidget::setTabOrder(ageLineEdit, childrenComfortSlider);
        QWidget::setTabOrder(childrenComfortSlider, childrenComfortLineEdit);
        QWidget::setTabOrder(childrenComfortLineEdit, isCrateTrainedRadioButtonYES);
        QWidget::setTabOrder(isCrateTrainedRadioButtonYES, isCrateTrainedRadioButtonNO);
        QWidget::setTabOrder(isCrateTrainedRadioButtonNO, lifeExpLineEdit);
        QWidget::setTabOrder(lifeExpLineEdit, loudnessSlider);
        QWidget::setTabOrder(loudnessSlider, loudnessLineEdit);
        QWidget::setTabOrder(loudnessLineEdit, isHypoallergenicRadioButtonYES);
        QWidget::setTabOrder(isHypoallergenicRadioButtonYES, isHypoallergenicRadioButtonNO);
        QWidget::setTabOrder(isHypoallergenicRadioButtonNO, colourComboBox);
        QWidget::setTabOrder(colourComboBox, intelligenceSlider);
        QWidget::setTabOrder(intelligenceSlider, intelligenceLineEdit);
        QWidget::setTabOrder(intelligenceLineEdit, isNeuteredRadioButtonYES);
        QWidget::setTabOrder(isNeuteredRadioButtonYES, isNeuteredRadioButtonNO);
        QWidget::setTabOrder(isNeuteredRadioButtonNO, sizeComboBox);
        QWidget::setTabOrder(sizeComboBox, playfulnessSlider);
        QWidget::setTabOrder(playfulnessSlider, playfulnessLineEdit);

        retranslateUi(EditAnimal);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditAnimal, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditAnimal, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditAnimal);
    } // setupUi

    void retranslateUi(QDialog *EditAnimal)
    {
        EditAnimal->setWindowTitle(QApplication::translate("EditAnimal", "Dialog", Q_NULLPTR));
        isNeuteredRadioButtonYES->setText(QApplication::translate("EditAnimal", "Yes", Q_NULLPTR));
        isNeuteredRadioButtonNO->setText(QApplication::translate("EditAnimal", "No", Q_NULLPTR));
        energyLabel_2->setText(QApplication::translate("EditAnimal", "Energy Level", Q_NULLPTR));
        sizeLabel_4->setText(QApplication::translate("EditAnimal", "Neutered/Spayed", Q_NULLPTR));
        ageLabel_6->setText(QApplication::translate("EditAnimal", "Crate Trained", Q_NULLPTR));
        typeLabel_2->setText(QApplication::translate("EditAnimal", "Type", Q_NULLPTR));
        labelColour_5->setText(QApplication::translate("EditAnimal", "Cleanliness Level (Out of 10)", Q_NULLPTR));
        isCrateTrainedRadioButtonYES->setText(QApplication::translate("EditAnimal", "Yes", Q_NULLPTR));
        isCrateTrainedRadioButtonNO->setText(QApplication::translate("EditAnimal", "No", Q_NULLPTR));
        attachmentLabel_3->setText(QApplication::translate("EditAnimal", "Attachment Level (Out of 10)", Q_NULLPTR));
        nameLabel_2->setText(QApplication::translate("EditAnimal", "Name", Q_NULLPTR));
        labelColour_6->setText(QApplication::translate("EditAnimal", "Hypoallergenic", Q_NULLPTR));
        sexLabel_2->setText(QApplication::translate("EditAnimal", "Sex", Q_NULLPTR));
        aggressionLabel_3->setText(QApplication::translate("EditAnimal", "Aggression Level (Out of 10)", Q_NULLPTR));
        sexLabel_4->setText(QApplication::translate("EditAnimal", "Cost per Year (in dollars)", Q_NULLPTR));
        aggressionLabel_4->setText(QApplication::translate("EditAnimal", "Comfort with Children (Out of 10)", Q_NULLPTR));
        ageLabel_5->setText(QApplication::translate("EditAnimal", "Age", Q_NULLPTR));
        sexComboBox->clear();
        sexComboBox->insertItems(0, QStringList()
         << QApplication::translate("EditAnimal", "Please Select", Q_NULLPTR)
         << QApplication::translate("EditAnimal", "Male", Q_NULLPTR)
         << QApplication::translate("EditAnimal", "Female", Q_NULLPTR)
        );
        breedComboBox->clear();
        breedComboBox->insertItems(0, QStringList()
         << QApplication::translate("EditAnimal", "Please Select a Type", Q_NULLPTR)
        );
        ageLabel_4->setText(QApplication::translate("EditAnimal", "Intelligence Level (Out of 10)", Q_NULLPTR));
        ageLabel_8->setText(QApplication::translate("EditAnimal", "<html><head/><body><p>Playfulness Level (Out of 10)</p></body></html>", Q_NULLPTR));
        ageLabel_7->setText(QApplication::translate("EditAnimal", "<html><head/><body><p>Loyalty Level (Out of 10)</p></body></html>", Q_NULLPTR));
        typeComboBox->clear();
        typeComboBox->insertItems(0, QStringList()
         << QApplication::translate("EditAnimal", "Please Select", Q_NULLPTR)
         << QApplication::translate("EditAnimal", "Cat", Q_NULLPTR)
         << QApplication::translate("EditAnimal", "Dog", Q_NULLPTR)
         << QApplication::translate("EditAnimal", "Bird", Q_NULLPTR)
         << QApplication::translate("EditAnimal", "Hamster", Q_NULLPTR)
         << QApplication::translate("EditAnimal", "Mouse", Q_NULLPTR)
         << QApplication::translate("EditAnimal", "Guinea Pig", Q_NULLPTR)
        );
        labelBreed_4->setText(QApplication::translate("EditAnimal", "Breed", Q_NULLPTR));
        attachmentLabel_4->setText(QApplication::translate("EditAnimal", "Loudness Level (Out of 10)", Q_NULLPTR));
        labelBreed_5->setText(QApplication::translate("EditAnimal", "Obedience Level (Out of 10)", Q_NULLPTR));
        isHypoallergenicRadioButtonYES->setText(QApplication::translate("EditAnimal", "Yes", Q_NULLPTR));
        isHypoallergenicRadioButtonNO->setText(QApplication::translate("EditAnimal", "No", Q_NULLPTR));
        energyComboBox->clear();
        energyComboBox->insertItems(0, QStringList()
         << QApplication::translate("EditAnimal", "Please Select", Q_NULLPTR)
         << QApplication::translate("EditAnimal", "Low", Q_NULLPTR)
         << QApplication::translate("EditAnimal", "Medium", Q_NULLPTR)
         << QApplication::translate("EditAnimal", "High", Q_NULLPTR)
        );
        labelBreed_6->setText(QApplication::translate("EditAnimal", "Flat Cost (in dollars)", Q_NULLPTR));
        sizeComboBox->clear();
        sizeComboBox->insertItems(0, QStringList()
         << QApplication::translate("EditAnimal", "Please Select", Q_NULLPTR)
         << QApplication::translate("EditAnimal", "Small", Q_NULLPTR)
         << QApplication::translate("EditAnimal", "Medium", Q_NULLPTR)
         << QApplication::translate("EditAnimal", "Large", Q_NULLPTR)
        );
        sizeLabel_3->setText(QApplication::translate("EditAnimal", "Size", Q_NULLPTR));
        colourComboBox->clear();
        colourComboBox->insertItems(0, QStringList()
         << QApplication::translate("EditAnimal", "Please Select", Q_NULLPTR)
         << QApplication::translate("EditAnimal", "Black", Q_NULLPTR)
         << QApplication::translate("EditAnimal", "White", Q_NULLPTR)
         << QApplication::translate("EditAnimal", "Brown", Q_NULLPTR)
         << QApplication::translate("EditAnimal", "Grey", Q_NULLPTR)
        );
        labelColour_4->setText(QApplication::translate("EditAnimal", "Colour", Q_NULLPTR));
        ageLabel_9->setText(QApplication::translate("EditAnimal", "Life Expectancy (Years Remaining)", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("EditAnimal", "No Animals are Currently Available", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditAnimal: public Ui_EditAnimal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITANIMAL_H
