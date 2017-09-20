#pragma once

#include <QtWidgets/QWidget>
#include "ui_admin.h"
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QDialog>
#include <QEvent>

class adminClass : public QWidget
{
	Q_OBJECT

public:
	adminClass(QWidget *parent = Q_NULLPTR);
	~adminClass();
	bool creatnewdish(QString id,QString dish);

private:
	Ui::adminClass *ui;
	//    QPushButton *add_dishs;
	//  QPushButton *delete_dish;
	//  QPushButton *delete_customer;
private slots:
void on_add_dishs_clicked();
void on_delete_dish_clicked();
void on_delete_customer_clicked();
};
