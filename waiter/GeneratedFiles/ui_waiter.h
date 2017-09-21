/********************************************************************************
** Form generated from reading UI file 'waiter.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAITER_H
#define UI_WAITER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_waiterClass
{
public:
    QLabel *label;
    QTextEdit *textEdit;
    QPushButton *claim;
    QPushButton *evaluate;
    QLabel *label_2;
    QTextEdit *textEdit_2;
    QPushButton *viewinformation;

    void setupUi(QDialog *waiterClass)
    {
        if (waiterClass->objectName().isEmpty())
            waiterClass->setObjectName(QStringLiteral("waiterClass"));
        waiterClass->resize(507, 348);
        label = new QLabel(waiterClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 30, 72, 15));
        textEdit = new QTextEdit(waiterClass);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 60, 241, 91));
        claim = new QPushButton(waiterClass);
        claim->setObjectName(QStringLiteral("claim"));
        claim->setGeometry(QRect(90, 180, 93, 28));
        evaluate = new QPushButton(waiterClass);
        evaluate->setObjectName(QStringLiteral("evaluate"));
        evaluate->setGeometry(QRect(90, 270, 93, 28));
        label_2 = new QLabel(waiterClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 20, 72, 15));
        textEdit_2 = new QTextEdit(waiterClass);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(290, 50, 161, 231));
        viewinformation = new QPushButton(waiterClass);
        viewinformation->setObjectName(QStringLiteral("viewinformation"));
        viewinformation->setGeometry(QRect(320, 310, 101, 28));

        retranslateUi(waiterClass);

        QMetaObject::connectSlotsByName(waiterClass);
    } // setupUi

    void retranslateUi(QDialog *waiterClass)
    {
        waiterClass->setWindowTitle(QApplication::translate("waiterClass", "waiter", 0));
        label->setText(QApplication::translate("waiterClass", "\345\260\261\345\235\220\344\277\241\346\201\257", 0));
        claim->setText(QApplication::translate("waiterClass", "\350\256\244\351\242\206", 0));
        evaluate->setText(QApplication::translate("waiterClass", "\350\257\204\344\273\267", 0));
        label_2->setText(QApplication::translate("waiterClass", "\345\212\250\346\200\201\344\277\241\346\201\257", 0));
        viewinformation->setText(QApplication::translate("waiterClass", "\346\237\245\347\234\213\345\212\250\346\200\201\344\277\241\346\201\257", 0));
    } // retranslateUi

};

namespace Ui {
    class waiterClass: public Ui_waiterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAITER_H
