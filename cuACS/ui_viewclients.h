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
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewClients
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *titleLabel;
    QListWidget *viewClientsListWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *nameLabel_4;
    QLineEdit *nameLineEdit_2;
    QLabel *sexLabel_4;
    QLineEdit *sexLineEdit_2;
    QLabel *ageLabel_7;
    QLineEdit *ageLineEdit_2;
    QLabel *childrenLabel;
    QLineEdit *childrenLineEdit;
    QLabel *salaryLabel;
    QLineEdit *salaryLineEdit;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *budgetLabel;
    QLineEdit *budgetLineEdit;
    QLabel *irritationLabel;
    QLineEdit *irritationLineEdit;
    QLabel *labelPatience;
    QLineEdit *patienceLineEdit;
    QLabel *attachmentLabel;
    QLineEdit *attachmentLineEdit_2;
    QLabel *requireLabel;
    QLineEdit *neuteredLineEdit;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_7;
    QLabel *allergicLabel;
    QLineEdit *allergyLineEdit;
    QLabel *purposeLabel;
    QLineEdit *purposeLineEdit;
    QLabel *homeTypeLabel;
    QLineEdit *homeLineEdit;
    QLabel *travelLabel;
    QLineEdit *travelLineEdit;
    QLabel *freeTimeLabel;
    QLineEdit *freeTimeLineEdit;

    void setupUi(QDialog *ViewClients)
    {
        if (ViewClients->objectName().isEmpty())
            ViewClients->setObjectName(QStringLiteral("ViewClients"));
        ViewClients->resize(1116, 527);
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
        ViewClients->setPalette(palette);
        buttonBox = new QDialogButtonBox(ViewClients);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(720, 460, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        titleLabel = new QLabel(ViewClients);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(340, 30, 581, 41));
        QFont font;
        font.setPointSize(24);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignCenter);
        viewClientsListWidget = new QListWidget(ViewClients);
        viewClientsListWidget->setObjectName(QStringLiteral("viewClientsListWidget"));
        viewClientsListWidget->setGeometry(QRect(20, 40, 281, 461));
        layoutWidget = new QWidget(ViewClients);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setEnabled(true);
        layoutWidget->setGeometry(QRect(320, 100, 251, 320));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        nameLabel_4 = new QLabel(layoutWidget);
        nameLabel_4->setObjectName(QStringLiteral("nameLabel_4"));
        nameLabel_4->setEnabled(true);

        verticalLayout_5->addWidget(nameLabel_4);

        nameLineEdit_2 = new QLineEdit(layoutWidget);
        nameLineEdit_2->setObjectName(QStringLiteral("nameLineEdit_2"));
        nameLineEdit_2->setEnabled(true);

        verticalLayout_5->addWidget(nameLineEdit_2);

        sexLabel_4 = new QLabel(layoutWidget);
        sexLabel_4->setObjectName(QStringLiteral("sexLabel_4"));
        sexLabel_4->setEnabled(true);

        verticalLayout_5->addWidget(sexLabel_4);

        sexLineEdit_2 = new QLineEdit(layoutWidget);
        sexLineEdit_2->setObjectName(QStringLiteral("sexLineEdit_2"));

        verticalLayout_5->addWidget(sexLineEdit_2);

        ageLabel_7 = new QLabel(layoutWidget);
        ageLabel_7->setObjectName(QStringLiteral("ageLabel_7"));
        ageLabel_7->setEnabled(true);

        verticalLayout_5->addWidget(ageLabel_7);

        ageLineEdit_2 = new QLineEdit(layoutWidget);
        ageLineEdit_2->setObjectName(QStringLiteral("ageLineEdit_2"));
        ageLineEdit_2->setEnabled(true);

        verticalLayout_5->addWidget(ageLineEdit_2);

        childrenLabel = new QLabel(layoutWidget);
        childrenLabel->setObjectName(QStringLiteral("childrenLabel"));
        childrenLabel->setEnabled(true);

        verticalLayout_5->addWidget(childrenLabel);

        childrenLineEdit = new QLineEdit(layoutWidget);
        childrenLineEdit->setObjectName(QStringLiteral("childrenLineEdit"));
        childrenLineEdit->setEnabled(true);

        verticalLayout_5->addWidget(childrenLineEdit);

        salaryLabel = new QLabel(layoutWidget);
        salaryLabel->setObjectName(QStringLiteral("salaryLabel"));
        salaryLabel->setEnabled(true);

        verticalLayout_5->addWidget(salaryLabel);

        salaryLineEdit = new QLineEdit(layoutWidget);
        salaryLineEdit->setObjectName(QStringLiteral("salaryLineEdit"));

        verticalLayout_5->addWidget(salaryLineEdit);

        layoutWidget_4 = new QWidget(ViewClients);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setEnabled(true);
        layoutWidget_4->setGeometry(QRect(840, 100, 251, 321));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        budgetLabel = new QLabel(layoutWidget_4);
        budgetLabel->setObjectName(QStringLiteral("budgetLabel"));
        budgetLabel->setEnabled(true);

        verticalLayout_6->addWidget(budgetLabel);

        budgetLineEdit = new QLineEdit(layoutWidget_4);
        budgetLineEdit->setObjectName(QStringLiteral("budgetLineEdit"));
        budgetLineEdit->setEnabled(true);

        verticalLayout_6->addWidget(budgetLineEdit);

        irritationLabel = new QLabel(layoutWidget_4);
        irritationLabel->setObjectName(QStringLiteral("irritationLabel"));
        irritationLabel->setEnabled(true);

        verticalLayout_6->addWidget(irritationLabel);

        irritationLineEdit = new QLineEdit(layoutWidget_4);
        irritationLineEdit->setObjectName(QStringLiteral("irritationLineEdit"));

        verticalLayout_6->addWidget(irritationLineEdit);

        labelPatience = new QLabel(layoutWidget_4);
        labelPatience->setObjectName(QStringLiteral("labelPatience"));
        labelPatience->setEnabled(true);

        verticalLayout_6->addWidget(labelPatience);

        patienceLineEdit = new QLineEdit(layoutWidget_4);
        patienceLineEdit->setObjectName(QStringLiteral("patienceLineEdit"));

        verticalLayout_6->addWidget(patienceLineEdit);

        attachmentLabel = new QLabel(layoutWidget_4);
        attachmentLabel->setObjectName(QStringLiteral("attachmentLabel"));
        attachmentLabel->setEnabled(true);

        verticalLayout_6->addWidget(attachmentLabel);

        attachmentLineEdit_2 = new QLineEdit(layoutWidget_4);
        attachmentLineEdit_2->setObjectName(QStringLiteral("attachmentLineEdit_2"));

        verticalLayout_6->addWidget(attachmentLineEdit_2);

        requireLabel = new QLabel(layoutWidget_4);
        requireLabel->setObjectName(QStringLiteral("requireLabel"));
        requireLabel->setEnabled(true);

        verticalLayout_6->addWidget(requireLabel);

        neuteredLineEdit = new QLineEdit(layoutWidget_4);
        neuteredLineEdit->setObjectName(QStringLiteral("neuteredLineEdit"));

        verticalLayout_6->addWidget(neuteredLineEdit);

        layoutWidget_2 = new QWidget(ViewClients);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setEnabled(true);
        layoutWidget_2->setGeometry(QRect(580, 100, 254, 321));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        allergicLabel = new QLabel(layoutWidget_2);
        allergicLabel->setObjectName(QStringLiteral("allergicLabel"));
        allergicLabel->setEnabled(true);

        verticalLayout_7->addWidget(allergicLabel);

        allergyLineEdit = new QLineEdit(layoutWidget_2);
        allergyLineEdit->setObjectName(QStringLiteral("allergyLineEdit"));

        verticalLayout_7->addWidget(allergyLineEdit);

        purposeLabel = new QLabel(layoutWidget_2);
        purposeLabel->setObjectName(QStringLiteral("purposeLabel"));
        purposeLabel->setEnabled(true);

        verticalLayout_7->addWidget(purposeLabel);

        purposeLineEdit = new QLineEdit(layoutWidget_2);
        purposeLineEdit->setObjectName(QStringLiteral("purposeLineEdit"));

        verticalLayout_7->addWidget(purposeLineEdit);

        homeTypeLabel = new QLabel(layoutWidget_2);
        homeTypeLabel->setObjectName(QStringLiteral("homeTypeLabel"));
        homeTypeLabel->setEnabled(true);

        verticalLayout_7->addWidget(homeTypeLabel);

        homeLineEdit = new QLineEdit(layoutWidget_2);
        homeLineEdit->setObjectName(QStringLiteral("homeLineEdit"));

        verticalLayout_7->addWidget(homeLineEdit);

        travelLabel = new QLabel(layoutWidget_2);
        travelLabel->setObjectName(QStringLiteral("travelLabel"));
        travelLabel->setEnabled(true);

        verticalLayout_7->addWidget(travelLabel);

        travelLineEdit = new QLineEdit(layoutWidget_2);
        travelLineEdit->setObjectName(QStringLiteral("travelLineEdit"));

        verticalLayout_7->addWidget(travelLineEdit);

        freeTimeLabel = new QLabel(layoutWidget_2);
        freeTimeLabel->setObjectName(QStringLiteral("freeTimeLabel"));
        freeTimeLabel->setEnabled(true);

        verticalLayout_7->addWidget(freeTimeLabel);

        freeTimeLineEdit = new QLineEdit(layoutWidget_2);
        freeTimeLineEdit->setObjectName(QStringLiteral("freeTimeLineEdit"));

        verticalLayout_7->addWidget(freeTimeLineEdit);


        retranslateUi(ViewClients);
        QObject::connect(buttonBox, SIGNAL(accepted()), ViewClients, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ViewClients, SLOT(reject()));

        QMetaObject::connectSlotsByName(ViewClients);
    } // setupUi

    void retranslateUi(QDialog *ViewClients)
    {
        ViewClients->setWindowTitle(QApplication::translate("ViewClients", "Dialog", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("ViewClients", "<html><head/><body><p>No Clients are Currently Available</p></body></html>", Q_NULLPTR));
        nameLabel_4->setText(QApplication::translate("ViewClients", "Name", Q_NULLPTR));
        sexLabel_4->setText(QApplication::translate("ViewClients", "Sex", Q_NULLPTR));
        ageLabel_7->setText(QApplication::translate("ViewClients", "Age", Q_NULLPTR));
        childrenLabel->setText(QApplication::translate("ViewClients", "Number of Children", Q_NULLPTR));
        salaryLabel->setText(QApplication::translate("ViewClients", "<html><head/><body><p>Salary (thousands/year)</p></body></html>", Q_NULLPTR));
        budgetLabel->setText(QApplication::translate("ViewClients", "Budget", Q_NULLPTR));
        irritationLabel->setText(QApplication::translate("ViewClients", "<html><head/><body><p>Irritation to Noise (Out of 10)</p></body></html>", Q_NULLPTR));
        labelPatience->setText(QApplication::translate("ViewClients", "Patience (Out of 10)", Q_NULLPTR));
        attachmentLabel->setText(QApplication::translate("ViewClients", "Attachment Level (Out of 10)", Q_NULLPTR));
        requireLabel->setText(QApplication::translate("ViewClients", "<html><head/><body><p>Requested Neutered/Spayed</p></body></html>", Q_NULLPTR));
        allergicLabel->setText(QApplication::translate("ViewClients", "Allergic", Q_NULLPTR));
        purposeLabel->setText(QApplication::translate("ViewClients", "Purpose", Q_NULLPTR));
        homeTypeLabel->setText(QApplication::translate("ViewClients", "Home Type", Q_NULLPTR));
        travelLabel->setText(QApplication::translate("ViewClients", "<html><head/><body><p>Amount of Travel Each Year</p></body></html>", Q_NULLPTR));
        freeTimeLabel->setText(QApplication::translate("ViewClients", "Free Time per Day (hours)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ViewClients: public Ui_ViewClients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWCLIENTS_H
