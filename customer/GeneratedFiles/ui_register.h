/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reg
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *nameLineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_3;

    void setupUi(QWidget *reg)
    {
        if (reg->objectName().isEmpty())
            reg->setObjectName(QStringLiteral("reg"));
        reg->resize(400, 300);
        label = new QLabel(reg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(41, 81, 60, 16));
        label_2 = new QLabel(reg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 140, 45, 16));
        nameLineEdit = new QLineEdit(reg);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(120, 80, 161, 21));
        lineEdit_2 = new QLineEdit(reg);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 140, 161, 21));
        pushButton = new QPushButton(reg);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 240, 93, 28));
        label_3 = new QLabel(reg);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 30, 111, 16));

        retranslateUi(reg);

        QMetaObject::connectSlotsByName(reg);
    } // setupUi

    void retranslateUi(QWidget *reg)
    {
        reg->setWindowTitle(QApplication::translate("reg", "Form", 0));
        label->setText(QApplication::translate("reg", "\346\211\213\346\234\272\345\217\267\357\274\232", 0));
        label_2->setText(QApplication::translate("reg", "\345\257\206\347\240\201\357\274\232", 0));
        pushButton->setText(QApplication::translate("reg", "\346\263\250\345\206\214", 0));
        label_3->setText(QApplication::translate("reg", "\346\211\213\346\234\272\345\217\267\345\277\253\346\215\267\346\263\250\345\206\214", 0));
    } // retranslateUi

};

namespace Ui {
    class reg: public Ui_reg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
