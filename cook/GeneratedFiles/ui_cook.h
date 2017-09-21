/********************************************************************************
** Form generated from reading UI file 'cook.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COOK_H
#define UI_COOK_H

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

class Ui_cook
{
public:
    QTextEdit *textEdit;
    QPushButton *examine;
    QPushButton *finish;
    QLabel *label;

    void setupUi(QDialog *cook)
    {
        if (cook->objectName().isEmpty())
            cook->setObjectName(QStringLiteral("cook"));
        cook->resize(362, 400);
        textEdit = new QTextEdit(cook);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(80, 80, 191, 171));
        examine = new QPushButton(cook);
        examine->setObjectName(QStringLiteral("examine"));
        examine->setGeometry(QRect(130, 270, 93, 28));
        finish = new QPushButton(cook);
        finish->setObjectName(QStringLiteral("finish"));
        finish->setGeometry(QRect(130, 350, 93, 28));
        label = new QLabel(cook);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 40, 72, 15));

        retranslateUi(cook);

        QMetaObject::connectSlotsByName(cook);
    } // setupUi

    void retranslateUi(QDialog *cook)
    {
        cook->setWindowTitle(QApplication::translate("cook", "\345\216\250\345\270\210", 0));
        examine->setText(QApplication::translate("cook", "\346\237\245\347\234\213\344\273\273\345\212\241", 0));
        finish->setText(QApplication::translate("cook", "\345\256\214\346\210\220\344\273\273\345\212\241", 0));
        label->setText(QApplication::translate("cook", "\350\217\234\345\215\225", 0));
    } // retranslateUi

};

namespace Ui {
    class cook: public Ui_cook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COOK_H
