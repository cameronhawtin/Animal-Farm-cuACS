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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddAnimal
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *labelColour_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *isCrateTrainedRadioButtonYES;
    QRadioButton *isCrateTrainedRadioButtonNO;
    QLineEdit *costPerYearLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *isHypoallergenicRadioButtonYES;
    QRadioButton *isHypoallergenicRadioButtonNO;
    QLabel *playLabel;
    QLabel *aggressionLabel;
    QHBoxLayout *horizontalLayout_11;
    QSlider *cleanlinessSlider;
    QLineEdit *cleanlinessLineEdit;
    QLabel *typeLabel;
    QHBoxLayout *horizontalLayout_4;
    QSlider *attachmentSlider;
    QLineEdit *attachmentLineEdit;
    QLabel *attachmentLabel;
    QLineEdit *nameLineEdit;
    QLabel *aggressionLabel_2;
    QLabel *nameLabel;
    QHBoxLayout *horizontalLayout_9;
    QSlider *loudnessSlider;
    QLineEdit *loudnessLineEdit;
    QComboBox *typeComboBox;
    QLabel *labelBreed;
    QLabel *labelColour_3;
    QHBoxLayout *horizontalLayout_6;
    QSlider *obedienceSlider;
    QLineEdit *obedienceLineEdit;
    QHBoxLayout *horizontalLayout_8;
    QSlider *childrenComfortSlider;
    QLineEdit *childrenComfortLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QSlider *aggressionSlider;
    QLineEdit *aggressionLineEdit;
    QLabel *attachmentLabel_2;
    QLabel *labelBreed_2;
    QComboBox *breedComboBox;
    QLabel *ageLabel_3;
    QHBoxLayout *horizontalLayout_10;
    QSlider *intelligenceSlider;
    QLineEdit *intelligenceLineEdit;
    QLabel *ageLabel;
    QLineEdit *ageLineEdit;
    QLabel *sexLabel;
    QComboBox *sexComboBox;
    QLabel *ageLabel_2;
    QLabel *sexLabel_3;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *isNeuteredRadioButtonYES;
    QRadioButton *isNeuteredRadioButtonNO;
    QLabel *sizeLabel_2;
    QComboBox *energyComboBox;
    QLineEdit *costLineEdit;
    QLabel *labelBreed_3;
    QLabel *energyLabel;
    QHBoxLayout *horizontalLayout_12;
    QSlider *playfulnessSlider;
    QLineEdit *playfulnessLineEdit;
    QComboBox *sizeComboBox;
    QLabel *sizeLabel;
    QComboBox *colourComboBox;
    QLabel *labelColour;
    QLabel *lifeExpectancyLabel;
    QLineEdit *lifeExpectancyLineEdit;
    QLabel *loyaltyLabel;
    QHBoxLayout *horizontalLayout_7;
    QSlider *loyaltySlider;
    QLineEdit *loyaltyLineEdit;
    QButtonGroup *buttonGroup_2;
    QButtonGroup *buttonGroup_3;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *AddAnimal)
    {
        if (AddAnimal->objectName().isEmpty())
            AddAnimal->setObjectName(QStringLiteral("AddAnimal"));
        AddAnimal->resize(752, 558);
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
        QBrush brush3(QColor(238, 238, 238, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        QBrush brush4(QColor(190, 190, 190, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        QBrush brush5(QColor(145, 141, 126, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush5);
        AddAnimal->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Egyptienne F"));
        AddAnimal->setFont(font);
        buttonBox = new QDialogButtonBox(AddAnimal);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setEnabled(true);
        buttonBox->setGeometry(QRect(400, 500, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        gridLayoutWidget = new QWidget(AddAnimal);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 728, 481));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelColour_2 = new QLabel(gridLayoutWidget);
        labelColour_2->setObjectName(QStringLiteral("labelColour_2"));
        labelColour_2->setEnabled(true);

        gridLayout->addWidget(labelColour_2, 8, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        isCrateTrainedRadioButtonYES = new QRadioButton(gridLayoutWidget);
        buttonGroup = new QButtonGroup(AddAnimal);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(isCrateTrainedRadioButtonYES);
        isCrateTrainedRadioButtonYES->setObjectName(QStringLiteral("isCrateTrainedRadioButtonYES"));

        horizontalLayout->addWidget(isCrateTrainedRadioButtonYES);

        isCrateTrainedRadioButtonNO = new QRadioButton(gridLayoutWidget);
        buttonGroup->addButton(isCrateTrainedRadioButtonNO);
        isCrateTrainedRadioButtonNO->setObjectName(QStringLiteral("isCrateTrainedRadioButtonNO"));

        horizontalLayout->addWidget(isCrateTrainedRadioButtonNO);


        gridLayout->addLayout(horizontalLayout, 9, 2, 1, 1);

        costPerYearLineEdit = new QLineEdit(gridLayoutWidget);
        costPerYearLineEdit->setObjectName(QStringLiteral("costPerYearLineEdit"));
        costPerYearLineEdit->setEnabled(true);

        gridLayout->addWidget(costPerYearLineEdit, 7, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        isHypoallergenicRadioButtonYES = new QRadioButton(gridLayoutWidget);
        buttonGroup_2 = new QButtonGroup(AddAnimal);
        buttonGroup_2->setObjectName(QStringLiteral("buttonGroup_2"));
        buttonGroup_2->addButton(isHypoallergenicRadioButtonYES);
        isHypoallergenicRadioButtonYES->setObjectName(QStringLiteral("isHypoallergenicRadioButtonYES"));

        horizontalLayout_2->addWidget(isHypoallergenicRadioButtonYES);

        isHypoallergenicRadioButtonNO = new QRadioButton(gridLayoutWidget);
        buttonGroup_2->addButton(isHypoallergenicRadioButtonNO);
        isHypoallergenicRadioButtonNO->setObjectName(QStringLiteral("isHypoallergenicRadioButtonNO"));

        horizontalLayout_2->addWidget(isHypoallergenicRadioButtonNO);


        gridLayout->addLayout(horizontalLayout_2, 11, 2, 1, 1);

        playLabel = new QLabel(gridLayoutWidget);
        playLabel->setObjectName(QStringLiteral("playLabel"));
        playLabel->setEnabled(true);

        gridLayout->addWidget(playLabel, 14, 1, 1, 1);

        aggressionLabel = new QLabel(gridLayoutWidget);
        aggressionLabel->setObjectName(QStringLiteral("aggressionLabel"));
        aggressionLabel->setEnabled(true);

        gridLayout->addWidget(aggressionLabel, 0, 1, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(12);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        cleanlinessSlider = new QSlider(gridLayoutWidget);
        cleanlinessSlider->setObjectName(QStringLiteral("cleanlinessSlider"));
        cleanlinessSlider->setMaximum(10);
        cleanlinessSlider->setPageStep(2);
        cleanlinessSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(cleanlinessSlider);

        cleanlinessLineEdit = new QLineEdit(gridLayoutWidget);
        cleanlinessLineEdit->setObjectName(QStringLiteral("cleanlinessLineEdit"));
        cleanlinessLineEdit->setEnabled(false);
        cleanlinessLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(cleanlinessLineEdit);

        horizontalLayout_11->setStretch(0, 10);
        horizontalLayout_11->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_11, 7, 1, 1, 1);

        typeLabel = new QLabel(gridLayoutWidget);
        typeLabel->setObjectName(QStringLiteral("typeLabel"));
        typeLabel->setEnabled(true);

        gridLayout->addWidget(typeLabel, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(12);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        attachmentSlider = new QSlider(gridLayoutWidget);
        attachmentSlider->setObjectName(QStringLiteral("attachmentSlider"));
        attachmentSlider->setMaximum(10);
        attachmentSlider->setPageStep(2);
        attachmentSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(attachmentSlider);

        attachmentLineEdit = new QLineEdit(gridLayoutWidget);
        attachmentLineEdit->setObjectName(QStringLiteral("attachmentLineEdit"));
        attachmentLineEdit->setEnabled(false);
        attachmentLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(attachmentLineEdit);

        horizontalLayout_4->setStretch(0, 10);
        horizontalLayout_4->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_4, 3, 1, 1, 1);

        attachmentLabel = new QLabel(gridLayoutWidget);
        attachmentLabel->setObjectName(QStringLiteral("attachmentLabel"));
        attachmentLabel->setEnabled(true);

        gridLayout->addWidget(attachmentLabel, 2, 1, 1, 1);

        nameLineEdit = new QLineEdit(gridLayoutWidget);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setEnabled(true);

        gridLayout->addWidget(nameLineEdit, 1, 0, 1, 1);

        aggressionLabel_2 = new QLabel(gridLayoutWidget);
        aggressionLabel_2->setObjectName(QStringLiteral("aggressionLabel_2"));
        aggressionLabel_2->setEnabled(true);

        gridLayout->addWidget(aggressionLabel_2, 8, 1, 1, 1);

        nameLabel = new QLabel(gridLayoutWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setEnabled(true);

        gridLayout->addWidget(nameLabel, 0, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(12);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        loudnessSlider = new QSlider(gridLayoutWidget);
        loudnessSlider->setObjectName(QStringLiteral("loudnessSlider"));
        loudnessSlider->setMaximum(10);
        loudnessSlider->setPageStep(2);
        loudnessSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(loudnessSlider);

        loudnessLineEdit = new QLineEdit(gridLayoutWidget);
        loudnessLineEdit->setObjectName(QStringLiteral("loudnessLineEdit"));
        loudnessLineEdit->setEnabled(false);
        loudnessLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(loudnessLineEdit);

        horizontalLayout_9->setStretch(0, 10);
        horizontalLayout_9->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_9, 11, 1, 1, 1);

        typeComboBox = new QComboBox(gridLayoutWidget);
        typeComboBox->setObjectName(QStringLiteral("typeComboBox"));
        typeComboBox->setEnabled(true);

        gridLayout->addWidget(typeComboBox, 3, 0, 1, 1);

        labelBreed = new QLabel(gridLayoutWidget);
        labelBreed->setObjectName(QStringLiteral("labelBreed"));
        labelBreed->setEnabled(true);

        gridLayout->addWidget(labelBreed, 4, 0, 1, 1);

        labelColour_3 = new QLabel(gridLayoutWidget);
        labelColour_3->setObjectName(QStringLiteral("labelColour_3"));
        labelColour_3->setEnabled(true);

        gridLayout->addWidget(labelColour_3, 6, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(12);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        obedienceSlider = new QSlider(gridLayoutWidget);
        obedienceSlider->setObjectName(QStringLiteral("obedienceSlider"));
        obedienceSlider->setMaximum(10);
        obedienceSlider->setPageStep(2);
        obedienceSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(obedienceSlider);

        obedienceLineEdit = new QLineEdit(gridLayoutWidget);
        obedienceLineEdit->setObjectName(QStringLiteral("obedienceLineEdit"));
        obedienceLineEdit->setEnabled(false);
        obedienceLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(obedienceLineEdit);

        horizontalLayout_6->setStretch(0, 10);
        horizontalLayout_6->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_6, 5, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(12);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        childrenComfortSlider = new QSlider(gridLayoutWidget);
        childrenComfortSlider->setObjectName(QStringLiteral("childrenComfortSlider"));
        childrenComfortSlider->setMaximum(10);
        childrenComfortSlider->setPageStep(2);
        childrenComfortSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(childrenComfortSlider);

        childrenComfortLineEdit = new QLineEdit(gridLayoutWidget);
        childrenComfortLineEdit->setObjectName(QStringLiteral("childrenComfortLineEdit"));
        childrenComfortLineEdit->setEnabled(false);
        childrenComfortLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(childrenComfortLineEdit);

        horizontalLayout_8->setStretch(0, 10);
        horizontalLayout_8->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_8, 9, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(12);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        aggressionSlider = new QSlider(gridLayoutWidget);
        aggressionSlider->setObjectName(QStringLiteral("aggressionSlider"));
        aggressionSlider->setMaximum(10);
        aggressionSlider->setPageStep(2);
        aggressionSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(aggressionSlider);

        aggressionLineEdit = new QLineEdit(gridLayoutWidget);
        aggressionLineEdit->setObjectName(QStringLiteral("aggressionLineEdit"));
        aggressionLineEdit->setEnabled(false);
        aggressionLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(aggressionLineEdit);

        horizontalLayout_5->setStretch(0, 10);
        horizontalLayout_5->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_5, 1, 1, 1, 1);

        attachmentLabel_2 = new QLabel(gridLayoutWidget);
        attachmentLabel_2->setObjectName(QStringLiteral("attachmentLabel_2"));
        attachmentLabel_2->setEnabled(true);

        gridLayout->addWidget(attachmentLabel_2, 10, 1, 1, 1);

        labelBreed_2 = new QLabel(gridLayoutWidget);
        labelBreed_2->setObjectName(QStringLiteral("labelBreed_2"));
        labelBreed_2->setEnabled(true);

        gridLayout->addWidget(labelBreed_2, 4, 1, 1, 1);

        breedComboBox = new QComboBox(gridLayoutWidget);
        breedComboBox->setObjectName(QStringLiteral("breedComboBox"));
        breedComboBox->setEnabled(true);

        gridLayout->addWidget(breedComboBox, 5, 0, 1, 1);

        ageLabel_3 = new QLabel(gridLayoutWidget);
        ageLabel_3->setObjectName(QStringLiteral("ageLabel_3"));
        ageLabel_3->setEnabled(true);

        gridLayout->addWidget(ageLabel_3, 12, 1, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(12);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        intelligenceSlider = new QSlider(gridLayoutWidget);
        intelligenceSlider->setObjectName(QStringLiteral("intelligenceSlider"));
        intelligenceSlider->setMaximum(10);
        intelligenceSlider->setPageStep(2);
        intelligenceSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(intelligenceSlider);

        intelligenceLineEdit = new QLineEdit(gridLayoutWidget);
        intelligenceLineEdit->setObjectName(QStringLiteral("intelligenceLineEdit"));
        intelligenceLineEdit->setEnabled(false);
        intelligenceLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(intelligenceLineEdit);

        horizontalLayout_10->setStretch(0, 10);
        horizontalLayout_10->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_10, 13, 1, 1, 1);

        ageLabel = new QLabel(gridLayoutWidget);
        ageLabel->setObjectName(QStringLiteral("ageLabel"));
        ageLabel->setEnabled(true);

        gridLayout->addWidget(ageLabel, 8, 0, 1, 1);

        ageLineEdit = new QLineEdit(gridLayoutWidget);
        ageLineEdit->setObjectName(QStringLiteral("ageLineEdit"));
        ageLineEdit->setEnabled(true);

        gridLayout->addWidget(ageLineEdit, 9, 0, 1, 1);

        sexLabel = new QLabel(gridLayoutWidget);
        sexLabel->setObjectName(QStringLiteral("sexLabel"));
        sexLabel->setEnabled(true);

        gridLayout->addWidget(sexLabel, 6, 0, 1, 1);

        sexComboBox = new QComboBox(gridLayoutWidget);
        sexComboBox->setObjectName(QStringLiteral("sexComboBox"));
        sexComboBox->setEnabled(true);

        gridLayout->addWidget(sexComboBox, 7, 0, 1, 1);

        ageLabel_2 = new QLabel(gridLayoutWidget);
        ageLabel_2->setObjectName(QStringLiteral("ageLabel_2"));
        ageLabel_2->setEnabled(true);

        gridLayout->addWidget(ageLabel_2, 10, 2, 1, 1);

        sexLabel_3 = new QLabel(gridLayoutWidget);
        sexLabel_3->setObjectName(QStringLiteral("sexLabel_3"));
        sexLabel_3->setEnabled(true);

        gridLayout->addWidget(sexLabel_3, 6, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        isNeuteredRadioButtonYES = new QRadioButton(gridLayoutWidget);
        buttonGroup_3 = new QButtonGroup(AddAnimal);
        buttonGroup_3->setObjectName(QStringLiteral("buttonGroup_3"));
        buttonGroup_3->addButton(isNeuteredRadioButtonYES);
        isNeuteredRadioButtonYES->setObjectName(QStringLiteral("isNeuteredRadioButtonYES"));

        horizontalLayout_3->addWidget(isNeuteredRadioButtonYES);

        isNeuteredRadioButtonNO = new QRadioButton(gridLayoutWidget);
        buttonGroup_3->addButton(isNeuteredRadioButtonNO);
        isNeuteredRadioButtonNO->setObjectName(QStringLiteral("isNeuteredRadioButtonNO"));

        horizontalLayout_3->addWidget(isNeuteredRadioButtonNO);


        gridLayout->addLayout(horizontalLayout_3, 13, 2, 1, 1);

        sizeLabel_2 = new QLabel(gridLayoutWidget);
        sizeLabel_2->setObjectName(QStringLiteral("sizeLabel_2"));
        sizeLabel_2->setEnabled(true);

        gridLayout->addWidget(sizeLabel_2, 12, 2, 1, 1);

        energyComboBox = new QComboBox(gridLayoutWidget);
        energyComboBox->setObjectName(QStringLiteral("energyComboBox"));
        energyComboBox->setEnabled(true);

        gridLayout->addWidget(energyComboBox, 3, 2, 1, 1);

        costLineEdit = new QLineEdit(gridLayoutWidget);
        costLineEdit->setObjectName(QStringLiteral("costLineEdit"));
        costLineEdit->setEnabled(true);

        gridLayout->addWidget(costLineEdit, 5, 2, 1, 1);

        labelBreed_3 = new QLabel(gridLayoutWidget);
        labelBreed_3->setObjectName(QStringLiteral("labelBreed_3"));
        labelBreed_3->setEnabled(true);

        gridLayout->addWidget(labelBreed_3, 4, 2, 1, 1);

        energyLabel = new QLabel(gridLayoutWidget);
        energyLabel->setObjectName(QStringLiteral("energyLabel"));
        energyLabel->setEnabled(true);

        gridLayout->addWidget(energyLabel, 2, 2, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(12);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        playfulnessSlider = new QSlider(gridLayoutWidget);
        playfulnessSlider->setObjectName(QStringLiteral("playfulnessSlider"));
        playfulnessSlider->setMaximum(10);
        playfulnessSlider->setPageStep(2);
        playfulnessSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(playfulnessSlider);

        playfulnessLineEdit = new QLineEdit(gridLayoutWidget);
        playfulnessLineEdit->setObjectName(QStringLiteral("playfulnessLineEdit"));
        playfulnessLineEdit->setEnabled(false);
        playfulnessLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(playfulnessLineEdit);

        horizontalLayout_12->setStretch(0, 10);
        horizontalLayout_12->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_12, 15, 1, 1, 1);

        sizeComboBox = new QComboBox(gridLayoutWidget);
        sizeComboBox->setObjectName(QStringLiteral("sizeComboBox"));
        sizeComboBox->setEnabled(true);

        gridLayout->addWidget(sizeComboBox, 15, 0, 1, 1);

        sizeLabel = new QLabel(gridLayoutWidget);
        sizeLabel->setObjectName(QStringLiteral("sizeLabel"));
        sizeLabel->setEnabled(true);

        gridLayout->addWidget(sizeLabel, 14, 0, 1, 1);

        colourComboBox = new QComboBox(gridLayoutWidget);
        colourComboBox->setObjectName(QStringLiteral("colourComboBox"));
        colourComboBox->setEnabled(true);

        gridLayout->addWidget(colourComboBox, 13, 0, 1, 1);

        labelColour = new QLabel(gridLayoutWidget);
        labelColour->setObjectName(QStringLiteral("labelColour"));
        labelColour->setEnabled(true);

        gridLayout->addWidget(labelColour, 12, 0, 1, 1);

        lifeExpectancyLabel = new QLabel(gridLayoutWidget);
        lifeExpectancyLabel->setObjectName(QStringLiteral("lifeExpectancyLabel"));
        lifeExpectancyLabel->setEnabled(true);

        gridLayout->addWidget(lifeExpectancyLabel, 10, 0, 1, 1);

        lifeExpectancyLineEdit = new QLineEdit(gridLayoutWidget);
        lifeExpectancyLineEdit->setObjectName(QStringLiteral("lifeExpectancyLineEdit"));
        lifeExpectancyLineEdit->setEnabled(true);

        gridLayout->addWidget(lifeExpectancyLineEdit, 11, 0, 1, 1);

        loyaltyLabel = new QLabel(gridLayoutWidget);
        loyaltyLabel->setObjectName(QStringLiteral("loyaltyLabel"));
        loyaltyLabel->setEnabled(true);

        gridLayout->addWidget(loyaltyLabel, 0, 2, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(12);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        loyaltySlider = new QSlider(gridLayoutWidget);
        loyaltySlider->setObjectName(QStringLiteral("loyaltySlider"));
        loyaltySlider->setMaximum(10);
        loyaltySlider->setPageStep(2);
        loyaltySlider->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(loyaltySlider);

        loyaltyLineEdit = new QLineEdit(gridLayoutWidget);
        loyaltyLineEdit->setObjectName(QStringLiteral("loyaltyLineEdit"));
        loyaltyLineEdit->setEnabled(false);
        loyaltyLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(loyaltyLineEdit);

        horizontalLayout_7->setStretch(0, 10);
        horizontalLayout_7->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_7, 1, 2, 1, 1);

        QWidget::setTabOrder(nameLineEdit, aggressionSlider);
        QWidget::setTabOrder(aggressionSlider, aggressionLineEdit);
        QWidget::setTabOrder(aggressionLineEdit, typeComboBox);
        QWidget::setTabOrder(typeComboBox, attachmentSlider);
        QWidget::setTabOrder(attachmentSlider, attachmentLineEdit);
        QWidget::setTabOrder(attachmentLineEdit, breedComboBox);
        QWidget::setTabOrder(breedComboBox, obedienceSlider);
        QWidget::setTabOrder(obedienceSlider, obedienceLineEdit);
        QWidget::setTabOrder(obedienceLineEdit, sexComboBox);
        QWidget::setTabOrder(sexComboBox, cleanlinessSlider);
        QWidget::setTabOrder(cleanlinessSlider, cleanlinessLineEdit);
        QWidget::setTabOrder(cleanlinessLineEdit, isCrateTrainedRadioButtonYES);
        QWidget::setTabOrder(isCrateTrainedRadioButtonYES, isCrateTrainedRadioButtonNO);
        QWidget::setTabOrder(isCrateTrainedRadioButtonNO, ageLineEdit);
        QWidget::setTabOrder(ageLineEdit, childrenComfortSlider);
        QWidget::setTabOrder(childrenComfortSlider, childrenComfortLineEdit);
        QWidget::setTabOrder(childrenComfortLineEdit, isHypoallergenicRadioButtonYES);
        QWidget::setTabOrder(isHypoallergenicRadioButtonYES, isHypoallergenicRadioButtonNO);
        QWidget::setTabOrder(isHypoallergenicRadioButtonNO, loudnessSlider);
        QWidget::setTabOrder(loudnessSlider, loudnessLineEdit);
        QWidget::setTabOrder(loudnessLineEdit, isNeuteredRadioButtonYES);
        QWidget::setTabOrder(isNeuteredRadioButtonYES, isNeuteredRadioButtonNO);
        QWidget::setTabOrder(isNeuteredRadioButtonNO, intelligenceSlider);
        QWidget::setTabOrder(intelligenceSlider, intelligenceLineEdit);

        retranslateUi(AddAnimal);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddAnimal, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddAnimal, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddAnimal);
    } // setupUi

    void retranslateUi(QDialog *AddAnimal)
    {
        AddAnimal->setWindowTitle(QApplication::translate("AddAnimal", "Dialog", Q_NULLPTR));
        labelColour_2->setText(QApplication::translate("AddAnimal", "Hypoallergenic", Q_NULLPTR));
        isCrateTrainedRadioButtonYES->setText(QApplication::translate("AddAnimal", "Yes", Q_NULLPTR));
        isCrateTrainedRadioButtonNO->setText(QApplication::translate("AddAnimal", "No", Q_NULLPTR));
        isHypoallergenicRadioButtonYES->setText(QApplication::translate("AddAnimal", "Yes", Q_NULLPTR));
        isHypoallergenicRadioButtonNO->setText(QApplication::translate("AddAnimal", "No", Q_NULLPTR));
        playLabel->setText(QApplication::translate("AddAnimal", "<html><head/><body><p>Playfulness Level (Out of 10)</p></body></html>", Q_NULLPTR));
        aggressionLabel->setText(QApplication::translate("AddAnimal", "Aggression Level (Out of 10)", Q_NULLPTR));
        typeLabel->setText(QApplication::translate("AddAnimal", "Type", Q_NULLPTR));
        attachmentLabel->setText(QApplication::translate("AddAnimal", "Attachment Level (Out of 10)", Q_NULLPTR));
        aggressionLabel_2->setText(QApplication::translate("AddAnimal", "Comfort with Children (Out of 10)", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("AddAnimal", "Name", Q_NULLPTR));
        typeComboBox->clear();
        typeComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddAnimal", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Cat", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Dog", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Bird", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Hamster", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Mouse", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Guinea Pig", Q_NULLPTR)
        );
        labelBreed->setText(QApplication::translate("AddAnimal", "Breed", Q_NULLPTR));
        labelColour_3->setText(QApplication::translate("AddAnimal", "Cleanliness Level (Out of 10)", Q_NULLPTR));
        attachmentLabel_2->setText(QApplication::translate("AddAnimal", "Loudness Level (Out of 10)", Q_NULLPTR));
        labelBreed_2->setText(QApplication::translate("AddAnimal", "Obedience Level (Out of 10)", Q_NULLPTR));
        breedComboBox->clear();
        breedComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddAnimal", "Please Select a Type", Q_NULLPTR)
        );
        ageLabel_3->setText(QApplication::translate("AddAnimal", "Intelligence Level (Out of 10)", Q_NULLPTR));
        ageLabel->setText(QApplication::translate("AddAnimal", "Age (Years)", Q_NULLPTR));
        sexLabel->setText(QApplication::translate("AddAnimal", "Sex", Q_NULLPTR));
        sexComboBox->clear();
        sexComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddAnimal", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Male", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Female", Q_NULLPTR)
        );
        ageLabel_2->setText(QApplication::translate("AddAnimal", "Crate Trained", Q_NULLPTR));
        sexLabel_3->setText(QApplication::translate("AddAnimal", "Cost per Year (in dollars)", Q_NULLPTR));
        isNeuteredRadioButtonYES->setText(QApplication::translate("AddAnimal", "Yes", Q_NULLPTR));
        isNeuteredRadioButtonNO->setText(QApplication::translate("AddAnimal", "No", Q_NULLPTR));
        sizeLabel_2->setText(QApplication::translate("AddAnimal", "Neutered/Spayed", Q_NULLPTR));
        energyComboBox->clear();
        energyComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddAnimal", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Low", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Medium", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "High", Q_NULLPTR)
        );
        labelBreed_3->setText(QApplication::translate("AddAnimal", "Flat Cost (in dollars)", Q_NULLPTR));
        energyLabel->setText(QApplication::translate("AddAnimal", "Energy Level", Q_NULLPTR));
        sizeComboBox->clear();
        sizeComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddAnimal", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Small", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Medium", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Large", Q_NULLPTR)
        );
        sizeLabel->setText(QApplication::translate("AddAnimal", "Size", Q_NULLPTR));
        colourComboBox->clear();
        colourComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddAnimal", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Black", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "White", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Brown", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Grey", Q_NULLPTR)
        );
        labelColour->setText(QApplication::translate("AddAnimal", "Colour", Q_NULLPTR));
        lifeExpectancyLabel->setText(QApplication::translate("AddAnimal", "<html><head/><body><p>Life Expectancy (Years Remaining)</p></body></html>", Q_NULLPTR));
        loyaltyLabel->setText(QApplication::translate("AddAnimal", "<html><head/><body><p>Loyalty Level (Out of 10)</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddAnimal: public Ui_AddAnimal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDANIMAL_H
