/********************************************************************************
** Form generated from reading UI file 'ordercolumn.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERCOLUMN_H
#define UI_ORDERCOLUMN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ordercolumn
{
public:
    QLabel *label;
    QLabel *label_2;
    QTextEdit *menu;
    QTextEdit *tray;
    QLabel *label_3;
    QLineEdit *add;
    QPushButton *add_dish;
    QPushButton *endmeal;

    void setupUi(QDialog *ordercolumn)
    {
        if (ordercolumn->objectName().isEmpty())
            ordercolumn->setObjectName(QStringLiteral("ordercolumn"));
        ordercolumn->resize(768, 558);
        label = new QLabel(ordercolumn);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 60, 41, 16));
        label_2 = new QLabel(ordercolumn);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(560, 60, 72, 15));
        menu = new QTextEdit(ordercolumn);
        menu->setObjectName(QStringLiteral("menu"));
        menu->setGeometry(QRect(40, 100, 251, 401));
        tray = new QTextEdit(ordercolumn);
        tray->setObjectName(QStringLiteral("tray"));
        tray->setGeometry(QRect(460, 100, 241, 191));
        label_3 = new QLabel(ordercolumn);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(430, 330, 191, 16));
        add = new QLineEdit(ordercolumn);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(430, 380, 91, 31));
        add_dish = new QPushButton(ordercolumn);
        add_dish->setObjectName(QStringLiteral("add_dish"));
        add_dish->setGeometry(QRect(560, 380, 93, 28));
        endmeal = new QPushButton(ordercolumn);
        endmeal->setObjectName(QStringLiteral("endmeal"));
        endmeal->setGeometry(QRect(550, 480, 93, 28));

        retranslateUi(ordercolumn);

        QMetaObject::connectSlotsByName(ordercolumn);
    } // setupUi

    void retranslateUi(QDialog *ordercolumn)
    {
        ordercolumn->setWindowTitle(QApplication::translate("ordercolumn", "Dialog", 0));
        label->setText(QApplication::translate("ordercolumn", "\350\217\234\345\215\225", 0));
        label_2->setText(QApplication::translate("ordercolumn", "\346\211\230\347\233\230", 0));
        label_3->setText(QApplication::translate("ordercolumn", "\347\202\271\351\244\220\357\274\214\350\257\267\350\276\223\345\205\245\345\257\271\345\272\224\350\217\234\345\223\201\345\272\217\345\217\267", 0));
        add_dish->setText(QApplication::translate("ordercolumn", "\345\212\240\350\217\234", 0));
        endmeal->setText(QApplication::translate("ordercolumn", "\347\273\223\346\235\237\347\202\271\351\244\220", 0));
    } // retranslateUi

};

namespace Ui {
    class ordercolumn: public Ui_ordercolumn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERCOLUMN_H
