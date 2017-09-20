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
	db.close();//关闭数据库
}

adminClass::~adminClass()
{
	delete ui;
}
//添加新的菜品；
bool adminClass::creatnewdish(QString id, QString dish)
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../menu.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database", QMessageBox::Cancel);
		return false;
	}
	QSqlQuery query;
	query.exec("CREATE TABLE menu (id INTEFER PRIMARY KEY,"
		"idname varchar(20),"
		"dish varchar(20))");
	query.exec("insert into menu(idname,dish)values('" + id + "','" + dish + "')");

	db.close();
	return true;
}
//删除菜品；
bool adminClass::deletedish(QString id, QString dish)
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../menu.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database", QMessageBox::Cancel);
		return false;
	}
	QSqlQuery query;
	QString delete_sql;
	delete_sql = "delete from menu where idname = ?";
	query.prepare(delete_sql);
	query.addBindValue(id);
	if (!query.exec())
	{
		QMessageBox::critical(0, "cannot open database",
			"Unable to establish a connection", QMessageBox::Cancel);
		return false;
	}
	else
	{
		QMessageBox::information(this, "information", "This dish have been deleted!");
	}
	db.close();
}
//添加菜品按钮；
void adminClass::on_add_dishs_clicked()
{
	QString id = ui->dish_id->text();
	QString dish = ui->dish_name->text();
	bool flag = false;
	//id = ui->dish_id->text();
	//dish = ui->dish_name->text();
	//flag = creatnewdish(id, dish);
	if (creatnewdish(id,dish)==1)
	{
		QMessageBox::information(this, "information", "The dishs have been created!");
	}
	else
	{
		QMessageBox::critical(0, "failed",
			"cannot created this dish", QMessageBox::Cancel);
	}
}
//删除菜品按钮；
void adminClass::on_delete_dish_clicked()
{
	QString id;
	QString dish;
	bool flag = false;
	id = ui->dish_id->text();
	dish = ui->dish_name->text();
	flag = deletedish(id,dish);
	if (flag)
	{
		QMessageBox::information(this, "information", "The dishs have been deleted!");
	}
	else
	{
		QMessageBox::critical(0, "failed",
			"cannot delete this dish", QMessageBox::Cancel);
	}
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
