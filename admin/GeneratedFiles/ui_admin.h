/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

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

class Ui_adminClass
{
public:
    QLabel *label;
    QLineEdit *dish_id;
    QLineEdit *dish_name;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *add_dishs;
    QPushButton *delete_dish;
    QLabel *label_4;
    QTextEdit *textEdit;
    QLabel *label_5;
    QPushButton *delete_customer;
    QLineEdit *customer_number;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *seat;
    QPushButton *timseat;
    QPushButton *revoke;

    void setupUi(QWidget *adminClass)
    {
        if (adminClass->objectName().isEmpty())
            adminClass->setObjectName(QStringLiteral("adminClass"));
        adminClass->resize(796, 361);
        label = new QLabel(adminClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 40, 72, 15));
        dish_id = new QLineEdit(adminClass);
        dish_id->setObjectName(QStringLiteral("dish_id"));
        dish_id->setGeometry(QRect(120, 80, 113, 21));
        dish_name = new QLineEdit(adminClass);
        dish_name->setObjectName(QStringLiteral("dish_name"));
        dish_name->setGeometry(QRect(120, 130, 113, 21));
        label_2 = new QLabel(adminClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 80, 72, 15));
        label_3 = new QLabel(adminClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 130, 72, 15));
        add_dishs = new QPushButton(adminClass);
        add_dishs->setObjectName(QStringLiteral("add_dishs"));
        add_dishs->setGeometry(QRect(30, 200, 93, 28));
        delete_dish = new QPushButton(adminClass);
        delete_dish->setObjectName(QStringLiteral("delete_dish"));
        delete_dish->setGeometry(QRect(170, 200, 93, 28));
        label_4 = new QLabel(adminClass);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(530, 20, 72, 15));
        textEdit = new QTextEdit(adminClass);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(330, 80, 181, 241));
        label_5 = new QLabel(adminClass);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(380, 50, 91, 20));
        delete_customer = new QPushButton(adminClass);
        delete_customer->setObjectName(QStringLiteral("delete_customer"));
        delete_customer->setGeometry(QRect(580, 280, 93, 28));
        customer_number = new QLineEdit(adminClass);
        customer_number->setObjectName(QStringLiteral("customer_number"));
        customer_number->setGeometry(QRect(590, 90, 151, 21));
        label_6 = new QLabel(adminClass);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(520, 90, 72, 15));
        label_7 = new QLabel(adminClass);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 260, 72, 15));
        seat = new QLineEdit(adminClass);
        seat->setObjectName(QStringLiteral("seat"));
        seat->setGeometry(QRect(90, 260, 91, 21));
        timseat = new QPushButton(adminClass);
        timseat->setObjectName(QStringLiteral("timseat"));
        timseat->setGeometry(QRect(30, 310, 93, 28));
        revoke = new QPushButton(adminClass);
        revoke->setObjectName(QStringLiteral("revoke"));
        revoke->setGeometry(QRect(190, 310, 93, 28));

        retranslateUi(adminClass);

        QMetaObject::connectSlotsByName(adminClass);
    } // setupUi

    void retranslateUi(QWidget *adminClass)
    {
        adminClass->setWindowTitle(QApplication::translate("adminClass", "admin", 0));
        label->setText(QApplication::translate("adminClass", "\350\217\234\345\223\201\347\256\241\347\220\206", 0));
        label_2->setText(QApplication::translate("adminClass", "\350\217\234\345\223\201id:", 0));
        label_3->setText(QApplication::translate("adminClass", "\350\217\234\345\223\201\345\220\215\347\247\260\357\274\232", 0));
        add_dishs->setText(QApplication::translate("adminClass", "\345\242\236\345\212\240", 0));
        delete_dish->setText(QApplication::translate("adminClass", "\345\210\240\351\231\244", 0));
        label_4->setText(QApplication::translate("adminClass", "\350\264\246\346\210\267\347\256\241\347\220\206", 0));
        label_5->setText(QApplication::translate("adminClass", "\346\211\200\346\234\211\351\241\276\345\256\242\350\264\246\346\210\267", 0));
        delete_customer->setText(QApplication::translate("adminClass", "\345\210\240\351\231\244\351\241\276\345\256\242", 0));
        label_6->setText(QApplication::translate("adminClass", "\351\241\276\345\256\242\350\264\246\346\210\267\357\274\232", 0));
        label_7->setText(QApplication::translate("adminClass", "\345\272\247\344\275\215\357\274\232", 0));
        timseat->setText(QApplication::translate("adminClass", "\345\242\236\345\212\240\345\272\247\344\275\215", 0));
        revoke->setText(QApplication::translate("adminClass", "\346\222\244\351\224\200\345\272\247\344\275\215", 0));
    } // retranslateUi

};

namespace Ui {
    class adminClass: public Ui_adminClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
