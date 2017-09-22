#include "customer.h"
#include "login.h"
#include "ui_login.h"
#include "register.h"
#include "ui_register.h"
#include <QDialog>
#include <qmessagebox.h>
#include "evaluate.h"
#include "ui_evaluate.h"
#include "ordercolumn.h"
#include "ui_ordercolumn.h"
#include <QMessageBox>
#include <QDebug>



customer::customer(QWidget *parent):
	QWidget(parent),
	ui(new Ui::customer)
{
	ui->setupUi(this);
	class log *login = new class log(this);
	//login->setGeometry(QRect(0,0, 600, 400));
	///login->setFixedSize(600, 400);
	///login->setWindowModified(true);
	//login->show();
	login->exec();
	//this->hide();
	//connect(login,login->close,this,mainwindowshow());



	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../seat.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database", QMessageBox::Cancel);
	}
	QSqlQuery query;
	query.exec("select * from seat");
	while (query.next())
	{
		//ui->menu->append(query.value(1).toString() + tr("hao zuo wei"));
		ui->textEdit->append(query.value(1).toString() + QStringLiteral("号座位空闲"));
	}
	db.close();//关闭数据库
	//ui.setupUi(this);
	/*QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
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
		ui->textEdit->append(query.value(1).toString()+tr(":")+query.value(2).toString());
	}
	db.close();//关闭数据库*/

}

customer::~customer()
{
	delete ui;
}


//结账；
void customer::on_check_clicked()
{
	QMessageBox::information(this, "information", QStringLiteral("谢谢光临，欢迎下次再来！"));
	close();
}
void customer::on_evaluate_clicked()
{
	evaluate *e = new evaluate(this);
	e->exec();
}
void customer::on_sitdown_clicked()
{
	bool flag = false;
	QString seatnumber = ui->tablenumber->text();

	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../seat.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database", QMessageBox::Cancel);
	}
	QSqlQuery query;
	QString delete_sql;
	delete_sql = "delete from seat where idname = ?";
	query.prepare(delete_sql);
	query.addBindValue(seatnumber);
	if (!query.exec())
	{
		QMessageBox::critical(0, "cannot open database",
			"Unable to establish a connection", QMessageBox::Cancel);
		//return false;
	}
	else
	{
		QMessageBox::information(this, "information", QStringLiteral("顾客已经就坐！"));
	}
	db.close();
	/*QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../seat.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database connection.", QMessageBox::Cancel);
	}
	QSqlQuery query;
	query.exec("CREATE TABLE seatnumber(id INTEFER PRIMARY KEY,"
		"seatid varchar(20))");
	query.exec("INSERT INTO seatnumber VALUE(1,'seatnumber')");

	
	QMessageBox::information(this, "information", "seat sucessed!");
	db.close();*/

}
//做菜进度查询
void customer::on_check_dish_clicked()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../finished.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database connection.", QMessageBox::Cancel);
	}
	QSqlQuery query;
	query.exec("SELECT * FROM finished");
	if (query.next())
	{
		QMessageBox::information(this, "information", QStringLiteral("菜品已做好！马上上菜！"));
	}
	else
	{
		QMessageBox::information(this, "information", QStringLiteral("菜品还没做好！"));
	}
	db.close();

}
void customer::on_refresh_clicked()
{
	/*QString seatnumber = ui->tablenumber->text();
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../seatnumber.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database", QMessageBox::Cancel);
		//return false;
	}
	QSqlQuery query;
	query.exec("CREATE TABLE seatnumber (id INTEFER PRIMARY KEY,"
		"idname varchar(20),"
		"dish varchar(20))");
	query.exec("insert into seatnumber(idname,dish)values('" + seatnumber + "','" + seatnumber + "')");

	db.close();*/
	ui->textEdit->clear();

	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../seat.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database", QMessageBox::Cancel);
	}
	QSqlQuery query;
	query.exec("select * from seat");
	while (query.next())
	{
		//ui->menu->append(query.value(1).toString() + tr("hao zuo wei"));
		ui->textEdit->append(query.value(1).toString() + QStringLiteral("号座位空闲"));
	}
	db.close();//关闭数据库

}

void customer::on_order_clicked()
{
	class ordercolumn *orum = new class ordercolumn(this);
	orum->setGeometry(QRect(500, 250, 376, 247));
	orum->setWindowModified(true);
	orum->exec();
	//ui->setupUi(this);

	/*
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../menu.sql");//创建菜单数据库；
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database connection.", QMessageBox::Cancel);
	}//打开菜单数据库；
	QSqlQuery query;
	query.exec("SELECT * FROM menu");//从菜单表中查询菜品种类；
	QString id;
	QString dish;
	while (query.next())
	{
		id = query.value(0).toString();
		dish = query.value(1).toString();
		ui->textEdit->append(id + tr(":") + dish);
	}//将所有菜品呈现出来；
	*/
}
void customer::on_reminder_clicked()
{
	QString need;
	QString water;
	need = QStringLiteral("服务员");
	water = QStringLiteral("快上菜！");
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../service.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database connection.", QMessageBox::Cancel);
	}
	QSqlQuery query;
	query.exec("CREATE TABLE service(id INTEFER PRIMARY KEY,"
		"num varchar(20),"
		"water varchar(20))");
	query.exec("insert into service(num,water)values('" + need + "','" + water + "')");
	//query.exec("INSERT INTO service VALUE(1,'2')");
	//query.exec("INSERT INTO service VALUE(2,'water')");

	db.close();
	QMessageBox::information(this, "information", QStringLiteral("请稍等片刻，服务员正在催菜！"));
	/*
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../service.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database connection.", QMessageBox::Cancel);
	}
	QSqlQuery query;
	query.exec("CREATE TABLE service(id INTEFER PRIMARY KEY,"
		"num varchar(20),"
		"water varchar(20))");
	query.exec("INSERT INTO service VALUE(1,'1')");
	query.exec("INSERT INTO service VALUE(2,'reminder')");

	db.close();
	QMessageBox::information(this,"information","please wait a moment");*/
}
void customer::on_water_clicked()
{
	QString need;
	QString water;
	need = QStringLiteral("服务员");
	water = QStringLiteral("需要加水");
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../service.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database connection.", QMessageBox::Cancel);
	}
	QSqlQuery query;
	query.exec("CREATE TABLE service(id INTEFER PRIMARY KEY,"
		"num varchar(20),"
		"water varchar(20))");
	query.exec("insert into service(num,water)values('"+need+"','"+water+"')");
	//query.exec("INSERT INTO service VALUE(1,'2')");
	//query.exec("INSERT INTO service VALUE(2,'water')");

	db.close();
	QMessageBox::information(this, "information", QStringLiteral("请稍等！服务员加水马上就到！"));
}
