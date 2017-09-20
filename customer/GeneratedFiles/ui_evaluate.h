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

class Ui_evaluate
{
public:
    QLabel *label;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;

    void setupUi(QWidget *evaluate)
    {
        if (evaluate->objectName().isEmpty())
            evaluate->setObjectName(QStringLiteral("evaluate"));
        evaluate->resize(372, 254);
        label = new QLabel(evaluate);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 40, 181, 21));
        checkBox = new QCheckBox(evaluate);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(120, 100, 91, 19));
        checkBox_2 = new QCheckBox(evaluate);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(120, 150, 91, 19));
        checkBox_3 = new QCheckBox(evaluate);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(120, 200, 91, 19));

        retranslateUi(evaluate);

        QMetaObject::connectSlotsByName(evaluate);
    } // setupUi

    void retranslateUi(QWidget *evaluate)
    {
        evaluate->setWindowTitle(QApplication::translate("evaluate", "\350\257\204\344\273\267", 0));
        label->setText(QApplication::translate("evaluate", "\350\257\267\346\202\250\345\257\271\346\234\254\346\254\241\346\234\215\345\212\241\345\201\232\345\207\272\350\257\204\344\273\267\357\274\232", 0));
        checkBox->setText(QApplication::translate("evaluate", "\345\245\275\350\257\204", 0));
        checkBox_2->setText(QApplication::translate("evaluate", "\344\270\200\350\210\254", 0));
        checkBox_3->setText(QApplication::translate("evaluate", "\345\267\256\350\257\204", 0));
    } // retranslateUi

};

namespace Ui {
    class evaluate: public Ui_evaluate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVALUATE_H
