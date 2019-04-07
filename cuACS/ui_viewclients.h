/********************************************************************************
** Form generated from reading UI file 'viewclients.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWCLIENTS_H
#define UI_VIEWCLIENTS_H

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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewClients
{
public:
    QListWidget *viewClientsListWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *typePreferenceLabel;
    QLineEdit *attachmentLineEdit_2;
    QCheckBox *guineapigAllergyCheckBox;
    QLineEdit *homeLineEdit;
    QLineEdit *purposeLineEdit;
    QLineEdit *irritationLineEdit;
    QLineEdit *childrenLineEdit;
    QCheckBox *birdAllergyCheckBox;
    QLineEdit *freeTimeLineEdit;
    QCheckBox *mouseAllergyCheckBox;
    QLineEdit *neuteredLineEdit;
    QLabel *sexLabel_4;
    QLabel *requireLabel;
    QLineEdit *salaryLineEdit;
    QCheckBox *dogAllergyCheckBox;
    QLineEdit *sexLineEdit_2;
    QLineEdit *patienceLineEdit;
    QLineEdit *ageLineEdit_2;
    QLabel *attachmentLabel;
    QLineEdit *addressLineEdit;
    QLineEdit *nameLineEdit;
    QLabel *ageLabel_7;
    QLabel *nameLabel_4;
    QLabel *allergicLabel_2;
    QLabel *freeTimeLabel;
    QLineEdit *emailLineEdit;
    QLabel *nameLabel;
    QLabel *childrenLabel;
    QLineEdit *budgetLineEdit;
    QLabel *addressLabel;
    QLabel *salaryLabel;
    QLineEdit *phoneLineEdit;
    QLabel *irritationLabel;
    QLabel *homeTypeLabel;
    QLabel *budgetLabel;
    QLabel *phoneLabel;
    QLineEdit *travelLineEdit;
    QLineEdit *typePreferenceLineEdit;
    QLabel *labelPatience;
    QLabel *travelLabel;
    QCheckBox *catAllergyCheckBox;
    QLabel *purposeLabel;
    QCheckBox *hamsterAllergyCheckBox;
    QDialogButtonBox *buttonBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *titleLabel;

    void setupUi(QDialog *ViewClients)
    {
        if (ViewClients->objectName().isEmpty())
            ViewClients->setObjectName(QStringLiteral("ViewClients"));
        ViewClients->resize(1124, 507);
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
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        QBrush brush4(QColor(145, 141, 126, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush4);
        ViewClients->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Egyptienne F"));
        ViewClients->setFont(font);
        viewClientsListWidget = new QListWidget(ViewClients);
        viewClientsListWidget->setObjectName(QStringLiteral("viewClientsListWidget"));
        viewClientsListWidget->setGeometry(QRect(20, 20, 281, 461));
        gridLayoutWidget = new QWidget(ViewClients);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(320, 80, 781, 399));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        typePreferenceLabel = new QLabel(gridLayoutWidget);
        typePreferenceLabel->setObjectName(QStringLiteral("typePreferenceLabel"));
        typePreferenceLabel->setEnabled(true);

        gridLayout->addWidget(typePreferenceLabel, 4, 1, 1, 1);

        attachmentLineEdit_2 = new QLineEdit(gridLayoutWidget);
        attachmentLineEdit_2->setObjectName(QStringLiteral("attachmentLineEdit_2"));
        attachmentLineEdit_2->setReadOnly(true);

        gridLayout->addWidget(attachmentLineEdit_2, 9, 2, 1, 1);

        guineapigAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        guineapigAllergyCheckBox->setObjectName(QStringLiteral("guineapigAllergyCheckBox"));
        guineapigAllergyCheckBox->setEnabled(false);

        gridLayout->addWidget(guineapigAllergyCheckBox, 8, 3, 1, 1);

        homeLineEdit = new QLineEdit(gridLayoutWidget);
        homeLineEdit->setObjectName(QStringLiteral("homeLineEdit"));
        homeLineEdit->setReadOnly(true);

        gridLayout->addWidget(homeLineEdit, 9, 1, 1, 1);

        purposeLineEdit = new QLineEdit(gridLayoutWidget);
        purposeLineEdit->setObjectName(QStringLiteral("purposeLineEdit"));
        purposeLineEdit->setReadOnly(true);

        gridLayout->addWidget(purposeLineEdit, 7, 1, 1, 1);

        irritationLineEdit = new QLineEdit(gridLayoutWidget);
        irritationLineEdit->setObjectName(QStringLiteral("irritationLineEdit"));
        irritationLineEdit->setReadOnly(true);

        gridLayout->addWidget(irritationLineEdit, 5, 2, 1, 1);

        childrenLineEdit = new QLineEdit(gridLayoutWidget);
        childrenLineEdit->setObjectName(QStringLiteral("childrenLineEdit"));
        childrenLineEdit->setEnabled(true);
        childrenLineEdit->setReadOnly(true);

        gridLayout->addWidget(childrenLineEdit, 1, 1, 1, 1);

        birdAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        birdAllergyCheckBox->setObjectName(QStringLiteral("birdAllergyCheckBox"));
        birdAllergyCheckBox->setEnabled(false);

        gridLayout->addWidget(birdAllergyCheckBox, 5, 3, 1, 1);

        freeTimeLineEdit = new QLineEdit(gridLayoutWidget);
        freeTimeLineEdit->setObjectName(QStringLiteral("freeTimeLineEdit"));
        freeTimeLineEdit->setReadOnly(true);

        gridLayout->addWidget(freeTimeLineEdit, 1, 2, 1, 1);

        mouseAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        mouseAllergyCheckBox->setObjectName(QStringLiteral("mouseAllergyCheckBox"));
        mouseAllergyCheckBox->setEnabled(false);

        gridLayout->addWidget(mouseAllergyCheckBox, 7, 3, 1, 1);

        neuteredLineEdit = new QLineEdit(gridLayoutWidget);
        neuteredLineEdit->setObjectName(QStringLiteral("neuteredLineEdit"));
        neuteredLineEdit->setReadOnly(true);

        gridLayout->addWidget(neuteredLineEdit, 11, 2, 1, 1);

        sexLabel_4 = new QLabel(gridLayoutWidget);
        sexLabel_4->setObjectName(QStringLiteral("sexLabel_4"));
        sexLabel_4->setEnabled(true);

        gridLayout->addWidget(sexLabel_4, 8, 0, 1, 1);

        requireLabel = new QLabel(gridLayoutWidget);
        requireLabel->setObjectName(QStringLiteral("requireLabel"));
        requireLabel->setEnabled(true);

        gridLayout->addWidget(requireLabel, 10, 2, 1, 1);

        salaryLineEdit = new QLineEdit(gridLayoutWidget);
        salaryLineEdit->setObjectName(QStringLiteral("salaryLineEdit"));
        salaryLineEdit->setReadOnly(true);

        gridLayout->addWidget(salaryLineEdit, 3, 1, 1, 1);

        dogAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        dogAllergyCheckBox->setObjectName(QStringLiteral("dogAllergyCheckBox"));
        dogAllergyCheckBox->setEnabled(false);

        gridLayout->addWidget(dogAllergyCheckBox, 4, 3, 1, 1);

        sexLineEdit_2 = new QLineEdit(gridLayoutWidget);
        sexLineEdit_2->setObjectName(QStringLiteral("sexLineEdit_2"));
        sexLineEdit_2->setReadOnly(true);

        gridLayout->addWidget(sexLineEdit_2, 9, 0, 1, 1);

        patienceLineEdit = new QLineEdit(gridLayoutWidget);
        patienceLineEdit->setObjectName(QStringLiteral("patienceLineEdit"));
        patienceLineEdit->setReadOnly(true);

        gridLayout->addWidget(patienceLineEdit, 7, 2, 1, 1);

        ageLineEdit_2 = new QLineEdit(gridLayoutWidget);
        ageLineEdit_2->setObjectName(QStringLiteral("ageLineEdit_2"));
        ageLineEdit_2->setEnabled(true);
        ageLineEdit_2->setReadOnly(true);

        gridLayout->addWidget(ageLineEdit_2, 11, 0, 1, 1);

        attachmentLabel = new QLabel(gridLayoutWidget);
        attachmentLabel->setObjectName(QStringLiteral("attachmentLabel"));
        attachmentLabel->setEnabled(true);

        gridLayout->addWidget(attachmentLabel, 8, 2, 1, 1);

        addressLineEdit = new QLineEdit(gridLayoutWidget);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));
        addressLineEdit->setReadOnly(true);

        gridLayout->addWidget(addressLineEdit, 5, 0, 1, 1);

        nameLineEdit = new QLineEdit(gridLayoutWidget);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setReadOnly(true);

        gridLayout->addWidget(nameLineEdit, 1, 0, 1, 1);

        ageLabel_7 = new QLabel(gridLayoutWidget);
        ageLabel_7->setObjectName(QStringLiteral("ageLabel_7"));
        ageLabel_7->setEnabled(true);

        gridLayout->addWidget(ageLabel_7, 10, 0, 1, 1);

        nameLabel_4 = new QLabel(gridLayoutWidget);
        nameLabel_4->setObjectName(QStringLiteral("nameLabel_4"));
        nameLabel_4->setEnabled(true);

        gridLayout->addWidget(nameLabel_4, 2, 0, 1, 1);

        allergicLabel_2 = new QLabel(gridLayoutWidget);
        allergicLabel_2->setObjectName(QStringLiteral("allergicLabel_2"));
        allergicLabel_2->setEnabled(true);

        gridLayout->addWidget(allergicLabel_2, 2, 3, 1, 1);

        freeTimeLabel = new QLabel(gridLayoutWidget);
        freeTimeLabel->setObjectName(QStringLiteral("freeTimeLabel"));
        freeTimeLabel->setEnabled(true);

        gridLayout->addWidget(freeTimeLabel, 0, 2, 1, 1);

        emailLineEdit = new QLineEdit(gridLayoutWidget);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));
        emailLineEdit->setEnabled(true);
        emailLineEdit->setReadOnly(true);

        gridLayout->addWidget(emailLineEdit, 3, 0, 1, 1);

        nameLabel = new QLabel(gridLayoutWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setEnabled(true);

        gridLayout->addWidget(nameLabel, 0, 0, 1, 1);

        childrenLabel = new QLabel(gridLayoutWidget);
        childrenLabel->setObjectName(QStringLiteral("childrenLabel"));
        childrenLabel->setEnabled(true);

        gridLayout->addWidget(childrenLabel, 0, 1, 1, 1);

        budgetLineEdit = new QLineEdit(gridLayoutWidget);
        budgetLineEdit->setObjectName(QStringLiteral("budgetLineEdit"));
        budgetLineEdit->setEnabled(true);
        budgetLineEdit->setReadOnly(true);

        gridLayout->addWidget(budgetLineEdit, 3, 2, 1, 1);

        addressLabel = new QLabel(gridLayoutWidget);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));
        addressLabel->setEnabled(true);

        gridLayout->addWidget(addressLabel, 4, 0, 1, 1);

        salaryLabel = new QLabel(gridLayoutWidget);
        salaryLabel->setObjectName(QStringLiteral("salaryLabel"));
        salaryLabel->setEnabled(true);

        gridLayout->addWidget(salaryLabel, 2, 1, 1, 1);

        phoneLineEdit = new QLineEdit(gridLayoutWidget);
        phoneLineEdit->setObjectName(QStringLiteral("phoneLineEdit"));
        phoneLineEdit->setReadOnly(true);

        gridLayout->addWidget(phoneLineEdit, 7, 0, 1, 1);

        irritationLabel = new QLabel(gridLayoutWidget);
        irritationLabel->setObjectName(QStringLiteral("irritationLabel"));
        irritationLabel->setEnabled(true);

        gridLayout->addWidget(irritationLabel, 4, 2, 1, 1);

        homeTypeLabel = new QLabel(gridLayoutWidget);
        homeTypeLabel->setObjectName(QStringLiteral("homeTypeLabel"));
        homeTypeLabel->setEnabled(true);

        gridLayout->addWidget(homeTypeLabel, 8, 1, 1, 1);

        budgetLabel = new QLabel(gridLayoutWidget);
        budgetLabel->setObjectName(QStringLiteral("budgetLabel"));
        budgetLabel->setEnabled(true);

        gridLayout->addWidget(budgetLabel, 2, 2, 1, 1);

        phoneLabel = new QLabel(gridLayoutWidget);
        phoneLabel->setObjectName(QStringLiteral("phoneLabel"));
        phoneLabel->setEnabled(true);

        gridLayout->addWidget(phoneLabel, 6, 0, 1, 1);

        travelLineEdit = new QLineEdit(gridLayoutWidget);
        travelLineEdit->setObjectName(QStringLiteral("travelLineEdit"));
        travelLineEdit->setReadOnly(true);

        gridLayout->addWidget(travelLineEdit, 11, 1, 1, 1);

        typePreferenceLineEdit = new QLineEdit(gridLayoutWidget);
        typePreferenceLineEdit->setObjectName(QStringLiteral("typePreferenceLineEdit"));
        typePreferenceLineEdit->setReadOnly(true);

        gridLayout->addWidget(typePreferenceLineEdit, 5, 1, 1, 1);

        labelPatience = new QLabel(gridLayoutWidget);
        labelPatience->setObjectName(QStringLiteral("labelPatience"));
        labelPatience->setEnabled(true);

        gridLayout->addWidget(labelPatience, 6, 2, 1, 1);

        travelLabel = new QLabel(gridLayoutWidget);
        travelLabel->setObjectName(QStringLiteral("travelLabel"));
        travelLabel->setEnabled(true);

        gridLayout->addWidget(travelLabel, 10, 1, 1, 1);

        catAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        catAllergyCheckBox->setObjectName(QStringLiteral("catAllergyCheckBox"));
        catAllergyCheckBox->setEnabled(false);

        gridLayout->addWidget(catAllergyCheckBox, 3, 3, 1, 1);

        purposeLabel = new QLabel(gridLayoutWidget);
        purposeLabel->setObjectName(QStringLiteral("purposeLabel"));
        purposeLabel->setEnabled(true);

        gridLayout->addWidget(purposeLabel, 6, 1, 1, 1);

        hamsterAllergyCheckBox = new QCheckBox(gridLayoutWidget);
        hamsterAllergyCheckBox->setObjectName(QStringLiteral("hamsterAllergyCheckBox"));
        hamsterAllergyCheckBox->setEnabled(false);

        gridLayout->addWidget(hamsterAllergyCheckBox, 6, 3, 1, 1);

        buttonBox = new QDialogButtonBox(gridLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 11, 3, 1, 1);

        gridLayout->setColumnStretch(0, 3);
        horizontalLayoutWidget = new QWidget(ViewClients);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(322, 10, 781, 61));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        titleLabel = new QLabel(horizontalLayoutWidget);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QFont font1;
        font1.setPointSize(24);
        titleLabel->setFont(font1);
        titleLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(titleLabel);

        QWidget::setTabOrder(viewClientsListWidget, nameLineEdit);
        QWidget::setTabOrder(nameLineEdit, childrenLineEdit);
        QWidget::setTabOrder(childrenLineEdit, freeTimeLineEdit);
        QWidget::setTabOrder(freeTimeLineEdit, emailLineEdit);
        QWidget::setTabOrder(emailLineEdit, salaryLineEdit);
        QWidget::setTabOrder(salaryLineEdit, budgetLineEdit);
        QWidget::setTabOrder(budgetLineEdit, addressLineEdit);
        QWidget::setTabOrder(addressLineEdit, typePreferenceLineEdit);
        QWidget::setTabOrder(typePreferenceLineEdit, irritationLineEdit);
        QWidget::setTabOrder(irritationLineEdit, phoneLineEdit);
        QWidget::setTabOrder(phoneLineEdit, purposeLineEdit);
        QWidget::setTabOrder(purposeLineEdit, patienceLineEdit);
        QWidget::setTabOrder(patienceLineEdit, sexLineEdit_2);
        QWidget::setTabOrder(sexLineEdit_2, homeLineEdit);
        QWidget::setTabOrder(homeLineEdit, attachmentLineEdit_2);
        QWidget::setTabOrder(attachmentLineEdit_2, ageLineEdit_2);
        QWidget::setTabOrder(ageLineEdit_2, travelLineEdit);
        QWidget::setTabOrder(travelLineEdit, neuteredLineEdit);
        QWidget::setTabOrder(neuteredLineEdit, catAllergyCheckBox);
        QWidget::setTabOrder(catAllergyCheckBox, dogAllergyCheckBox);
        QWidget::setTabOrder(dogAllergyCheckBox, birdAllergyCheckBox);
        QWidget::setTabOrder(birdAllergyCheckBox, hamsterAllergyCheckBox);
        QWidget::setTabOrder(hamsterAllergyCheckBox, mouseAllergyCheckBox);
        QWidget::setTabOrder(mouseAllergyCheckBox, guineapigAllergyCheckBox);

        retranslateUi(ViewClients);
        QObject::connect(buttonBox, SIGNAL(rejected()), ViewClients, SLOT(reject()));

        QMetaObject::connectSlotsByName(ViewClients);
    } // setupUi

    void retranslateUi(QDialog *ViewClients)
    {
        ViewClients->setWindowTitle(QApplication::translate("ViewClients", "Dialog", Q_NULLPTR));
        typePreferenceLabel->setText(QApplication::translate("ViewClients", "<html><head/><body><p>Type Preference</p></body></html>", Q_NULLPTR));
        guineapigAllergyCheckBox->setText(QApplication::translate("ViewClients", "Guinea Pig", Q_NULLPTR));
        birdAllergyCheckBox->setText(QApplication::translate("ViewClients", "Bird", Q_NULLPTR));
        mouseAllergyCheckBox->setText(QApplication::translate("ViewClients", "Mouse", Q_NULLPTR));
        sexLabel_4->setText(QApplication::translate("ViewClients", "Sex", Q_NULLPTR));
        requireLabel->setText(QApplication::translate("ViewClients", "<html><head/><body><p>Requested Neutered/Spayed</p></body></html>", Q_NULLPTR));
        dogAllergyCheckBox->setText(QApplication::translate("ViewClients", "Dog", Q_NULLPTR));
        attachmentLabel->setText(QApplication::translate("ViewClients", "Attachment Level (Out of 10)", Q_NULLPTR));
        ageLabel_7->setText(QApplication::translate("ViewClients", "Age", Q_NULLPTR));
        nameLabel_4->setText(QApplication::translate("ViewClients", "Email", Q_NULLPTR));
        allergicLabel_2->setText(QApplication::translate("ViewClients", "Allergies", Q_NULLPTR));
        freeTimeLabel->setText(QApplication::translate("ViewClients", "Free Time per Day (hours)", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("ViewClients", "Name", Q_NULLPTR));
        childrenLabel->setText(QApplication::translate("ViewClients", "Number of Children", Q_NULLPTR));
        addressLabel->setText(QApplication::translate("ViewClients", "Address", Q_NULLPTR));
        salaryLabel->setText(QApplication::translate("ViewClients", "<html><head/><body><p>Salary (thousands/year)</p></body></html>", Q_NULLPTR));
        irritationLabel->setText(QApplication::translate("ViewClients", "<html><head/><body><p>Irritation to Noise (Out of 10)</p></body></html>", Q_NULLPTR));
        homeTypeLabel->setText(QApplication::translate("ViewClients", "Home Type", Q_NULLPTR));
        budgetLabel->setText(QApplication::translate("ViewClients", "Budget", Q_NULLPTR));
        phoneLabel->setText(QApplication::translate("ViewClients", "Phone Number", Q_NULLPTR));
        labelPatience->setText(QApplication::translate("ViewClients", "Patience (Out of 10)", Q_NULLPTR));
        travelLabel->setText(QApplication::translate("ViewClients", "<html><head/><body><p>Amount of Travel Each Year</p></body></html>", Q_NULLPTR));
        catAllergyCheckBox->setText(QApplication::translate("ViewClients", "Cat", Q_NULLPTR));
        purposeLabel->setText(QApplication::translate("ViewClients", "Purpose", Q_NULLPTR));
        hamsterAllergyCheckBox->setText(QApplication::translate("ViewClients", "Hamster", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("ViewClients", "<html><head/><body><p>No Clients are Currently Available</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ViewClients: public Ui_ViewClients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWCLIENTS_H
