/********************************************************************************
** Form generated from reading UI file 'viewmatches.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWMATCHES_H
#define UI_VIEWMATCHES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewMatches
{
public:
    QDialogButtonBox *buttonBox;
    QListWidget *viewMatchesListWidget;
    QLabel *summaryLabel;
    QLabel *titleLabel;

    void setupUi(QDialog *ViewMatches)
    {
        if (ViewMatches->objectName().isEmpty())
            ViewMatches->setObjectName(QStringLiteral("ViewMatches"));
        ViewMatches->resize(1055, 524);
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
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        QBrush brush3(QColor(145, 145, 145, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush3);
        ViewMatches->setPalette(palette);
        buttonBox = new QDialogButtonBox(ViewMatches);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(700, 480, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        viewMatchesListWidget = new QListWidget(ViewMatches);
        viewMatchesListWidget->setObjectName(QStringLiteral("viewMatchesListWidget"));
        viewMatchesListWidget->setGeometry(QRect(20, 130, 481, 331));
        summaryLabel = new QLabel(ViewMatches);
        summaryLabel->setObjectName(QStringLiteral("summaryLabel"));
        summaryLabel->setGeometry(QRect(540, 130, 481, 331));
        QFont font;
        font.setPointSize(11);
        summaryLabel->setFont(font);
        summaryLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        titleLabel = new QLabel(ViewMatches);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(8, 30, 1041, 59));
        QFont font1;
        font1.setPointSize(24);
        titleLabel->setFont(font1);
        titleLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(ViewMatches);
        QObject::connect(buttonBox, SIGNAL(rejected()), ViewMatches, SLOT(reject()));

        QMetaObject::connectSlotsByName(ViewMatches);
    } // setupUi

    void retranslateUi(QDialog *ViewMatches)
    {
        ViewMatches->setWindowTitle(QApplication::translate("ViewMatches", "Dialog", Q_NULLPTR));
        summaryLabel->setText(QApplication::translate("ViewMatches", "<html><head/><body><p><span style=\" color:#C8102E;\">Matching Summary (pair scoring percentages)</span></p></body></html>", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("ViewMatches", "<html><head/><body><p>cuACS ACM Results</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ViewMatches: public Ui_ViewMatches {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWMATCHES_H
