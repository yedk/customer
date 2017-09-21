/********************************************************************************
** Form generated from reading UI file 'evaluate.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVALUATE_H
#define UI_EVALUATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_evaluate1
{
public:
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QLabel *label;

    void setupUi(QWidget *evaluate1)
    {
        if (evaluate1->objectName().isEmpty())
            evaluate1->setObjectName(QStringLiteral("evaluate1"));
        evaluate1->resize(316, 300);
        checkBox = new QCheckBox(evaluate1);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(90, 100, 91, 19));
        checkBox_2 = new QCheckBox(evaluate1);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(90, 160, 91, 19));
        checkBox_3 = new QCheckBox(evaluate1);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(90, 220, 91, 19));
        label = new QLabel(evaluate1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(51, 50, 171, 20));

        retranslateUi(evaluate1);

        QMetaObject::connectSlotsByName(evaluate1);
    } // setupUi

    void retranslateUi(QWidget *evaluate1)
    {
        evaluate1->setWindowTitle(QApplication::translate("evaluate1", "\351\241\276\345\256\242\350\257\204\344\273\267", 0));
        checkBox->setText(QApplication::translate("evaluate1", "\346\234\215\345\212\241\345\276\210\346\243\222\357\274\201", 0));
        checkBox_2->setText(QApplication::translate("evaluate1", "\346\234\215\345\212\241\344\270\200\350\210\254\357\274\201", 0));
        checkBox_3->setText(QApplication::translate("evaluate1", "\345\276\210\344\270\215\346\273\241\346\204\217\357\274\201", 0));
        label->setText(QApplication::translate("evaluate1", "\350\257\267\346\202\250\345\257\271\346\234\254\346\254\241\346\234\215\345\212\241\345\201\232\345\207\272\350\257\204\344\273\267", 0));
    } // retranslateUi

};

namespace Ui {
    class evaluate1: public Ui_evaluate1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVALUATE_H
