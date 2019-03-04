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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
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
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *aggressionLabel;
    QHBoxLayout *horizontalLayout_5;
    QSlider *aggressionSlider;
    QLineEdit *aggressionLineEdit;
    QLabel *attachmentLabel;
    QHBoxLayout *horizontalLayout_4;
    QSlider *attachmentSlider;
    QLineEdit *attachmentLineEdit;
    QLabel *labelBreed_2;
    QHBoxLayout *horizontalLayout_6;
    QSlider *obedienceSlider;
    QLineEdit *obedienceLineEdit;
    QLabel *labelColour_3;
    QHBoxLayout *horizontalLayout_11;
    QSlider *cleanlinessSlider;
    QLineEdit *cleanlinessLineEdit;
    QLabel *aggressionLabel_2;
    QHBoxLayout *horizontalLayout_8;
    QSlider *childrenComfortSlider;
    QLineEdit *childrenComfortLineEdit;
    QLabel *attachmentLabel_2;
    QHBoxLayout *horizontalLayout_9;
    QSlider *loudnessSlider;
    QLineEdit *loudnessLineEdit;
    QLabel *ageLabel_3;
    QHBoxLayout *horizontalLayout_10;
    QSlider *intelligenceSlider;
    QLineEdit *intelligenceLineEdit;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *energyLabel;
    QComboBox *energyComboBox;
    QLabel *labelBreed_3;
    QLineEdit *costLineEdit;
    QLabel *sexLabel_3;
    QLineEdit *costPerYearLineEdit;
    QLabel *labelColour_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *isCrateTrainedRadioButtonYES;
    QRadioButton *isCrateTrainedRadioButtonNO;
    QLabel *ageLabel_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *isHypoallergenicRadioButtonYES;
    QRadioButton *isHypoallergenicRadioButtonNO;
    QLabel *sizeLabel_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *isNeuteredRadioButtonYES;
    QRadioButton *isNeuteredRadioButtonNO;
    QButtonGroup *buttonGroup_3;
    QButtonGroup *buttonGroup_2;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *AddAnimal)
    {
        if (AddAnimal->objectName().isEmpty())
            AddAnimal->setObjectName(QStringLiteral("AddAnimal"));
        AddAnimal->resize(730, 461);
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
        buttonBox->setGeometry(QRect(370, 420, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(AddAnimal);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setEnabled(true);
        layoutWidget->setGeometry(QRect(10, 10, 211, 401));
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

        layoutWidget_2 = new QWidget(AddAnimal);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setEnabled(true);
        layoutWidget_2->setGeometry(QRect(250, 10, 216, 401));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        aggressionLabel = new QLabel(layoutWidget_2);
        aggressionLabel->setObjectName(QStringLiteral("aggressionLabel"));
        aggressionLabel->setEnabled(true);

        verticalLayout_3->addWidget(aggressionLabel);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        aggressionSlider = new QSlider(layoutWidget_2);
        aggressionSlider->setObjectName(QStringLiteral("aggressionSlider"));
        aggressionSlider->setMaximum(10);
        aggressionSlider->setPageStep(2);
        aggressionSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(aggressionSlider);

        aggressionLineEdit = new QLineEdit(layoutWidget_2);
        aggressionLineEdit->setObjectName(QStringLiteral("aggressionLineEdit"));
        aggressionLineEdit->setEnabled(false);
        aggressionLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(aggressionLineEdit);

        horizontalLayout_5->setStretch(0, 10);
        horizontalLayout_5->setStretch(1, 2);

        verticalLayout_3->addLayout(horizontalLayout_5);

        attachmentLabel = new QLabel(layoutWidget_2);
        attachmentLabel->setObjectName(QStringLiteral("attachmentLabel"));
        attachmentLabel->setEnabled(true);

        verticalLayout_3->addWidget(attachmentLabel);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        attachmentSlider = new QSlider(layoutWidget_2);
        attachmentSlider->setObjectName(QStringLiteral("attachmentSlider"));
        attachmentSlider->setMaximum(10);
        attachmentSlider->setPageStep(2);
        attachmentSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(attachmentSlider);

        attachmentLineEdit = new QLineEdit(layoutWidget_2);
        attachmentLineEdit->setObjectName(QStringLiteral("attachmentLineEdit"));
        attachmentLineEdit->setEnabled(false);
        attachmentLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(attachmentLineEdit);

        horizontalLayout_4->setStretch(0, 10);
        horizontalLayout_4->setStretch(1, 2);

        verticalLayout_3->addLayout(horizontalLayout_4);

        labelBreed_2 = new QLabel(layoutWidget_2);
        labelBreed_2->setObjectName(QStringLiteral("labelBreed_2"));
        labelBreed_2->setEnabled(true);

        verticalLayout_3->addWidget(labelBreed_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        obedienceSlider = new QSlider(layoutWidget_2);
        obedienceSlider->setObjectName(QStringLiteral("obedienceSlider"));
        obedienceSlider->setMaximum(10);
        obedienceSlider->setPageStep(2);
        obedienceSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(obedienceSlider);

        obedienceLineEdit = new QLineEdit(layoutWidget_2);
        obedienceLineEdit->setObjectName(QStringLiteral("obedienceLineEdit"));
        obedienceLineEdit->setEnabled(false);
        obedienceLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(obedienceLineEdit);

        horizontalLayout_6->setStretch(0, 10);
        horizontalLayout_6->setStretch(1, 2);

        verticalLayout_3->addLayout(horizontalLayout_6);

        labelColour_3 = new QLabel(layoutWidget_2);
        labelColour_3->setObjectName(QStringLiteral("labelColour_3"));
        labelColour_3->setEnabled(true);

        verticalLayout_3->addWidget(labelColour_3);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        cleanlinessSlider = new QSlider(layoutWidget_2);
        cleanlinessSlider->setObjectName(QStringLiteral("cleanlinessSlider"));
        cleanlinessSlider->setMaximum(10);
        cleanlinessSlider->setPageStep(2);
        cleanlinessSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(cleanlinessSlider);

        cleanlinessLineEdit = new QLineEdit(layoutWidget_2);
        cleanlinessLineEdit->setObjectName(QStringLiteral("cleanlinessLineEdit"));
        cleanlinessLineEdit->setEnabled(false);
        cleanlinessLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(cleanlinessLineEdit);

        horizontalLayout_11->setStretch(0, 10);
        horizontalLayout_11->setStretch(1, 2);

        verticalLayout_3->addLayout(horizontalLayout_11);

        aggressionLabel_2 = new QLabel(layoutWidget_2);
        aggressionLabel_2->setObjectName(QStringLiteral("aggressionLabel_2"));
        aggressionLabel_2->setEnabled(true);

        verticalLayout_3->addWidget(aggressionLabel_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        childrenComfortSlider = new QSlider(layoutWidget_2);
        childrenComfortSlider->setObjectName(QStringLiteral("childrenComfortSlider"));
        childrenComfortSlider->setMaximum(10);
        childrenComfortSlider->setPageStep(2);
        childrenComfortSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(childrenComfortSlider);

        childrenComfortLineEdit = new QLineEdit(layoutWidget_2);
        childrenComfortLineEdit->setObjectName(QStringLiteral("childrenComfortLineEdit"));
        childrenComfortLineEdit->setEnabled(false);
        childrenComfortLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(childrenComfortLineEdit);

        horizontalLayout_8->setStretch(0, 10);
        horizontalLayout_8->setStretch(1, 2);

        verticalLayout_3->addLayout(horizontalLayout_8);

        attachmentLabel_2 = new QLabel(layoutWidget_2);
        attachmentLabel_2->setObjectName(QStringLiteral("attachmentLabel_2"));
        attachmentLabel_2->setEnabled(true);

        verticalLayout_3->addWidget(attachmentLabel_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        loudnessSlider = new QSlider(layoutWidget_2);
        loudnessSlider->setObjectName(QStringLiteral("loudnessSlider"));
        loudnessSlider->setMaximum(10);
        loudnessSlider->setPageStep(2);
        loudnessSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(loudnessSlider);

        loudnessLineEdit = new QLineEdit(layoutWidget_2);
        loudnessLineEdit->setObjectName(QStringLiteral("loudnessLineEdit"));
        loudnessLineEdit->setEnabled(false);
        loudnessLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(loudnessLineEdit);

        horizontalLayout_9->setStretch(0, 10);
        horizontalLayout_9->setStretch(1, 2);

        verticalLayout_3->addLayout(horizontalLayout_9);

        ageLabel_3 = new QLabel(layoutWidget_2);
        ageLabel_3->setObjectName(QStringLiteral("ageLabel_3"));
        ageLabel_3->setEnabled(true);

        verticalLayout_3->addWidget(ageLabel_3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        intelligenceSlider = new QSlider(layoutWidget_2);
        intelligenceSlider->setObjectName(QStringLiteral("intelligenceSlider"));
        intelligenceSlider->setMaximum(10);
        intelligenceSlider->setPageStep(2);
        intelligenceSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(intelligenceSlider);

        intelligenceLineEdit = new QLineEdit(layoutWidget_2);
        intelligenceLineEdit->setObjectName(QStringLiteral("intelligenceLineEdit"));
        intelligenceLineEdit->setEnabled(false);
        intelligenceLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(intelligenceLineEdit);

        horizontalLayout_10->setStretch(0, 10);
        horizontalLayout_10->setStretch(1, 2);

        verticalLayout_3->addLayout(horizontalLayout_10);

        layoutWidget_4 = new QWidget(AddAnimal);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setEnabled(true);
        layoutWidget_4->setGeometry(QRect(490, 10, 220, 401));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        energyLabel = new QLabel(layoutWidget_4);
        energyLabel->setObjectName(QStringLiteral("energyLabel"));
        energyLabel->setEnabled(true);

        verticalLayout_5->addWidget(energyLabel);

        energyComboBox = new QComboBox(layoutWidget_4);
        energyComboBox->setObjectName(QStringLiteral("energyComboBox"));
        energyComboBox->setEnabled(true);

        verticalLayout_5->addWidget(energyComboBox);

        labelBreed_3 = new QLabel(layoutWidget_4);
        labelBreed_3->setObjectName(QStringLiteral("labelBreed_3"));
        labelBreed_3->setEnabled(true);

        verticalLayout_5->addWidget(labelBreed_3);

        costLineEdit = new QLineEdit(layoutWidget_4);
        costLineEdit->setObjectName(QStringLiteral("costLineEdit"));
        costLineEdit->setEnabled(true);

        verticalLayout_5->addWidget(costLineEdit);

        sexLabel_3 = new QLabel(layoutWidget_4);
        sexLabel_3->setObjectName(QStringLiteral("sexLabel_3"));
        sexLabel_3->setEnabled(true);

        verticalLayout_5->addWidget(sexLabel_3);

        costPerYearLineEdit = new QLineEdit(layoutWidget_4);
        costPerYearLineEdit->setObjectName(QStringLiteral("costPerYearLineEdit"));
        costPerYearLineEdit->setEnabled(true);

        verticalLayout_5->addWidget(costPerYearLineEdit);

        labelColour_2 = new QLabel(layoutWidget_4);
        labelColour_2->setObjectName(QStringLiteral("labelColour_2"));
        labelColour_2->setEnabled(true);

        verticalLayout_5->addWidget(labelColour_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        isCrateTrainedRadioButtonYES = new QRadioButton(layoutWidget_4);
        buttonGroup = new QButtonGroup(AddAnimal);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(isCrateTrainedRadioButtonYES);
        isCrateTrainedRadioButtonYES->setObjectName(QStringLiteral("isCrateTrainedRadioButtonYES"));

        horizontalLayout->addWidget(isCrateTrainedRadioButtonYES);

        isCrateTrainedRadioButtonNO = new QRadioButton(layoutWidget_4);
        buttonGroup->addButton(isCrateTrainedRadioButtonNO);
        isCrateTrainedRadioButtonNO->setObjectName(QStringLiteral("isCrateTrainedRadioButtonNO"));

        horizontalLayout->addWidget(isCrateTrainedRadioButtonNO);


        verticalLayout_5->addLayout(horizontalLayout);

        ageLabel_2 = new QLabel(layoutWidget_4);
        ageLabel_2->setObjectName(QStringLiteral("ageLabel_2"));
        ageLabel_2->setEnabled(true);

        verticalLayout_5->addWidget(ageLabel_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        isHypoallergenicRadioButtonYES = new QRadioButton(layoutWidget_4);
        buttonGroup_2 = new QButtonGroup(AddAnimal);
        buttonGroup_2->setObjectName(QStringLiteral("buttonGroup_2"));
        buttonGroup_2->addButton(isHypoallergenicRadioButtonYES);
        isHypoallergenicRadioButtonYES->setObjectName(QStringLiteral("isHypoallergenicRadioButtonYES"));

        horizontalLayout_2->addWidget(isHypoallergenicRadioButtonYES);

        isHypoallergenicRadioButtonNO = new QRadioButton(layoutWidget_4);
        buttonGroup_2->addButton(isHypoallergenicRadioButtonNO);
        isHypoallergenicRadioButtonNO->setObjectName(QStringLiteral("isHypoallergenicRadioButtonNO"));

        horizontalLayout_2->addWidget(isHypoallergenicRadioButtonNO);


        verticalLayout_5->addLayout(horizontalLayout_2);

        sizeLabel_2 = new QLabel(layoutWidget_4);
        sizeLabel_2->setObjectName(QStringLiteral("sizeLabel_2"));
        sizeLabel_2->setEnabled(true);

        verticalLayout_5->addWidget(sizeLabel_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        isNeuteredRadioButtonYES = new QRadioButton(layoutWidget_4);
        buttonGroup_3 = new QButtonGroup(AddAnimal);
        buttonGroup_3->setObjectName(QStringLiteral("buttonGroup_3"));
        buttonGroup_3->addButton(isNeuteredRadioButtonYES);
        isNeuteredRadioButtonYES->setObjectName(QStringLiteral("isNeuteredRadioButtonYES"));

        horizontalLayout_3->addWidget(isNeuteredRadioButtonYES);

        isNeuteredRadioButtonNO = new QRadioButton(layoutWidget_4);
        buttonGroup_3->addButton(isNeuteredRadioButtonNO);
        isNeuteredRadioButtonNO->setObjectName(QStringLiteral("isNeuteredRadioButtonNO"));

        horizontalLayout_3->addWidget(isNeuteredRadioButtonNO);


        verticalLayout_5->addLayout(horizontalLayout_3);


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
        aggressionLabel->setText(QApplication::translate("AddAnimal", "Aggression Level (Out of 10)", Q_NULLPTR));
        attachmentLabel->setText(QApplication::translate("AddAnimal", "Attachment Level (Out of 10)", Q_NULLPTR));
        labelBreed_2->setText(QApplication::translate("AddAnimal", "Obedience Level (Out of 10)", Q_NULLPTR));
        labelColour_3->setText(QApplication::translate("AddAnimal", "Cleanliness Level (Out of 10)", Q_NULLPTR));
        aggressionLabel_2->setText(QApplication::translate("AddAnimal", "Comfort with Children (Out of 10)", Q_NULLPTR));
        attachmentLabel_2->setText(QApplication::translate("AddAnimal", "Loudness Level (Out of 10)", Q_NULLPTR));
        ageLabel_3->setText(QApplication::translate("AddAnimal", "Intelligence Level (Out of 10)", Q_NULLPTR));
        energyLabel->setText(QApplication::translate("AddAnimal", "Energy Level", Q_NULLPTR));
        energyComboBox->clear();
        energyComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddAnimal", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Low", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "Medium", Q_NULLPTR)
         << QApplication::translate("AddAnimal", "High", Q_NULLPTR)
        );
        labelBreed_3->setText(QApplication::translate("AddAnimal", "Flat Cost", Q_NULLPTR));
        sexLabel_3->setText(QApplication::translate("AddAnimal", "Cost per Year", Q_NULLPTR));
        labelColour_2->setText(QApplication::translate("AddAnimal", "Hypoallergenic", Q_NULLPTR));
        isCrateTrainedRadioButtonYES->setText(QApplication::translate("AddAnimal", "Yes", Q_NULLPTR));
        isCrateTrainedRadioButtonNO->setText(QApplication::translate("AddAnimal", "No", Q_NULLPTR));
        ageLabel_2->setText(QApplication::translate("AddAnimal", "Crate Trained", Q_NULLPTR));
        isHypoallergenicRadioButtonYES->setText(QApplication::translate("AddAnimal", "Yes", Q_NULLPTR));
        isHypoallergenicRadioButtonNO->setText(QApplication::translate("AddAnimal", "No", Q_NULLPTR));
        sizeLabel_2->setText(QApplication::translate("AddAnimal", "Neutered/Spayed", Q_NULLPTR));
        isNeuteredRadioButtonYES->setText(QApplication::translate("AddAnimal", "Yes", Q_NULLPTR));
        isNeuteredRadioButtonNO->setText(QApplication::translate("AddAnimal", "No", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddAnimal: public Ui_AddAnimal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDANIMAL_H
