#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'grepwidget.ui'
**
** Created: Thu Mar 8 15:19:28 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GREPWIDGET_H
#define UI_GREPWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "kcombobox.h"
#include "kpushbutton.h"
#include "kurlrequester.h"

QT_BEGIN_NAMESPACE

class Ui_GrepWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_8;
    KComboBox *patternCombo;
    QLabel *label_9;
    KComboBox *templateEdit;
    KComboBox *templateTypeCombo;
    QLabel *label_10;
    QCheckBox *regexCheck;
    QLabel *label_11;
    QCheckBox *caseSensitiveCheck;
    QLabel *label_5;
    QSpacerItem *spacerItem;
    KUrlRequester *directoryRequester;
    KPushButton *syncButton;
    QLabel *label_6;
    QCheckBox *recursiveCheck;
    QLabel *limitToProjectLabel;
    QCheckBox *limitToProjectCheck;
    KComboBox *filesCombo;
    QLabel *label_2;
    KComboBox *excludeCombo;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;
    KComboBox *replacementTemplateEdit;
    QLabel *label_4;
    QCheckBox *excludeCommentsCheck;

    void setupUi(QWidget *GrepWidget)
    {
        if (GrepWidget->objectName().isEmpty())
            GrepWidget->setObjectName(QString::fromUtf8("GrepWidget"));
        GrepWidget->resize(730, 330);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GrepWidget->sizePolicy().hasHeightForWidth());
        GrepWidget->setSizePolicy(sizePolicy);
        GrepWidget->setMinimumSize(QSize(730, 0));
        GrepWidget->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(GrepWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(GrepWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 6, 0, 1, 1);

        label_8 = new QLabel(GrepWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        patternCombo = new KComboBox(GrepWidget);
        patternCombo->setObjectName(QString::fromUtf8("patternCombo"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(patternCombo->sizePolicy().hasHeightForWidth());
        patternCombo->setSizePolicy(sizePolicy1);
        patternCombo->setEditable(true);
        patternCombo->setAutoCompletion(false);

        gridLayout->addWidget(patternCombo, 0, 1, 1, 5);

        label_9 = new QLabel(GrepWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        templateEdit = new KComboBox(GrepWidget);
        templateEdit->setObjectName(QString::fromUtf8("templateEdit"));

        gridLayout->addWidget(templateEdit, 1, 1, 1, 3);

        templateTypeCombo = new KComboBox(GrepWidget);
        templateTypeCombo->setObjectName(QString::fromUtf8("templateTypeCombo"));

        gridLayout->addWidget(templateTypeCombo, 1, 4, 1, 2);

        label_10 = new QLabel(GrepWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 3, 0, 1, 1);

        regexCheck = new QCheckBox(GrepWidget);
        regexCheck->setObjectName(QString::fromUtf8("regexCheck"));
        regexCheck->setChecked(true);

        gridLayout->addWidget(regexCheck, 3, 1, 1, 1);

        label_11 = new QLabel(GrepWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 3, 2, 1, 1);

        caseSensitiveCheck = new QCheckBox(GrepWidget);
        caseSensitiveCheck->setObjectName(QString::fromUtf8("caseSensitiveCheck"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(caseSensitiveCheck->sizePolicy().hasHeightForWidth());
        caseSensitiveCheck->setSizePolicy(sizePolicy2);
        caseSensitiveCheck->setChecked(true);

        gridLayout->addWidget(caseSensitiveCheck, 3, 3, 1, 1);

        label_5 = new QLabel(GrepWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        spacerItem = new QSpacerItem(41, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 9, 1, 1, 1);

        directoryRequester = new KUrlRequester(GrepWidget);
        directoryRequester->setObjectName(QString::fromUtf8("directoryRequester"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(directoryRequester->sizePolicy().hasHeightForWidth());
        directoryRequester->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(directoryRequester, 4, 1, 1, 4);

        syncButton = new KPushButton(GrepWidget);
        syncButton->setObjectName(QString::fromUtf8("syncButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(syncButton->sizePolicy().hasHeightForWidth());
        syncButton->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(syncButton, 4, 5, 1, 1);

        label_6 = new QLabel(GrepWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        recursiveCheck = new QCheckBox(GrepWidget);
        recursiveCheck->setObjectName(QString::fromUtf8("recursiveCheck"));
        recursiveCheck->setChecked(true);

        gridLayout->addWidget(recursiveCheck, 5, 1, 1, 1);

        limitToProjectLabel = new QLabel(GrepWidget);
        limitToProjectLabel->setObjectName(QString::fromUtf8("limitToProjectLabel"));
        limitToProjectLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(limitToProjectLabel, 5, 2, 1, 1);

        limitToProjectCheck = new QCheckBox(GrepWidget);
        limitToProjectCheck->setObjectName(QString::fromUtf8("limitToProjectCheck"));
        sizePolicy2.setHeightForWidth(limitToProjectCheck->sizePolicy().hasHeightForWidth());
        limitToProjectCheck->setSizePolicy(sizePolicy2);
        limitToProjectCheck->setChecked(true);

        gridLayout->addWidget(limitToProjectCheck, 5, 3, 1, 1);

        filesCombo = new KComboBox(GrepWidget);
        filesCombo->setObjectName(QString::fromUtf8("filesCombo"));
        filesCombo->setEditable(true);
        filesCombo->setAutoCompletion(false);

        gridLayout->addWidget(filesCombo, 6, 1, 1, 5);

        label_2 = new QLabel(GrepWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 7, 0, 1, 1);

        excludeCombo = new KComboBox(GrepWidget);
        excludeCombo->setObjectName(QString::fromUtf8("excludeCombo"));
        excludeCombo->setEditable(true);
        excludeCombo->setAutoCompletion(false);

        gridLayout->addWidget(excludeCombo, 7, 1, 1, 5);

        spacerItem1 = new QSpacerItem(141, 16, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 9, 0, 1, 1);

        spacerItem2 = new QSpacerItem(151, 31, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 9, 2, 1, 1);

        spacerItem3 = new QSpacerItem(361, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem3, 9, 3, 1, 3);

        replacementTemplateEdit = new KComboBox(GrepWidget);
        replacementTemplateEdit->setObjectName(QString::fromUtf8("replacementTemplateEdit"));

        gridLayout->addWidget(replacementTemplateEdit, 2, 1, 1, 3);

        label_4 = new QLabel(GrepWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        excludeCommentsCheck = new QCheckBox(GrepWidget);
        excludeCommentsCheck->setObjectName(QString::fromUtf8("excludeCommentsCheck"));

        gridLayout->addWidget(excludeCommentsCheck, 8, 1, 1, 1);

#ifndef UI_QT_NO_SHORTCUT
        label->setBuddy(filesCombo);
        label_8->setBuddy(patternCombo);
        label_9->setBuddy(templateEdit);
        label_10->setBuddy(regexCheck);
        label_11->setBuddy(caseSensitiveCheck);
        label_5->setBuddy(directoryRequester);
        label_6->setBuddy(recursiveCheck);
        limitToProjectLabel->setBuddy(limitToProjectCheck);
        label_2->setBuddy(excludeCombo);
        label_4->setBuddy(replacementTemplateEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(patternCombo, templateEdit);
        QWidget::setTabOrder(templateEdit, templateTypeCombo);
        QWidget::setTabOrder(templateTypeCombo, replacementTemplateEdit);
        QWidget::setTabOrder(replacementTemplateEdit, regexCheck);
        QWidget::setTabOrder(regexCheck, caseSensitiveCheck);
        QWidget::setTabOrder(caseSensitiveCheck, directoryRequester);
        QWidget::setTabOrder(directoryRequester, syncButton);
        QWidget::setTabOrder(syncButton, recursiveCheck);
        QWidget::setTabOrder(recursiveCheck, limitToProjectCheck);
        QWidget::setTabOrder(limitToProjectCheck, filesCombo);
        QWidget::setTabOrder(filesCombo, excludeCombo);

        retranslateUi(GrepWidget);

        QMetaObject::connectSlotsByName(GrepWidget);
    } // setupUi

    void retranslateUi(QWidget *GrepWidget)
    {
        GrepWidget->setWindowTitle(tr2i18n("Find-Replace In Files", 0));
        label->setText(tr2i18n("Files:", 0));
        label_8->setText(tr2i18n("Pattern:", 0));
#ifndef UI_QT_NO_TOOLTIP
        patternCombo->setToolTip(tr2i18n("Enter the regular expression you want to search for here.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        patternCombo->setWhatsThis(tr2i18n("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter the regular expression you want to search for here.</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">If you do not check \"Regular Expression\" below, this is considered a raw string. That means, all meta characters are escaped.</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Possible meta characters are:</p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: "
                        "0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">.</span> - Matches any character</li>\n"
"<li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">^</span> - Matches the beginning of a line</li>\n"
"<li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">$</span> - Matches the end of a line</li>\n"
"<li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\\b</span> - Matches a word boundary</li>\n"
"<li style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\\s</span> - Matches any white"
                        "space character</li></ul>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The following repetition operators exist:</p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">?</span> - The preceding item is matched at most once</li>\n"
"<li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">*</span> - The preceding item is matched zero or more times</li>\n"
"<li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">+</span> - The preceding item is matched one or more times</li>\n"
"<li style=\" margin-top:0px; margin-bottom:0px;"
                        " margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">{</span><span style=\" font-weight:600; font-style:italic;\">n</span><span style=\" font-weight:600;\">}</span> - The preceding item is matched exactly <span style=\" font-style:italic;\">n</span> times</li>\n"
"<li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">{</span><span style=\" font-weight:600; font-style:italic;\">n</span><span style=\" font-weight:600;\">,}</span> - The preceding item is matched <span style=\" font-style:italic;\">n</span> or more times</li>\n"
"<li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">{,</span><span style=\" font-weight:600; font-style:italic;\">n</span><span style=\" font-weight:600;\">}</span> - The preceding item is matched at most <span style=\" font-style:"
                        "italic;\">n</span> times</li>\n"
"<li style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">{</span><span style=\" font-weight:600; font-style:italic;\">n</span><span style=\" font-weight:600;\">,</span><span style=\" font-weight:600; font-style:italic;\">m</span><span style=\" font-weight:600;\">}</span> - The preceding item is matched at least <span style=\" font-style:italic;\">n</span>, but at most <span style=\" font-style:italic;\">m</span> times.</li></ul>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Furthermore, backreferences to bracketed subexpressions are available via the notation \\<span style=\" font-style:italic;\">n</span>.</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">For further reference, look at <a href=\"http://www.pcre.org\"><spa"
                        "n style=\" text-decoration: underline; color:#0057ae;\">www.pcre.org</span></a> or <span style=\" font-style:italic;\">man pcresyntax.</span></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        label_9->setText(tr2i18n("Template:", 0));
#ifndef UI_QT_NO_TOOLTIP
        templateEdit->setToolTip(tr2i18n("This is the regular expression template.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        templateEdit->setWhatsThis(tr2i18n("This is the regular expression template. <i>%s</i> will be replaced by the pattern, while <i>%%</i> will be replaced by <i>%</i>.", 0));
#endif // QT_NO_WHATSTHIS
        label_10->setText(tr2i18n("Regular Expression:", 0));
#ifndef UI_QT_NO_TOOLTIP
        regexCheck->setToolTip(tr2i18n("Enable or disable regular expression.", 0));
#endif // QT_NO_TOOLTIP
        regexCheck->setText(QString());
        label_11->setText(tr2i18n("Case Sensitive:", 0));
#ifndef UI_QT_NO_TOOLTIP
        caseSensitiveCheck->setToolTip(tr2i18n("Case-sensitive searching.", 0));
#endif // QT_NO_TOOLTIP
        caseSensitiveCheck->setText(QString());
        label_5->setText(tr2i18n("Location(s):", 0));
#ifndef UI_QT_NO_TOOLTIP
        directoryRequester->setToolTip(tr2i18n("Select the location where you want to search. It can be a directory, a file, or a semicolon separated list of directories/files.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_TOOLTIP
        syncButton->setToolTip(tr2i18n("Synchronize with current document directory.", 0));
#endif // QT_NO_TOOLTIP
        label_6->setText(tr2i18n("Recursive:", 0));
        recursiveCheck->setText(QString());
        limitToProjectLabel->setText(tr2i18n("Limit to project files:", 0));
        limitToProjectCheck->setText(QString());
#ifndef UI_QT_NO_TOOLTIP
        filesCombo->setToolTip(tr2i18n("Files filter.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        filesCombo->setWhatsThis(tr2i18n("Enter the file name pattern of the files to search here. You may give several patterns separated by commas or spaces.", 0));
#endif // QT_NO_WHATSTHIS
        label_2->setText(tr2i18n("Exclude:", 0));
#ifndef UI_QT_NO_TOOLTIP
        excludeCombo->setToolTip(tr2i18n("Files pattern to exclude", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        excludeCombo->setWhatsThis(tr2i18n("Enter the file name pattern of the files to exclude from the search here. You may give several patterns separated by commas or spaces.<p>Every pattern is internally surrounded by asterisks, so that each pattern can match parts of the file paths.</p>", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        replacementTemplateEdit->setToolTip(tr2i18n("Enter the replacement template.", 0));
#endif // QT_NO_TOOLTIP
        label_4->setText(tr2i18n("Replacement Template:", 0));
        excludeCommentsCheck->setText(tr2i18n("Exclude Comments", 0));
    } // retranslateUi

};

namespace Ui {
    class GrepWidget: public Ui_GrepWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GREPWIDGET_H

