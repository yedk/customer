#pragma once
#ifndef LOGIN_H
#define LOGIN_H

#include <stdio.h>
#include <QDialog>
#include <QString>
#include "ui_login.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <qevent.h>


namespace Ui {
	class log;
}

class log :public QDialog
{
	Q_OBJECT
public:
	explicit log(QWidget *parent = 0);
	~log();
	bool log_sucess();
	void closeEvent(QCloseEvent*event);
//signals:
	//bool mainwindow();//主界面函数；
private:
	Ui::log *ui;
private slots:
	void on_pushButton_clicked();
	void on_pushButton_2_clicked();
	void on_exit_clicked();

};

#endif