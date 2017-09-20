#include "admin.h"
#include <QString>
#include <QSqlDatabase>
#include <QMessageBox>


adminClass ::adminClass (QWidget *parent)
	: QWidget(parent),
	ui(new Ui::adminClass)
{
	ui->setupUi(this);
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../rest.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database", QMessageBox::Cancel);
	}
	QSqlQuery query;
	query.exec("select * from customer");
	while (query.next())
	{
		ui->textEdit->append(query.value(1).toString());
	}
	db.close();//¹Ø±ÕÊý¾Ý¿â
}

adminClass::~adminClass()
{
	delete ui;
}

bool adminClass::creatnewdish(QString id, QString dish)
{
	return false;
}

void adminClass::on_add_dishs_clicked()
{

}
void adminClass::on_delete_dish_clicked()
{
}

void adminClass::on_delete_customer_clicked()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../rest.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database", QMessageBox::Cancel);
	}
	QSqlQuery query;
	QString delete_sql;
	QString name;
	name = ui->customer_number->text();
	delete_sql = "delete from customer where name = ?";
	query.prepare(delete_sql);
	query.addBindValue(name);
	if (!query.exec())
	{
		QMessageBox::critical(0, "Cannot delete data",
			"Cannot delete data", QMessageBox::Cancel);
	}
	else
	{
		QMessageBox::information(this, "information", "The number has been deleted!");
	}
	db.close();
}
