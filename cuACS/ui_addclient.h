/********************************************************************************
** Form generated from reading UI file 'addclient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCLIENT_H
#define UI_ADDCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
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

class Ui_AddClient
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *typePreferenceComboBox;
    QHBoxLayout *horizontalLayout_7;
    QSlider *irritationSlider;
    QLineEdit *irritationLineEdit;
    QLabel *budgetLabel;
    QComboBox *freeTimeComboBox;
    QLabel *irritationLabel;
    QCheckBox *guineapigAllergyCheckBox;
    QLabel *homeTypeLabel;
    QHBoxLayout *horizontalLayout_9;
    QSlider *attachmentSlider;
    QLineEdit *attachmentLineEdit;
    QCheckBox *hamsterAllergyCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *isNeuteredRadioButtonYES;
    QRadioButton *isNeuteredRadioButtonNO;
    QLabel *freeTimeLabel;
    QLabel *travelLabel;
    QLabel *labelPatience;
    QLabel *phoneLabel;
    QLabel *typePreferenceLabel;
    QCheckBox *dogAllergyCheckBox;
    QComboBox *homeTypeComboBox;
    QLabel *requireLabel;
    QLineEdit *emailLineEdit;
    QComboBox *salaryComboBox;
    QLabel *salaryLabel;
    QCheckBox *catAllergyCheckBox;
    QCheckBox *mouseAllergyCheckBox;
    QLabel *ageLabel;
    QLineEdit *nameLineEdit;
    QLineEdit *ageLineEdit;
    QLabel *addressLabel;
    QCheckBox *birdAllergyCheckBox;
    QHBoxLayout *horizontalLayout_8;
    QSlider *patienceSlider;
    QLineEdit *patienceLineEdit;
    QLabel *purposeLabel;
    QLineEdit *addressLineEdit;
    QLineEdit *phoneLineEdit;
    QComboBox *purposeComboBox;
    QLabel *emailLabel;
    QLabel *nameLabel;
    QComboBox *travelComboBox;
    QLabel *allergicLabel;
    QLineEdit *budgetLineEdit;
    QLabel *sexLabel;
    QComboBox *sexComboBox;
    QLabel *attachmentLabel;
    QLabel *childrenLabel;
    QLineEdit *childrenLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddClient)
    {
        if (AddClient->objectName().isEmpty())
            AddClient->setObjectName(QStringLiteral("AddClient"));
        AddClient->resize(907, 435);
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
        AddClient->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Egyptienne F"));
        AddClient->setFont(font);
        gridLayoutWidget = new QWidget(AddClient);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 871, 405));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(20);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        typePreferenceComboBox = new QComboBox(gridLayoutWidget);
        typePreferenceComboBox->setObjectName(QStringLiteral("typePreferenceComboBox"));
        typePreferenceComboBox->setEnabled(true);

        gridLayout->addWidget(typePreferenceComboBox, 5, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(12);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        irritationSlider = new QSlider(gridLayoutWidget);
        irritationSlider->setObjectName(QStringLiteral("irritationSlider"));
        irritationSlider->setMaximum(10);
        irritationSlider->setPageStep(2);
        irritationSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(irritationSlider);

        irritationLineEdit = new QLineEdit(gridLayoutWidget);
        irritationLineEdit->setObjectName(QStringLiteral("irritationLineEdit"));
        irritationLineEdit->setEnabled(false);
        irritationLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(irritationLineEdit);

        horizontalLayout_7->setStretch(0, 10);
        horizontalLayout_7->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_7, 5, 2, 1, 1);

        budgetLabel = new QLabel(gridLayoutWidget);
        budgetLabel->setObjectName(QStringLiteral("budgetLabel"));
        budgetLabel->setEnabled(true);

        gridLayout->addWidget(budgetLabel, 2, 2, 1, 1);

        freeTimeComboBox = new QComboBox(gridLayoutWidget);
        freeTimeComboBox->setObjectName(QStringLiteral("freeTimeComboBox"));
        freeTimeComboBox->setEnabled(true);

        gridLayout->addWidget(freeTimeComboBox, 1, 2, 1, 1);

        irritationLabel = new QLabel(gridLayoutWidget);
        irritationLabel->setObjectName(QStringLiteral("irritationLabel"));
        irritationLabel->setEnabled(true);

        gridLayout->addWidget(irritationLabel, 4, 2, 1, 1);

        guineapigAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        guineapigAllergyCheckBox->setObjectName(QStringLiteral("guineapigAllergyCheckBox"));

        gridLayout->addWidget(guineapigAllergyCheckBox, 8, 3, 1, 1);

        homeTypeLabel = new QLabel(gridLayoutWidget);
        homeTypeLabel->setObjectName(QStringLiteral("homeTypeLabel"));
        homeTypeLabel->setEnabled(true);

        gridLayout->addWidget(homeTypeLabel, 8, 1, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(12);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        attachmentSlider = new QSlider(gridLayoutWidget);
        attachmentSlider->setObjectName(QStringLiteral("attachmentSlider"));
        attachmentSlider->setMaximum(10);
        attachmentSlider->setPageStep(2);
        attachmentSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(attachmentSlider);

        attachmentLineEdit = new QLineEdit(gridLayoutWidget);
        attachmentLineEdit->setObjectName(QStringLiteral("attachmentLineEdit"));
        attachmentLineEdit->setEnabled(false);
        attachmentLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(attachmentLineEdit);

        horizontalLayout_9->setStretch(0, 10);
        horizontalLayout_9->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_9, 9, 2, 1, 1);

        hamsterAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        hamsterAllergyCheckBox->setObjectName(QStringLiteral("hamsterAllergyCheckBox"));

        gridLayout->addWidget(hamsterAllergyCheckBox, 6, 3, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        isNeuteredRadioButtonYES = new QRadioButton(gridLayoutWidget);
        isNeuteredRadioButtonYES->setObjectName(QStringLiteral("isNeuteredRadioButtonYES"));

        horizontalLayout_3->addWidget(isNeuteredRadioButtonYES);

        isNeuteredRadioButtonNO = new QRadioButton(gridLayoutWidget);
        isNeuteredRadioButtonNO->setObjectName(QStringLiteral("isNeuteredRadioButtonNO"));

        horizontalLayout_3->addWidget(isNeuteredRadioButtonNO);


        gridLayout->addLayout(horizontalLayout_3, 11, 2, 1, 1);

        freeTimeLabel = new QLabel(gridLayoutWidget);
        freeTimeLabel->setObjectName(QStringLiteral("freeTimeLabel"));
        freeTimeLabel->setEnabled(true);

        gridLayout->addWidget(freeTimeLabel, 0, 2, 1, 1);

        travelLabel = new QLabel(gridLayoutWidget);
        travelLabel->setObjectName(QStringLiteral("travelLabel"));
        travelLabel->setEnabled(true);

        gridLayout->addWidget(travelLabel, 10, 1, 1, 1);

        labelPatience = new QLabel(gridLayoutWidget);
        labelPatience->setObjectName(QStringLiteral("labelPatience"));
        labelPatience->setEnabled(true);

        gridLayout->addWidget(labelPatience, 6, 2, 1, 1);

        phoneLabel = new QLabel(gridLayoutWidget);
        phoneLabel->setObjectName(QStringLiteral("phoneLabel"));
        phoneLabel->setEnabled(true);

        gridLayout->addWidget(phoneLabel, 6, 0, 1, 1);

        typePreferenceLabel = new QLabel(gridLayoutWidget);
        typePreferenceLabel->setObjectName(QStringLiteral("typePreferenceLabel"));
        typePreferenceLabel->setEnabled(true);

        gridLayout->addWidget(typePreferenceLabel, 4, 1, 1, 1);

        dogAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        dogAllergyCheckBox->setObjectName(QStringLiteral("dogAllergyCheckBox"));

        gridLayout->addWidget(dogAllergyCheckBox, 4, 3, 1, 1);

        homeTypeComboBox = new QComboBox(gridLayoutWidget);
        homeTypeComboBox->setObjectName(QStringLiteral("homeTypeComboBox"));
        homeTypeComboBox->setEnabled(true);

        gridLayout->addWidget(homeTypeComboBox, 9, 1, 1, 1);

        requireLabel = new QLabel(gridLayoutWidget);
        requireLabel->setObjectName(QStringLiteral("requireLabel"));
        requireLabel->setEnabled(true);

        gridLayout->addWidget(requireLabel, 10, 2, 1, 1);

        emailLineEdit = new QLineEdit(gridLayoutWidget);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));

        gridLayout->addWidget(emailLineEdit, 3, 0, 1, 1);

        salaryComboBox = new QComboBox(gridLayoutWidget);
        salaryComboBox->setObjectName(QStringLiteral("salaryComboBox"));
        salaryComboBox->setEnabled(true);

        gridLayout->addWidget(salaryComboBox, 3, 1, 1, 1);

        salaryLabel = new QLabel(gridLayoutWidget);
        salaryLabel->setObjectName(QStringLiteral("salaryLabel"));
        salaryLabel->setEnabled(true);

        gridLayout->addWidget(salaryLabel, 2, 1, 1, 1);

        catAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        catAllergyCheckBox->setObjectName(QStringLiteral("catAllergyCheckBox"));

        gridLayout->addWidget(catAllergyCheckBox, 3, 3, 1, 1);

        mouseAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        mouseAllergyCheckBox->setObjectName(QStringLiteral("mouseAllergyCheckBox"));

        gridLayout->addWidget(mouseAllergyCheckBox, 7, 3, 1, 1);

        ageLabel = new QLabel(gridLayoutWidget);
        ageLabel->setObjectName(QStringLiteral("ageLabel"));
        ageLabel->setEnabled(true);

        gridLayout->addWidget(ageLabel, 10, 0, 1, 1);

        nameLineEdit = new QLineEdit(gridLayoutWidget);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setEnabled(true);

        gridLayout->addWidget(nameLineEdit, 1, 0, 1, 1);

        ageLineEdit = new QLineEdit(gridLayoutWidget);
        ageLineEdit->setObjectName(QStringLiteral("ageLineEdit"));
        ageLineEdit->setEnabled(true);

        gridLayout->addWidget(ageLineEdit, 11, 0, 1, 1);

        addressLabel = new QLabel(gridLayoutWidget);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));
        addressLabel->setEnabled(true);

        gridLayout->addWidget(addressLabel, 4, 0, 1, 1);

        birdAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        birdAllergyCheckBox->setObjectName(QStringLiteral("birdAllergyCheckBox"));

        gridLayout->addWidget(birdAllergyCheckBox, 5, 3, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(12);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        patienceSlider = new QSlider(gridLayoutWidget);
        patienceSlider->setObjectName(QStringLiteral("patienceSlider"));
        patienceSlider->setMaximum(10);
        patienceSlider->setPageStep(2);
        patienceSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(patienceSlider);

        patienceLineEdit = new QLineEdit(gridLayoutWidget);
        patienceLineEdit->setObjectName(QStringLiteral("patienceLineEdit"));
        patienceLineEdit->setEnabled(false);
        patienceLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(patienceLineEdit);

        horizontalLayout_8->setStretch(0, 10);
        horizontalLayout_8->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_8, 7, 2, 1, 1);

        purposeLabel = new QLabel(gridLayoutWidget);
        purposeLabel->setObjectName(QStringLiteral("purposeLabel"));
        purposeLabel->setEnabled(true);

        gridLayout->addWidget(purposeLabel, 6, 1, 1, 1);

        addressLineEdit = new QLineEdit(gridLayoutWidget);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));

        gridLayout->addWidget(addressLineEdit, 5, 0, 1, 1);

        phoneLineEdit = new QLineEdit(gridLayoutWidget);
        phoneLineEdit->setObjectName(QStringLiteral("phoneLineEdit"));

        gridLayout->addWidget(phoneLineEdit, 7, 0, 1, 1);

        purposeComboBox = new QComboBox(gridLayoutWidget);
        purposeComboBox->setObjectName(QStringLiteral("purposeComboBox"));
        purposeComboBox->setEnabled(true);

        gridLayout->addWidget(purposeComboBox, 7, 1, 1, 1);

        emailLabel = new QLabel(gridLayoutWidget);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));
        emailLabel->setEnabled(true);

        gridLayout->addWidget(emailLabel, 2, 0, 1, 1);

        nameLabel = new QLabel(gridLayoutWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setEnabled(true);

        gridLayout->addWidget(nameLabel, 0, 0, 1, 1);

        travelComboBox = new QComboBox(gridLayoutWidget);
        travelComboBox->setObjectName(QStringLiteral("travelComboBox"));
        travelComboBox->setEnabled(true);

        gridLayout->addWidget(travelComboBox, 11, 1, 1, 1);

        allergicLabel = new QLabel(gridLayoutWidget);
        allergicLabel->setObjectName(QStringLiteral("allergicLabel"));
        allergicLabel->setEnabled(true);

        gridLayout->addWidget(allergicLabel, 2, 3, 1, 1);

        budgetLineEdit = new QLineEdit(gridLayoutWidget);
        budgetLineEdit->setObjectName(QStringLiteral("budgetLineEdit"));
        budgetLineEdit->setEnabled(true);

        gridLayout->addWidget(budgetLineEdit, 3, 2, 1, 1);

        sexLabel = new QLabel(gridLayoutWidget);
        sexLabel->setObjectName(QStringLiteral("sexLabel"));
        sexLabel->setEnabled(true);

        gridLayout->addWidget(sexLabel, 8, 0, 1, 1);

        sexComboBox = new QComboBox(gridLayoutWidget);
        sexComboBox->setObjectName(QStringLiteral("sexComboBox"));
        sexComboBox->setEnabled(true);

        gridLayout->addWidget(sexComboBox, 9, 0, 1, 1);

        attachmentLabel = new QLabel(gridLayoutWidget);
        attachmentLabel->setObjectName(QStringLiteral("attachmentLabel"));
        attachmentLabel->setEnabled(true);

        gridLayout->addWidget(attachmentLabel, 8, 2, 1, 1);

        childrenLabel = new QLabel(gridLayoutWidget);
        childrenLabel->setObjectName(QStringLiteral("childrenLabel"));
        childrenLabel->setEnabled(true);

        gridLayout->addWidget(childrenLabel, 0, 1, 1, 1);

        childrenLineEdit = new QLineEdit(gridLayoutWidget);
        childrenLineEdit->setObjectName(QStringLiteral("childrenLineEdit"));
        childrenLineEdit->setEnabled(true);

        gridLayout->addWidget(childrenLineEdit, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(gridLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setFont(font);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        gridLayout->addWidget(buttonBox, 11, 3, 1, 1);

        gridLayout->setColumnStretch(0, 5);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 1);
        gridLayout->setColumnStretch(3, 1);
        QWidget::setTabOrder(nameLineEdit, childrenLineEdit);
        QWidget::setTabOrder(childrenLineEdit, freeTimeComboBox);
        QWidget::setTabOrder(freeTimeComboBox, emailLineEdit);
        QWidget::setTabOrder(emailLineEdit, salaryComboBox);
        QWidget::setTabOrder(salaryComboBox, budgetLineEdit);
        QWidget::setTabOrder(budgetLineEdit, addressLineEdit);
        QWidget::setTabOrder(addressLineEdit, typePreferenceComboBox);
        QWidget::setTabOrder(typePreferenceComboBox, irritationSlider);
        QWidget::setTabOrder(irritationSlider, irritationLineEdit);
        QWidget::setTabOrder(irritationLineEdit, phoneLineEdit);
        QWidget::setTabOrder(phoneLineEdit, purposeComboBox);
        QWidget::setTabOrder(purposeComboBox, patienceSlider);
        QWidget::setTabOrder(patienceSlider, patienceLineEdit);
        QWidget::setTabOrder(patienceLineEdit, sexComboBox);
        QWidget::setTabOrder(sexComboBox, homeTypeComboBox);
        QWidget::setTabOrder(homeTypeComboBox, attachmentSlider);
        QWidget::setTabOrder(attachmentSlider, attachmentLineEdit);
        QWidget::setTabOrder(attachmentLineEdit, ageLineEdit);
        QWidget::setTabOrder(ageLineEdit, travelComboBox);
        QWidget::setTabOrder(travelComboBox, isNeuteredRadioButtonYES);
        QWidget::setTabOrder(isNeuteredRadioButtonYES, isNeuteredRadioButtonNO);
        QWidget::setTabOrder(isNeuteredRadioButtonNO, catAllergyCheckBox);
        QWidget::setTabOrder(catAllergyCheckBox, dogAllergyCheckBox);
        QWidget::setTabOrder(dogAllergyCheckBox, birdAllergyCheckBox);
        QWidget::setTabOrder(birdAllergyCheckBox, hamsterAllergyCheckBox);
        QWidget::setTabOrder(hamsterAllergyCheckBox, mouseAllergyCheckBox);
        QWidget::setTabOrder(mouseAllergyCheckBox, guineapigAllergyCheckBox);

        retranslateUi(AddClient);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddClient, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddClient, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddClient);
    } // setupUi

    void retranslateUi(QDialog *AddClient)
    {
        AddClient->setWindowTitle(QApplication::translate("AddClient", "Dialog", Q_NULLPTR));
        typePreferenceComboBox->clear();
        typePreferenceComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddClient", "Cat", Q_NULLPTR)
         << QApplication::translate("AddClient", "Dog", Q_NULLPTR)
         << QApplication::translate("AddClient", "Bird", Q_NULLPTR)
         << QApplication::translate("AddClient", "Hamster", Q_NULLPTR)
         << QApplication::translate("AddClient", "Mouse", Q_NULLPTR)
         << QApplication::translate("AddClient", "Guinea Pig", Q_NULLPTR)
        );
        budgetLabel->setText(QApplication::translate("AddClient", "Budget (in dollars)", Q_NULLPTR));
        freeTimeComboBox->clear();
        freeTimeComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddClient", "0 - 1", Q_NULLPTR)
         << QApplication::translate("AddClient", "1 - 2", Q_NULLPTR)
         << QApplication::translate("AddClient", "3 - 4", Q_NULLPTR)
         << QApplication::translate("AddClient", "5+", Q_NULLPTR)
        );
        irritationLabel->setText(QApplication::translate("AddClient", "<html><head/><body><p>Irritation to Noise (Out of 10)</p></body></html>", Q_NULLPTR));
        guineapigAllergyCheckBox->setText(QApplication::translate("AddClient", "Guinea Pig", Q_NULLPTR));
        homeTypeLabel->setText(QApplication::translate("AddClient", "Home Type", Q_NULLPTR));
        hamsterAllergyCheckBox->setText(QApplication::translate("AddClient", "Hamster", Q_NULLPTR));
        isNeuteredRadioButtonYES->setText(QApplication::translate("AddClient", "Yes", Q_NULLPTR));
        isNeuteredRadioButtonNO->setText(QApplication::translate("AddClient", "No", Q_NULLPTR));
        freeTimeLabel->setText(QApplication::translate("AddClient", "Free Time per Day (hours)", Q_NULLPTR));
        travelLabel->setText(QApplication::translate("AddClient", "<html><head/><body><p>Amount of Travel Each Year</p></body></html>", Q_NULLPTR));
        labelPatience->setText(QApplication::translate("AddClient", "Patience (Out of 10)", Q_NULLPTR));
        phoneLabel->setText(QApplication::translate("AddClient", "Phone Number", Q_NULLPTR));
        typePreferenceLabel->setText(QApplication::translate("AddClient", "Type Preference", Q_NULLPTR));
        dogAllergyCheckBox->setText(QApplication::translate("AddClient", "Dog", Q_NULLPTR));
        homeTypeComboBox->clear();
        homeTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddClient", "Condo", Q_NULLPTR)
         << QApplication::translate("AddClient", "Apartment", Q_NULLPTR)
         << QApplication::translate("AddClient", "Small House", Q_NULLPTR)
         << QApplication::translate("AddClient", "Medium House", Q_NULLPTR)
         << QApplication::translate("AddClient", "Large House", Q_NULLPTR)
         << QApplication::translate("AddClient", "Mansion", Q_NULLPTR)
        );
        requireLabel->setText(QApplication::translate("AddClient", "<html><head/><body><p>Requested Neutered/Spayed</p></body></html>", Q_NULLPTR));
        salaryComboBox->clear();
        salaryComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddClient", "0 - 30", Q_NULLPTR)
         << QApplication::translate("AddClient", "30 - 50", Q_NULLPTR)
         << QApplication::translate("AddClient", "50 - 70", Q_NULLPTR)
         << QApplication::translate("AddClient", "70 - 90", Q_NULLPTR)
         << QApplication::translate("AddClient", "90 - 110", Q_NULLPTR)
         << QApplication::translate("AddClient", "110 - 130", Q_NULLPTR)
         << QApplication::translate("AddClient", "130+", Q_NULLPTR)
        );
        salaryLabel->setText(QApplication::translate("AddClient", "<html><head/><body><p>Salary $(thousands/year)</p></body></html>", Q_NULLPTR));
        catAllergyCheckBox->setText(QApplication::translate("AddClient", "Cat", Q_NULLPTR));
        mouseAllergyCheckBox->setText(QApplication::translate("AddClient", "Mouse", Q_NULLPTR));
        ageLabel->setText(QApplication::translate("AddClient", "Age", Q_NULLPTR));
        addressLabel->setText(QApplication::translate("AddClient", "Address", Q_NULLPTR));
        birdAllergyCheckBox->setText(QApplication::translate("AddClient", "Bird", Q_NULLPTR));
        purposeLabel->setText(QApplication::translate("AddClient", "Purpose", Q_NULLPTR));
        purposeComboBox->clear();
        purposeComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddClient", "Guard", Q_NULLPTR)
         << QApplication::translate("AddClient", "Companion", Q_NULLPTR)
         << QApplication::translate("AddClient", "Hunting", Q_NULLPTR)
         << QApplication::translate("AddClient", "Gift", Q_NULLPTR)
         << QApplication::translate("AddClient", "Breeding", Q_NULLPTR)
         << QApplication::translate("AddClient", "Disability", Q_NULLPTR)
        );
        emailLabel->setText(QApplication::translate("AddClient", "Email Address", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("AddClient", "Name", Q_NULLPTR));
        travelComboBox->clear();
        travelComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddClient", "No Travel", Q_NULLPTR)
         << QApplication::translate("AddClient", "1 - 2 Weeks", Q_NULLPTR)
         << QApplication::translate("AddClient", "3 - 4 Weeks", Q_NULLPTR)
         << QApplication::translate("AddClient", "2 - 3 Months", Q_NULLPTR)
         << QApplication::translate("AddClient", "4 - 6 Months", Q_NULLPTR)
         << QApplication::translate("AddClient", "Constant Travel", Q_NULLPTR)
        );
        allergicLabel->setText(QApplication::translate("AddClient", "Allergies", Q_NULLPTR));
        sexLabel->setText(QApplication::translate("AddClient", "Sex", Q_NULLPTR));
        sexComboBox->clear();
        sexComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddClient", "Male", Q_NULLPTR)
         << QApplication::translate("AddClient", "Female", Q_NULLPTR)
        );
        attachmentLabel->setText(QApplication::translate("AddClient", "Attachment Level (Out of 10)", Q_NULLPTR));
        childrenLabel->setText(QApplication::translate("AddClient", "Number of Children", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddClient: public Ui_AddClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCLIENT_H
