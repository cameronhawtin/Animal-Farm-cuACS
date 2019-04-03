/********************************************************************************
** Form generated from reading UI file 'editprofile.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFILE_H
#define UI_EDITPROFILE_H

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

class Ui_EditProfile
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *labelPatience;
    QLineEdit *addressLineEdit;
    QComboBox *sexComboBox;
    QLabel *irritationLabel;
    QHBoxLayout *horizontalLayout_8;
    QSlider *patienceSlider;
    QLineEdit *patienceLineEdit;
    QLabel *requireLabel;
    QLabel *emailLabel;
    QLabel *phoneLabel;
    QLineEdit *emailLineEdit;
    QLabel *ageLabel;
    QLabel *addressLabel;
    QLineEdit *nameLineEdit;
    QLabel *nameLabel;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *isNeuteredRadioButtonYES;
    QRadioButton *isNeuteredRadioButtonNO;
    QLineEdit *ageLineEdit;
    QHBoxLayout *horizontalLayout_9;
    QSlider *attachmentSlider;
    QLineEdit *attachmentLineEdit;
    QHBoxLayout *horizontalLayout_7;
    QSlider *irritationSlider;
    QLineEdit *irritationLineEdit;
    QLineEdit *phoneLineEdit;
    QLabel *sexLabel;
    QLabel *attachmentLabel;
    QLabel *freeTimeLabel;
    QComboBox *freeTimeComboBox;
    QLabel *budgetLabel;
    QLineEdit *budgetLineEdit;
    QLabel *homeTypeLabel;
    QComboBox *homeTypeComboBox;
    QLabel *purposeLabel;
    QComboBox *purposeComboBox;
    QComboBox *salaryComboBox;
    QLabel *salaryLabel;
    QLabel *childrenLabel;
    QLineEdit *childrenLineEdit;
    QComboBox *travelComboBox;
    QLabel *travelLabel;
    QLabel *typePreferenceLabel;
    QComboBox *typePreferenceComboBox;
    QLabel *allergicLabel;
    QCheckBox *catAllergyCheckBox;
    QCheckBox *dogAllergyCheckBox;
    QCheckBox *birdAllergyCheckBox;
    QCheckBox *hamsterAllergyCheckBox;
    QCheckBox *mouseAllergyCheckBox;
    QCheckBox *guineapigAllergyCheckBox;
    QLabel *titleLabel;

    void setupUi(QDialog *EditProfile)
    {
        if (EditProfile->objectName().isEmpty())
            EditProfile->setObjectName(QStringLiteral("EditProfile"));
        EditProfile->resize(871, 508);
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
        EditProfile->setPalette(palette);
        buttonBox = new QDialogButtonBox(EditProfile);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(510, 460, 341, 32));
        QFont font;
        font.setFamily(QStringLiteral("Egyptienne F"));
        buttonBox->setFont(font);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        gridLayoutWidget = new QWidget(EditProfile);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 70, 831, 371));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(20);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelPatience = new QLabel(gridLayoutWidget);
        labelPatience->setObjectName(QStringLiteral("labelPatience"));
        labelPatience->setEnabled(true);

        gridLayout->addWidget(labelPatience, 6, 2, 1, 1);

        addressLineEdit = new QLineEdit(gridLayoutWidget);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));

        gridLayout->addWidget(addressLineEdit, 5, 0, 1, 1);

        sexComboBox = new QComboBox(gridLayoutWidget);
        sexComboBox->setObjectName(QStringLiteral("sexComboBox"));
        sexComboBox->setEnabled(true);

        gridLayout->addWidget(sexComboBox, 9, 0, 1, 1);

        irritationLabel = new QLabel(gridLayoutWidget);
        irritationLabel->setObjectName(QStringLiteral("irritationLabel"));
        irritationLabel->setEnabled(true);

        gridLayout->addWidget(irritationLabel, 4, 2, 1, 1);

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

        requireLabel = new QLabel(gridLayoutWidget);
        requireLabel->setObjectName(QStringLiteral("requireLabel"));
        requireLabel->setEnabled(true);

        gridLayout->addWidget(requireLabel, 10, 2, 1, 1);

        emailLabel = new QLabel(gridLayoutWidget);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));
        emailLabel->setEnabled(true);

        gridLayout->addWidget(emailLabel, 2, 0, 1, 1);

        phoneLabel = new QLabel(gridLayoutWidget);
        phoneLabel->setObjectName(QStringLiteral("phoneLabel"));
        phoneLabel->setEnabled(true);

        gridLayout->addWidget(phoneLabel, 6, 0, 1, 1);

        emailLineEdit = new QLineEdit(gridLayoutWidget);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));

        gridLayout->addWidget(emailLineEdit, 3, 0, 1, 1);

        ageLabel = new QLabel(gridLayoutWidget);
        ageLabel->setObjectName(QStringLiteral("ageLabel"));
        ageLabel->setEnabled(true);

        gridLayout->addWidget(ageLabel, 10, 0, 1, 1);

        addressLabel = new QLabel(gridLayoutWidget);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));
        addressLabel->setEnabled(true);

        gridLayout->addWidget(addressLabel, 4, 0, 1, 1);

        nameLineEdit = new QLineEdit(gridLayoutWidget);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setEnabled(true);

        gridLayout->addWidget(nameLineEdit, 1, 0, 1, 1);

        nameLabel = new QLabel(gridLayoutWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setEnabled(true);

        gridLayout->addWidget(nameLabel, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        isNeuteredRadioButtonYES = new QRadioButton(gridLayoutWidget);
        isNeuteredRadioButtonYES->setObjectName(QStringLiteral("isNeuteredRadioButtonYES"));

        horizontalLayout_3->addWidget(isNeuteredRadioButtonYES);

        isNeuteredRadioButtonNO = new QRadioButton(gridLayoutWidget);
        isNeuteredRadioButtonNO->setObjectName(QStringLiteral("isNeuteredRadioButtonNO"));

        horizontalLayout_3->addWidget(isNeuteredRadioButtonNO);


        gridLayout->addLayout(horizontalLayout_3, 11, 2, 1, 1);

        ageLineEdit = new QLineEdit(gridLayoutWidget);
        ageLineEdit->setObjectName(QStringLiteral("ageLineEdit"));
        ageLineEdit->setEnabled(true);

        gridLayout->addWidget(ageLineEdit, 11, 0, 1, 1);

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

        phoneLineEdit = new QLineEdit(gridLayoutWidget);
        phoneLineEdit->setObjectName(QStringLiteral("phoneLineEdit"));

        gridLayout->addWidget(phoneLineEdit, 7, 0, 1, 1);

        sexLabel = new QLabel(gridLayoutWidget);
        sexLabel->setObjectName(QStringLiteral("sexLabel"));
        sexLabel->setEnabled(true);

        gridLayout->addWidget(sexLabel, 8, 0, 1, 1);

        attachmentLabel = new QLabel(gridLayoutWidget);
        attachmentLabel->setObjectName(QStringLiteral("attachmentLabel"));
        attachmentLabel->setEnabled(true);

        gridLayout->addWidget(attachmentLabel, 8, 2, 1, 1);

        freeTimeLabel = new QLabel(gridLayoutWidget);
        freeTimeLabel->setObjectName(QStringLiteral("freeTimeLabel"));
        freeTimeLabel->setEnabled(true);

        gridLayout->addWidget(freeTimeLabel, 0, 2, 1, 1);

        freeTimeComboBox = new QComboBox(gridLayoutWidget);
        freeTimeComboBox->setObjectName(QStringLiteral("freeTimeComboBox"));
        freeTimeComboBox->setEnabled(true);

        gridLayout->addWidget(freeTimeComboBox, 1, 2, 1, 1);

        budgetLabel = new QLabel(gridLayoutWidget);
        budgetLabel->setObjectName(QStringLiteral("budgetLabel"));
        budgetLabel->setEnabled(true);

        gridLayout->addWidget(budgetLabel, 2, 2, 1, 1);

        budgetLineEdit = new QLineEdit(gridLayoutWidget);
        budgetLineEdit->setObjectName(QStringLiteral("budgetLineEdit"));
        budgetLineEdit->setEnabled(true);

        gridLayout->addWidget(budgetLineEdit, 3, 2, 1, 1);

        homeTypeLabel = new QLabel(gridLayoutWidget);
        homeTypeLabel->setObjectName(QStringLiteral("homeTypeLabel"));
        homeTypeLabel->setEnabled(true);

        gridLayout->addWidget(homeTypeLabel, 8, 1, 1, 1);

        homeTypeComboBox = new QComboBox(gridLayoutWidget);
        homeTypeComboBox->setObjectName(QStringLiteral("homeTypeComboBox"));
        homeTypeComboBox->setEnabled(true);

        gridLayout->addWidget(homeTypeComboBox, 9, 1, 1, 1);

        purposeLabel = new QLabel(gridLayoutWidget);
        purposeLabel->setObjectName(QStringLiteral("purposeLabel"));
        purposeLabel->setEnabled(true);

        gridLayout->addWidget(purposeLabel, 6, 1, 1, 1);

        purposeComboBox = new QComboBox(gridLayoutWidget);
        purposeComboBox->setObjectName(QStringLiteral("purposeComboBox"));
        purposeComboBox->setEnabled(true);

        gridLayout->addWidget(purposeComboBox, 7, 1, 1, 1);

        salaryComboBox = new QComboBox(gridLayoutWidget);
        salaryComboBox->setObjectName(QStringLiteral("salaryComboBox"));
        salaryComboBox->setEnabled(true);

        gridLayout->addWidget(salaryComboBox, 3, 1, 1, 1);

        salaryLabel = new QLabel(gridLayoutWidget);
        salaryLabel->setObjectName(QStringLiteral("salaryLabel"));
        salaryLabel->setEnabled(true);

        gridLayout->addWidget(salaryLabel, 2, 1, 1, 1);

        childrenLabel = new QLabel(gridLayoutWidget);
        childrenLabel->setObjectName(QStringLiteral("childrenLabel"));
        childrenLabel->setEnabled(true);

        gridLayout->addWidget(childrenLabel, 0, 1, 1, 1);

        childrenLineEdit = new QLineEdit(gridLayoutWidget);
        childrenLineEdit->setObjectName(QStringLiteral("childrenLineEdit"));
        childrenLineEdit->setEnabled(true);

        gridLayout->addWidget(childrenLineEdit, 1, 1, 1, 1);

        travelComboBox = new QComboBox(gridLayoutWidget);
        travelComboBox->setObjectName(QStringLiteral("travelComboBox"));
        travelComboBox->setEnabled(true);

        gridLayout->addWidget(travelComboBox, 11, 1, 1, 1);

        travelLabel = new QLabel(gridLayoutWidget);
        travelLabel->setObjectName(QStringLiteral("travelLabel"));
        travelLabel->setEnabled(true);

        gridLayout->addWidget(travelLabel, 10, 1, 1, 1);

        typePreferenceLabel = new QLabel(gridLayoutWidget);
        typePreferenceLabel->setObjectName(QStringLiteral("typePreferenceLabel"));
        typePreferenceLabel->setEnabled(true);

        gridLayout->addWidget(typePreferenceLabel, 4, 1, 1, 1);

        typePreferenceComboBox = new QComboBox(gridLayoutWidget);
        typePreferenceComboBox->setObjectName(QStringLiteral("typePreferenceComboBox"));
        typePreferenceComboBox->setEnabled(true);

        gridLayout->addWidget(typePreferenceComboBox, 5, 1, 1, 1);

        allergicLabel = new QLabel(gridLayoutWidget);
        allergicLabel->setObjectName(QStringLiteral("allergicLabel"));
        allergicLabel->setEnabled(true);

        gridLayout->addWidget(allergicLabel, 2, 3, 1, 1);

        catAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        catAllergyCheckBox->setObjectName(QStringLiteral("catAllergyCheckBox"));

        gridLayout->addWidget(catAllergyCheckBox, 3, 3, 1, 1);

        dogAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        dogAllergyCheckBox->setObjectName(QStringLiteral("dogAllergyCheckBox"));

        gridLayout->addWidget(dogAllergyCheckBox, 4, 3, 1, 1);

        birdAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        birdAllergyCheckBox->setObjectName(QStringLiteral("birdAllergyCheckBox"));

        gridLayout->addWidget(birdAllergyCheckBox, 5, 3, 1, 1);

        hamsterAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        hamsterAllergyCheckBox->setObjectName(QStringLiteral("hamsterAllergyCheckBox"));

        gridLayout->addWidget(hamsterAllergyCheckBox, 6, 3, 1, 1);

        mouseAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        mouseAllergyCheckBox->setObjectName(QStringLiteral("mouseAllergyCheckBox"));

        gridLayout->addWidget(mouseAllergyCheckBox, 7, 3, 1, 1);

        guineapigAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        guineapigAllergyCheckBox->setObjectName(QStringLiteral("guineapigAllergyCheckBox"));

        gridLayout->addWidget(guineapigAllergyCheckBox, 8, 3, 1, 1);

        gridLayout->setColumnStretch(0, 3);
        titleLabel = new QLabel(EditProfile);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(40, 10, 769, 59));
        QFont font1;
        font1.setPointSize(24);
        titleLabel->setFont(font1);
        titleLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(EditProfile);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditProfile, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditProfile, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditProfile);
    } // setupUi

    void retranslateUi(QDialog *EditProfile)
    {
        EditProfile->setWindowTitle(QApplication::translate("EditProfile", "Dialog", Q_NULLPTR));
        labelPatience->setText(QApplication::translate("EditProfile", "Patience (Out of 10)", Q_NULLPTR));
        sexComboBox->clear();
        sexComboBox->insertItems(0, QStringList()
         << QApplication::translate("EditProfile", "Please Select", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Male", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Female", Q_NULLPTR)
        );
        irritationLabel->setText(QApplication::translate("EditProfile", "<html><head/><body><p>Irritation to Noise (Out of 10)</p></body></html>", Q_NULLPTR));
        requireLabel->setText(QApplication::translate("EditProfile", "<html><head/><body><p>Requested Neutered/Spayed</p></body></html>", Q_NULLPTR));
        emailLabel->setText(QApplication::translate("EditProfile", "Email Address", Q_NULLPTR));
        phoneLabel->setText(QApplication::translate("EditProfile", "Phone Number", Q_NULLPTR));
        ageLabel->setText(QApplication::translate("EditProfile", "Age", Q_NULLPTR));
        addressLabel->setText(QApplication::translate("EditProfile", "Address", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("EditProfile", "Name", Q_NULLPTR));
        isNeuteredRadioButtonYES->setText(QApplication::translate("EditProfile", "Yes", Q_NULLPTR));
        isNeuteredRadioButtonNO->setText(QApplication::translate("EditProfile", "No", Q_NULLPTR));
        sexLabel->setText(QApplication::translate("EditProfile", "Sex", Q_NULLPTR));
        attachmentLabel->setText(QApplication::translate("EditProfile", "Attachment Level (Out of 10)", Q_NULLPTR));
        freeTimeLabel->setText(QApplication::translate("EditProfile", "Free Time per Day (hours)", Q_NULLPTR));
        freeTimeComboBox->clear();
        freeTimeComboBox->insertItems(0, QStringList()
         << QApplication::translate("EditProfile", "Please Select", Q_NULLPTR)
         << QApplication::translate("EditProfile", "0 - 1", Q_NULLPTR)
         << QApplication::translate("EditProfile", "1 - 2", Q_NULLPTR)
         << QApplication::translate("EditProfile", "3 - 4", Q_NULLPTR)
         << QApplication::translate("EditProfile", "5+", Q_NULLPTR)
        );
        budgetLabel->setText(QApplication::translate("EditProfile", "Budget (in dollars)", Q_NULLPTR));
        homeTypeLabel->setText(QApplication::translate("EditProfile", "Home Type", Q_NULLPTR));
        homeTypeComboBox->clear();
        homeTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("EditProfile", "Please Select", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Condo", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Apartment", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Small House", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Medium House", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Large House", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Mansion", Q_NULLPTR)
        );
        purposeLabel->setText(QApplication::translate("EditProfile", "Purpose", Q_NULLPTR));
        purposeComboBox->clear();
        purposeComboBox->insertItems(0, QStringList()
         << QApplication::translate("EditProfile", "Please Select", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Guard", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Companion", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Hunting", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Gift", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Breeding", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Disability", Q_NULLPTR)
        );
        salaryComboBox->clear();
        salaryComboBox->insertItems(0, QStringList()
         << QApplication::translate("EditProfile", "Please Select", Q_NULLPTR)
         << QApplication::translate("EditProfile", "0 - 30", Q_NULLPTR)
         << QApplication::translate("EditProfile", "30 - 50", Q_NULLPTR)
         << QApplication::translate("EditProfile", "50 - 70", Q_NULLPTR)
         << QApplication::translate("EditProfile", "70 - 90", Q_NULLPTR)
         << QApplication::translate("EditProfile", "90 - 110", Q_NULLPTR)
         << QApplication::translate("EditProfile", "110 - 130", Q_NULLPTR)
         << QApplication::translate("EditProfile", "130+", Q_NULLPTR)
        );
        salaryLabel->setText(QApplication::translate("EditProfile", "<html><head/><body><p>Salary $(thousands/year)</p></body></html>", Q_NULLPTR));
        childrenLabel->setText(QApplication::translate("EditProfile", "Number of Children", Q_NULLPTR));
        travelComboBox->clear();
        travelComboBox->insertItems(0, QStringList()
         << QApplication::translate("EditProfile", "Please Select", Q_NULLPTR)
         << QApplication::translate("EditProfile", "No Travel", Q_NULLPTR)
         << QApplication::translate("EditProfile", "1 - 2 Weeks", Q_NULLPTR)
         << QApplication::translate("EditProfile", "3 - 4 Weeks", Q_NULLPTR)
         << QApplication::translate("EditProfile", "2 - 3 Months", Q_NULLPTR)
         << QApplication::translate("EditProfile", "4 - 6 months", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Constant Travel", Q_NULLPTR)
        );
        travelLabel->setText(QApplication::translate("EditProfile", "<html><head/><body><p>Amount of Travel Each Year</p></body></html>", Q_NULLPTR));
        typePreferenceLabel->setText(QApplication::translate("EditProfile", "Type Preference", Q_NULLPTR));
        typePreferenceComboBox->clear();
        typePreferenceComboBox->insertItems(0, QStringList()
         << QApplication::translate("EditProfile", "Please Select", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Cat", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Dog", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Bird", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Hamster", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Mouse", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Guinea Pig", Q_NULLPTR)
        );
        allergicLabel->setText(QApplication::translate("EditProfile", "Allergies", Q_NULLPTR));
        catAllergyCheckBox->setText(QApplication::translate("EditProfile", "Cat", Q_NULLPTR));
        dogAllergyCheckBox->setText(QApplication::translate("EditProfile", "Dog", Q_NULLPTR));
        birdAllergyCheckBox->setText(QApplication::translate("EditProfile", "Bird", Q_NULLPTR));
        hamsterAllergyCheckBox->setText(QApplication::translate("EditProfile", "Hamster", Q_NULLPTR));
        mouseAllergyCheckBox->setText(QApplication::translate("EditProfile", "Mouse", Q_NULLPTR));
        guineapigAllergyCheckBox->setText(QApplication::translate("EditProfile", "Guinea Pig", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("EditProfile", "<html><head/><body><p>Please Log in as a Client in the Database</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditProfile: public Ui_EditProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROFILE_H
