/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_log
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *log)
    {
        if (log->objectName().isEmpty())
            log->setObjectName(QStringLiteral("log"));
        log->resize(400, 300);
        pushButton = new QPushButton(log);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 190, 93, 28));
        pushButton_2 = new QPushButton(log);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 190, 93, 28));
        lineEdit = new QLineEdit(log);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 70, 151, 21));
        lineEdit_2 = new QLineEdit(log);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 130, 151, 21));
        label = new QLabel(log);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 70, 72, 15));
        label_2 = new QLabel(log);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 130, 72, 15));
        label_3 = new QLabel(log);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 30, 171, 16));

        retranslateUi(log);

        QMetaObject::connectSlotsByName(log);
    } // setupUi

    void retranslateUi(QDialog *log)
    {
        log->setWindowTitle(QApplication::translate("log", "\347\231\273\345\275\225\347\225\214\351\235\242", 0));
        pushButton->setText(QApplication::translate("log", "\347\231\273\345\275\225", 0));
        pushButton_2->setText(QApplication::translate("log", "\346\263\250\345\206\214", 0));
        label->setText(QApplication::translate("log", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        label_2->setText(QApplication::translate("log", "\345\257\206\347\240\201\357\274\232", 0));
        label_3->setText(QApplication::translate("log", "\346\254\242\350\277\216\345\205\211\344\270\264\357\274\201\346\226\260\347\224\250\346\210\267\350\257\267\346\263\250\345\206\214", 0));
    } // retranslateUi

};

namespace Ui {
    class log: public Ui_log {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
