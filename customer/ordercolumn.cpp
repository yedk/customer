#include "ordercolumn.h"
#include <QString>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QDialog>
#include "ui_ordercolumn.h"



//int price=0;
/*evaluate::evaluate(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::evaluate)*/
ordercolumn::ordercolumn(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::ordercolumn)
{
	ui->setupUi(this);
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../menu.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database", QMessageBox::Cancel);
	}
	QSqlQuery query;
	query.exec("select * from menu");
	while (query.next())
	{
		//ui->menu->append(query.value(1).toString() + tr("hao zuo wei"));
		ui->menu->append(query.value(1).toString() + tr(":") + query.value(2).toString());
	}
	db.close();//关闭数据库
	/*QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	QSqlQuery query;
	db.setDatabaseName("../menu.sql");//打开菜单数据库；
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database conenction.", QMessageBox::Cancel);
	}
	query.exec("select * from menu");
	QString id;
	//QString dish;
	//QString pri;
	while (query.next())
	{
		//id = query.value(1).toString();
		//dish = query.value(2).toString();
		//pri = query.value(2).toString();
		//ui->tray->append(id + tr(":") + dish + tr(",") + pri);
		//ui->menu->append(id + tr(":") + dish);
		ui->menu->append(query.value(1).toString() + tr(":") + query.value(2).toString());
		//ui->menu->append(query.value(1).toString());
	}
	db.close();//关闭数据库*/
//	connect(add_dish, SIGNAL(clicked()), this, SLOT(tray_sysn()));
}
ordercolumn::~ordercolumn()
{
	delete ui;
}

bool ordercolumn::creatsql()
{
	
	return false;
}

void ordercolumn::on_add_dish_clicked()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../menu.sql");//打开菜单数据库；
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database conenction.", QMessageBox::Cancel);
	}
	QSqlQuery query;
	QString dish = ui->add->text();
	QString tray_id, tray_dish;
	//query.exec("CREATE TABLE tray (dish VARCHAR(20))");//创建托盘目录；
	//query.exec("SELECT * FROM menu WHERE idname = ui->add->text()");
	//query.exec("SELECT * FROM menu WHERE idname = 'ui->add->text()'");
	//query.exec("SELECT * FROM menu WHERE idname = 'dish'");
	query.prepare("select * from menu where idname = ?");
	query.addBindValue(dish);
	query.exec();
	while (query.next())
	{
		//dish = query.value(1).toString();
		//price = price + query.value(2).toInt()- 0x30;
		//query.exec("insert into tray (dish)values('" + dish + "')");
		//ui->tray->append(query.value(0).toString());
		//ui->tray->append(query.value(1).toString());
		//ui->tray->append(query.value(2).toString());
		tray_id = query.value(1).toString();
		tray_dish = query.value(2).toString();
		ui->tray->append(query.value(1).toString()+tr(",")+query.value(2).toString());
		tray_sysn(tray_id, tray_dish);
	}
	//ui->total->text();//显示价格；
	db.close();//关闭数据库
	//tray_sysn();
}
void ordercolumn::on_endmeal_clicked()
{
	close();
}

void ordercolumn::tray_sysn(QString id,QString dish)
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../menu.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database", QMessageBox::Cancel);
	}
	QSqlQuery query;
	query.exec("CREATE TABLE tray (id INTEFER PRIMARY KEY,"
		"idname varchar(20),"
		"dish varchar(20))");
	query.exec("insert into tray(idname,dish)values('" + id + "','" + dish + "')");
	query.exec();
	db.close();//关闭数据库
}
