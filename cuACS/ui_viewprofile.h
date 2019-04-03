/********************************************************************************
** Form generated from reading UI file 'viewprofile.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPROFILE_H
#define UI_VIEWPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewProfile
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_70;
    QLabel *titleLabel;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_24;
    QLineEdit *salaryLineEdit;
    QLabel *freeTimeLabel_24;
    QLabel *budgetLabel_24;
    QLabel *purposeLabel_24;
    QLabel *phoneLabel_24;
    QLabel *homeTypeLabel_24;
    QLineEdit *patienceLineEdit;
    QLineEdit *purposeLineEdit;
    QLabel *typePreferenceLabel;
    QLineEdit *travelLineEdit;
    QLineEdit *nameLineEdit;
    QLineEdit *typePreferenceLineEdit;
    QLineEdit *attachmentLineEdit;
    QLineEdit *childrenLineEdit;
    QLabel *nameLabel_48;
    QLabel *travelLabel_24;
    QLineEdit *sexLineEdit;
    QLabel *sexLabel_27;
    QLineEdit *emailLineEdit;
    QLabel *labelPatience_24;
    QLabel *childrenLabel_24;
    QLabel *nameLabel_47;
    QLabel *requireLabel_24;
    QLineEdit *neuteredLineEdit;
    QLabel *irritationLabel_24;
    QLineEdit *phoneLineEdit;
    QLineEdit *freeTimeLineEdit;
    QLabel *addressLabel_24;
    QLineEdit *irritationLineEdit;
    QLineEdit *homeLineEdit;
    QLineEdit *budgetLineEdit;
    QLabel *ageLabel_30;
    QLabel *salaryLabel_24;
    QLineEdit *ageLineEdit;
    QLineEdit *addressLineEdit;
    QLabel *attachmentLabel_24;
    QCheckBox *birdAllergyCheckBox;
    QCheckBox *dogAllergyCheckBox;
    QCheckBox *hamsterAllergyCheckBox;
    QCheckBox *mouseAllergyCheckBox;
    QCheckBox *guineapigAllergyCheckBox;
    QCheckBox *catAllergyCheckBox;
    QLabel *allergicLabel_25;

    void setupUi(QDialog *ViewProfile)
    {
        if (ViewProfile->objectName().isEmpty())
            ViewProfile->setObjectName(QStringLiteral("ViewProfile"));
        ViewProfile->resize(811, 524);
        QPalette palette;
        QBrush brush(QColor(200, 16, 46, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush3(QColor(238, 238, 238, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        QBrush brush4(QColor(145, 145, 145, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush4);
        ViewProfile->setPalette(palette);
        buttonBox = new QDialogButtonBox(ViewProfile);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(450, 480, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        horizontalLayoutWidget = new QWidget(ViewProfile);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(22, 20, 771, 61));
        horizontalLayout_70 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_70->setObjectName(QStringLiteral("horizontalLayout_70"));
        horizontalLayout_70->setContentsMargins(0, 0, 0, 0);
        titleLabel = new QLabel(horizontalLayoutWidget);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QFont font;
        font.setPointSize(24);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_70->addWidget(titleLabel);

        gridLayoutWidget = new QWidget(ViewProfile);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 90, 771, 381));
        gridLayout_24 = new QGridLayout(gridLayoutWidget);
        gridLayout_24->setObjectName(QStringLiteral("gridLayout_24"));
        gridLayout_24->setHorizontalSpacing(12);
        gridLayout_24->setContentsMargins(0, 0, 0, 0);
        salaryLineEdit = new QLineEdit(gridLayoutWidget);
        salaryLineEdit->setObjectName(QStringLiteral("salaryLineEdit"));

        gridLayout_24->addWidget(salaryLineEdit, 3, 1, 1, 1);

        freeTimeLabel_24 = new QLabel(gridLayoutWidget);
        freeTimeLabel_24->setObjectName(QStringLiteral("freeTimeLabel_24"));
        freeTimeLabel_24->setEnabled(true);

        gridLayout_24->addWidget(freeTimeLabel_24, 0, 2, 1, 1);

        budgetLabel_24 = new QLabel(gridLayoutWidget);
        budgetLabel_24->setObjectName(QStringLiteral("budgetLabel_24"));
        budgetLabel_24->setEnabled(true);

        gridLayout_24->addWidget(budgetLabel_24, 2, 2, 1, 1);

        purposeLabel_24 = new QLabel(gridLayoutWidget);
        purposeLabel_24->setObjectName(QStringLiteral("purposeLabel_24"));
        purposeLabel_24->setEnabled(true);

        gridLayout_24->addWidget(purposeLabel_24, 6, 1, 1, 1);

        phoneLabel_24 = new QLabel(gridLayoutWidget);
        phoneLabel_24->setObjectName(QStringLiteral("phoneLabel_24"));
        phoneLabel_24->setEnabled(true);

        gridLayout_24->addWidget(phoneLabel_24, 6, 0, 1, 1);

        homeTypeLabel_24 = new QLabel(gridLayoutWidget);
        homeTypeLabel_24->setObjectName(QStringLiteral("homeTypeLabel_24"));
        homeTypeLabel_24->setEnabled(true);

        gridLayout_24->addWidget(homeTypeLabel_24, 8, 1, 1, 1);

        patienceLineEdit = new QLineEdit(gridLayoutWidget);
        patienceLineEdit->setObjectName(QStringLiteral("patienceLineEdit"));

        gridLayout_24->addWidget(patienceLineEdit, 7, 2, 1, 1);

        purposeLineEdit = new QLineEdit(gridLayoutWidget);
        purposeLineEdit->setObjectName(QStringLiteral("purposeLineEdit"));

        gridLayout_24->addWidget(purposeLineEdit, 7, 1, 1, 1);

        typePreferenceLabel = new QLabel(gridLayoutWidget);
        typePreferenceLabel->setObjectName(QStringLiteral("typePreferenceLabel"));
        typePreferenceLabel->setEnabled(true);

        gridLayout_24->addWidget(typePreferenceLabel, 4, 1, 1, 1);

        travelLineEdit = new QLineEdit(gridLayoutWidget);
        travelLineEdit->setObjectName(QStringLiteral("travelLineEdit"));

        gridLayout_24->addWidget(travelLineEdit, 11, 1, 1, 1);

        nameLineEdit = new QLineEdit(gridLayoutWidget);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        gridLayout_24->addWidget(nameLineEdit, 1, 0, 1, 1);

        typePreferenceLineEdit = new QLineEdit(gridLayoutWidget);
        typePreferenceLineEdit->setObjectName(QStringLiteral("typePreferenceLineEdit"));

        gridLayout_24->addWidget(typePreferenceLineEdit, 5, 1, 1, 1);

        attachmentLineEdit = new QLineEdit(gridLayoutWidget);
        attachmentLineEdit->setObjectName(QStringLiteral("attachmentLineEdit"));

        gridLayout_24->addWidget(attachmentLineEdit, 9, 2, 1, 1);

        childrenLineEdit = new QLineEdit(gridLayoutWidget);
        childrenLineEdit->setObjectName(QStringLiteral("childrenLineEdit"));
        childrenLineEdit->setEnabled(true);

        gridLayout_24->addWidget(childrenLineEdit, 1, 1, 1, 1);

        nameLabel_48 = new QLabel(gridLayoutWidget);
        nameLabel_48->setObjectName(QStringLiteral("nameLabel_48"));
        nameLabel_48->setEnabled(true);

        gridLayout_24->addWidget(nameLabel_48, 0, 0, 1, 1);

        travelLabel_24 = new QLabel(gridLayoutWidget);
        travelLabel_24->setObjectName(QStringLiteral("travelLabel_24"));
        travelLabel_24->setEnabled(true);

        gridLayout_24->addWidget(travelLabel_24, 10, 1, 1, 1);

        sexLineEdit = new QLineEdit(gridLayoutWidget);
        sexLineEdit->setObjectName(QStringLiteral("sexLineEdit"));

        gridLayout_24->addWidget(sexLineEdit, 9, 0, 1, 1);

        sexLabel_27 = new QLabel(gridLayoutWidget);
        sexLabel_27->setObjectName(QStringLiteral("sexLabel_27"));
        sexLabel_27->setEnabled(true);

        gridLayout_24->addWidget(sexLabel_27, 8, 0, 1, 1);

        emailLineEdit = new QLineEdit(gridLayoutWidget);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));
        emailLineEdit->setEnabled(true);

        gridLayout_24->addWidget(emailLineEdit, 3, 0, 1, 1);

        labelPatience_24 = new QLabel(gridLayoutWidget);
        labelPatience_24->setObjectName(QStringLiteral("labelPatience_24"));
        labelPatience_24->setEnabled(true);

        gridLayout_24->addWidget(labelPatience_24, 6, 2, 1, 1);

        childrenLabel_24 = new QLabel(gridLayoutWidget);
        childrenLabel_24->setObjectName(QStringLiteral("childrenLabel_24"));
        childrenLabel_24->setEnabled(true);

        gridLayout_24->addWidget(childrenLabel_24, 0, 1, 1, 1);

        nameLabel_47 = new QLabel(gridLayoutWidget);
        nameLabel_47->setObjectName(QStringLiteral("nameLabel_47"));
        nameLabel_47->setEnabled(true);

        gridLayout_24->addWidget(nameLabel_47, 2, 0, 1, 1);

        requireLabel_24 = new QLabel(gridLayoutWidget);
        requireLabel_24->setObjectName(QStringLiteral("requireLabel_24"));
        requireLabel_24->setEnabled(true);

        gridLayout_24->addWidget(requireLabel_24, 10, 2, 1, 1);

        neuteredLineEdit = new QLineEdit(gridLayoutWidget);
        neuteredLineEdit->setObjectName(QStringLiteral("neuteredLineEdit"));

        gridLayout_24->addWidget(neuteredLineEdit, 11, 2, 1, 1);

        irritationLabel_24 = new QLabel(gridLayoutWidget);
        irritationLabel_24->setObjectName(QStringLiteral("irritationLabel_24"));
        irritationLabel_24->setEnabled(true);

        gridLayout_24->addWidget(irritationLabel_24, 4, 2, 1, 1);

        phoneLineEdit = new QLineEdit(gridLayoutWidget);
        phoneLineEdit->setObjectName(QStringLiteral("phoneLineEdit"));

        gridLayout_24->addWidget(phoneLineEdit, 7, 0, 1, 1);

        freeTimeLineEdit = new QLineEdit(gridLayoutWidget);
        freeTimeLineEdit->setObjectName(QStringLiteral("freeTimeLineEdit"));

        gridLayout_24->addWidget(freeTimeLineEdit, 1, 2, 1, 1);

        addressLabel_24 = new QLabel(gridLayoutWidget);
        addressLabel_24->setObjectName(QStringLiteral("addressLabel_24"));
        addressLabel_24->setEnabled(true);

        gridLayout_24->addWidget(addressLabel_24, 4, 0, 1, 1);

        irritationLineEdit = new QLineEdit(gridLayoutWidget);
        irritationLineEdit->setObjectName(QStringLiteral("irritationLineEdit"));

        gridLayout_24->addWidget(irritationLineEdit, 5, 2, 1, 1);

        homeLineEdit = new QLineEdit(gridLayoutWidget);
        homeLineEdit->setObjectName(QStringLiteral("homeLineEdit"));

        gridLayout_24->addWidget(homeLineEdit, 9, 1, 1, 1);

        budgetLineEdit = new QLineEdit(gridLayoutWidget);
        budgetLineEdit->setObjectName(QStringLiteral("budgetLineEdit"));
        budgetLineEdit->setEnabled(true);

        gridLayout_24->addWidget(budgetLineEdit, 3, 2, 1, 1);

        ageLabel_30 = new QLabel(gridLayoutWidget);
        ageLabel_30->setObjectName(QStringLiteral("ageLabel_30"));
        ageLabel_30->setEnabled(true);

        gridLayout_24->addWidget(ageLabel_30, 10, 0, 1, 1);

        salaryLabel_24 = new QLabel(gridLayoutWidget);
        salaryLabel_24->setObjectName(QStringLiteral("salaryLabel_24"));
        salaryLabel_24->setEnabled(true);

        gridLayout_24->addWidget(salaryLabel_24, 2, 1, 1, 1);

        ageLineEdit = new QLineEdit(gridLayoutWidget);
        ageLineEdit->setObjectName(QStringLiteral("ageLineEdit"));
        ageLineEdit->setEnabled(true);

        gridLayout_24->addWidget(ageLineEdit, 11, 0, 1, 1);

        addressLineEdit = new QLineEdit(gridLayoutWidget);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));

        gridLayout_24->addWidget(addressLineEdit, 5, 0, 1, 1);

        attachmentLabel_24 = new QLabel(gridLayoutWidget);
        attachmentLabel_24->setObjectName(QStringLiteral("attachmentLabel_24"));
        attachmentLabel_24->setEnabled(true);

        gridLayout_24->addWidget(attachmentLabel_24, 8, 2, 1, 1);

        birdAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        birdAllergyCheckBox->setObjectName(QStringLiteral("birdAllergyCheckBox"));
        birdAllergyCheckBox->setEnabled(false);

        gridLayout_24->addWidget(birdAllergyCheckBox, 5, 3, 1, 1);

        dogAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        dogAllergyCheckBox->setObjectName(QStringLiteral("dogAllergyCheckBox"));
        dogAllergyCheckBox->setEnabled(false);

        gridLayout_24->addWidget(dogAllergyCheckBox, 4, 3, 1, 1);

        hamsterAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        hamsterAllergyCheckBox->setObjectName(QStringLiteral("hamsterAllergyCheckBox"));
        hamsterAllergyCheckBox->setEnabled(false);

        gridLayout_24->addWidget(hamsterAllergyCheckBox, 6, 3, 1, 1);

        mouseAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        mouseAllergyCheckBox->setObjectName(QStringLiteral("mouseAllergyCheckBox"));
        mouseAllergyCheckBox->setEnabled(false);

        gridLayout_24->addWidget(mouseAllergyCheckBox, 7, 3, 1, 1);

        guineapigAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        guineapigAllergyCheckBox->setObjectName(QStringLiteral("guineapigAllergyCheckBox"));
        guineapigAllergyCheckBox->setEnabled(false);

        gridLayout_24->addWidget(guineapigAllergyCheckBox, 8, 3, 1, 1);

        catAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        catAllergyCheckBox->setObjectName(QStringLiteral("catAllergyCheckBox"));
        catAllergyCheckBox->setEnabled(false);

        gridLayout_24->addWidget(catAllergyCheckBox, 3, 3, 1, 1);

        allergicLabel_25 = new QLabel(gridLayoutWidget);
        allergicLabel_25->setObjectName(QStringLiteral("allergicLabel_25"));
        allergicLabel_25->setEnabled(true);

        gridLayout_24->addWidget(allergicLabel_25, 2, 3, 1, 1);

        gridLayout_24->setColumnStretch(0, 3);
        gridLayout_24->setColumnStretch(1, 1);
        gridLayout_24->setColumnStretch(2, 1);
        gridLayout_24->setColumnStretch(3, 1);

        retranslateUi(ViewProfile);
        QObject::connect(buttonBox, SIGNAL(accepted()), ViewProfile, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ViewProfile, SLOT(reject()));

        QMetaObject::connectSlotsByName(ViewProfile);
    } // setupUi

    void retranslateUi(QDialog *ViewProfile)
    {
        ViewProfile->setWindowTitle(QApplication::translate("ViewProfile", "Dialog", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("ViewProfile", "<html><head/><body><p>Please Log in as a Client in the Database</p></body></html>", Q_NULLPTR));
        freeTimeLabel_24->setText(QApplication::translate("ViewProfile", "Free Time per Day (hours)", Q_NULLPTR));
        budgetLabel_24->setText(QApplication::translate("ViewProfile", "Budget (in dollars)", Q_NULLPTR));
        purposeLabel_24->setText(QApplication::translate("ViewProfile", "Purpose", Q_NULLPTR));
        phoneLabel_24->setText(QApplication::translate("ViewProfile", "Phone Number", Q_NULLPTR));
        homeTypeLabel_24->setText(QApplication::translate("ViewProfile", "Home Type", Q_NULLPTR));
        typePreferenceLabel->setText(QApplication::translate("ViewProfile", "<html><head/><body><p>Type Preference</p></body></html>", Q_NULLPTR));
        nameLabel_48->setText(QApplication::translate("ViewProfile", "Name", Q_NULLPTR));
        travelLabel_24->setText(QApplication::translate("ViewProfile", "<html><head/><body><p>Amount of Travel Each Year</p></body></html>", Q_NULLPTR));
        sexLabel_27->setText(QApplication::translate("ViewProfile", "Sex", Q_NULLPTR));
        labelPatience_24->setText(QApplication::translate("ViewProfile", "Patience (Out of 10)", Q_NULLPTR));
        childrenLabel_24->setText(QApplication::translate("ViewProfile", "Number of Children", Q_NULLPTR));
        nameLabel_47->setText(QApplication::translate("ViewProfile", "Email", Q_NULLPTR));
        requireLabel_24->setText(QApplication::translate("ViewProfile", "<html><head/><body><p>Requested Neutered/Spayed</p></body></html>", Q_NULLPTR));
        irritationLabel_24->setText(QApplication::translate("ViewProfile", "<html><head/><body><p>Irritation to Noise (Out of 10)</p></body></html>", Q_NULLPTR));
        addressLabel_24->setText(QApplication::translate("ViewProfile", "Address", Q_NULLPTR));
        ageLabel_30->setText(QApplication::translate("ViewProfile", "Age", Q_NULLPTR));
        salaryLabel_24->setText(QApplication::translate("ViewProfile", "<html><head/><body><p>Salary $(thousands/year)</p></body></html>", Q_NULLPTR));
        attachmentLabel_24->setText(QApplication::translate("ViewProfile", "Attachment Level (Out of 10)", Q_NULLPTR));
        birdAllergyCheckBox->setText(QApplication::translate("ViewProfile", "Bird", Q_NULLPTR));
        dogAllergyCheckBox->setText(QApplication::translate("ViewProfile", "Dog", Q_NULLPTR));
        hamsterAllergyCheckBox->setText(QApplication::translate("ViewProfile", "Hamster", Q_NULLPTR));
        mouseAllergyCheckBox->setText(QApplication::translate("ViewProfile", "Mouse", Q_NULLPTR));
        guineapigAllergyCheckBox->setText(QApplication::translate("ViewProfile", "Guinea Pig", Q_NULLPTR));
        catAllergyCheckBox->setText(QApplication::translate("ViewProfile", "Cat", Q_NULLPTR));
        allergicLabel_25->setText(QApplication::translate("ViewProfile", "Allergies", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ViewProfile: public Ui_ViewProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPROFILE_H
