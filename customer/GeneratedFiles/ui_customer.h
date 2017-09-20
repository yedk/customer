/********************************************************************************
** Form generated from reading UI file 'customer.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMER_H
#define UI_CUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customer
{
public:
    QPushButton *order;
    QPushButton *water;
    QPushButton *reminder;
    QPushButton *check;
    QPushButton *evaluate;
    QLabel *label;
    QTextEdit *textEdit;
    QLineEdit *tablenumber;
    QLabel *label_2;
    QPushButton *sitdown;

    void setupUi(QWidget *customer)
    {
        if (customer->objectName().isEmpty())
            customer->setObjectName(QStringLiteral("customer"));
        customer->resize(707, 487);
        order = new QPushButton(customer);
        order->setObjectName(QStringLiteral("order"));
        order->setGeometry(QRect(40, 70, 93, 28));
        water = new QPushButton(customer);
        water->setObjectName(QStringLiteral("water"));
        water->setGeometry(QRect(40, 140, 93, 28));
        reminder = new QPushButton(customer);
        reminder->setObjectName(QStringLiteral("reminder"));
        reminder->setGeometry(QRect(40, 220, 93, 28));
        check = new QPushButton(customer);
        check->setObjectName(QStringLiteral("check"));
        check->setGeometry(QRect(40, 290, 93, 28));
        evaluate = new QPushButton(customer);
        evaluate->setObjectName(QStringLiteral("evaluate"));
        evaluate->setGeometry(QRect(40, 370, 93, 28));
        label = new QLabel(customer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(490, 30, 121, 16));
        textEdit = new QTextEdit(customer);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(420, 60, 231, 361));
        tablenumber = new QLineEdit(customer);
        tablenumber->setObjectName(QStringLiteral("tablenumber"));
        tablenumber->setGeometry(QRect(310, 320, 61, 21));
        label_2 = new QLabel(customer);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 320, 41, 16));
        sitdown = new QPushButton(customer);
        sitdown->setObjectName(QStringLiteral("sitdown"));
        sitdown->setGeometry(QRect(280, 370, 93, 28));

        retranslateUi(customer);

        QMetaObject::connectSlotsByName(customer);
    } // setupUi

    void retranslateUi(QWidget *customer)
    {
        customer->setWindowTitle(QApplication::translate("customer", "order_system", 0));
        order->setText(QApplication::translate("customer", "\347\202\271\350\217\234", 0));
        water->setText(QApplication::translate("customer", "\345\212\240\346\260\264", 0));
        reminder->setText(QApplication::translate("customer", "\345\202\254\350\217\234", 0));
        check->setText(QApplication::translate("customer", "\344\271\260\345\215\225", 0));
        evaluate->setText(QApplication::translate("customer", "\350\257\204\344\273\267", 0));
        label->setText(QApplication::translate("customer", "\345\211\251\344\275\231\351\244\220\346\241\214\344\275\215\347\275\256", 0));
        label_2->setText(QApplication::translate("customer", "\345\272\247\344\275\215\357\274\232", 0));
        sitdown->setText(QApplication::translate("customer", "\345\260\261\345\235\220", 0));
    } // retranslateUi

};

namespace Ui {
    class customer: public Ui_customer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMER_H
