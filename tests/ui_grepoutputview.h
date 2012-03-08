#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'grepoutputview.ui'
**
** Created: Thu Mar 8 09:23:15 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GREPOUTPUTVIEW_H
#define UI_GREPOUTPUTVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_GrepOutputView
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QWidget *statusbar;
    QHBoxLayout *horizontalLayout;
    KComboBox *modelSelector;
    QLabel *replacementLabel;
    KComboBox *replacementCombo;
    QPushButton *applyButton;
    QTreeView *resultsTreeView;

    void setupUi(QWidget *GrepOutputView)
    {
        if (GrepOutputView->objectName().isEmpty())
            GrepOutputView->setObjectName(QString::fromUtf8("GrepOutputView"));
        GrepOutputView->resize(746, 300);
        gridLayout = new QGridLayout(GrepOutputView);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        statusbar = new QWidget(GrepOutputView);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        horizontalLayout = new QHBoxLayout(statusbar);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        modelSelector = new KComboBox(statusbar);
        modelSelector->setObjectName(QString::fromUtf8("modelSelector"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(modelSelector->sizePolicy().hasHeightForWidth());
        modelSelector->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(modelSelector);

        replacementLabel = new QLabel(statusbar);
        replacementLabel->setObjectName(QString::fromUtf8("replacementLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(replacementLabel->sizePolicy().hasHeightForWidth());
        replacementLabel->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(replacementLabel);

        replacementCombo = new KComboBox(statusbar);
        replacementCombo->setObjectName(QString::fromUtf8("replacementCombo"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(replacementCombo->sizePolicy().hasHeightForWidth());
        replacementCombo->setSizePolicy(sizePolicy2);
        replacementCombo->setEditable(true);

        horizontalLayout->addWidget(replacementCombo);

        applyButton = new QPushButton(statusbar);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(applyButton->sizePolicy().hasHeightForWidth());
        applyButton->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(applyButton);


        verticalLayout->addWidget(statusbar);

        resultsTreeView = new QTreeView(GrepOutputView);
        resultsTreeView->setObjectName(QString::fromUtf8("resultsTreeView"));

        verticalLayout->addWidget(resultsTreeView);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(GrepOutputView);

        QMetaObject::connectSlotsByName(GrepOutputView);
    } // setupUi

    void retranslateUi(QWidget *GrepOutputView)
    {
        replacementLabel->setText(tr2i18n("Replacement Text:", 0));
#ifndef UI_QT_NO_TOOLTIP
        replacementCombo->setToolTip(tr2i18n("Enter the replacement pattern.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_TOOLTIP
        applyButton->setToolTip(tr2i18n("Apply replacement on selected items.", 0));
#endif // QT_NO_TOOLTIP
        applyButton->setText(tr2i18n("Replace", 0));
        Q_UNUSED(GrepOutputView);
    } // retranslateUi

};

namespace Ui {
    class GrepOutputView: public Ui_GrepOutputView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GREPOUTPUTVIEW_H

