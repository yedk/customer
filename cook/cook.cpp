#include "cook.h"
#include "ui_cook.h"
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QMessageBox>


cook::cook(QWidget *parent)
	: QDialog(parent),
	ui(new Ui::cook)
{
	ui->setupUi(this);
}

cook::~cook()
{
	delete ui;
}

void cook::on_finish_clicked()
{
	ui->textEdit->clear();
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../tray.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database", QMessageBox::Cancel);
	}
	QSqlQuery query;
	query.exec("delete * from tray");
	db.close();//关闭数据库
}

void cook::on_examine_clicked()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../tray.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database", QMessageBox::Cancel);
	}
	QSqlQuery query;
	query.exec("select * from tray");
	while (query.next())
	{
		//ui->menu->append(query.value(1).toString() + tr("hao zuo wei"));
		ui->textEdit->append(query.value(1).toString() + tr(":") + query.value(2).toString());
	}
	db.close();//关闭数据库
}