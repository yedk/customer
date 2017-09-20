#pragma once
#ifndef REGISTER_H
#define REGISTER_H

#include <QtWidgets/QMainWindow>
#include <qwidget.h>
#include "ui_register.h"
#include <qdialog.h>
#include <qstring.h>
#include <qsqldatabase.h>
#include <qsqlquery.h>
#include <QString>


namespace Ui {
	class reg;
}

class reg :public QMainWindow
{
	Q_OBJECT
public:
		explicit reg(QWidget *parent = 0);
		~reg();
		void loginEvent(QCloseEvent *event);
		bool creatcustomer(QString username,QString password);
private:
	Ui::reg *ui;
	private slots:
	void on_pushButton_clicked();//зЂВс
};


#endif