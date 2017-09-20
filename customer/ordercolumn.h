#pragma once
#ifndef ORDERCOLUMN_H
#define ORDERCOLUMN_H

#include <QtWidgets/QMainWindow>
#include "ui_ordercolumn.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QDialog>


namespace Ui {
	class ordercolumn;
}

class ordercolumn :public QDialog
{
	Q_OBJECT
public:
	explicit ordercolumn(QWidget *parent = 0);
	~ordercolumn();
	bool creatsql();
private:
	Ui::ordercolumn *ui;

private slots:
void on_add_dish_clicked();
void on_endmeal_clicked();
};



#endif // !ORDERCOLUMN_H
