#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_customer.h"
#include "login.h"
#include<QMessageBox>
#include"ui_login.h"
#include "register.h"
#include "ui_register.h"
#include <QDebug>

namespace Ui {
	class customer;
}
class customer : public QWidget
{
	Q_OBJECT

public:
	customer(QWidget *parent = Q_NULLPTR);
	~customer();
	//QMessageBox check;
//public slots:
	//bool mainwindowshow();
private:
	Ui::customer *ui;
private slots:
	void on_order_clicked();
	void on_water_clicked();
	void on_reminder_clicked();
	void on_check_clicked();
	void on_evaluate_clicked();
	void on_sitdown_clicked();
	void on_check_dish_clicked();
	void on_refresh_clicked();

};
