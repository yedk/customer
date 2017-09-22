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
		ui->textEdit->append(query.value(1).toString() + QStringLiteral("����λ����"));
	}
	db.close();//�ر����ݿ�
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
	db.close();//�ر����ݿ�*/

}

customer::~customer()
{
	delete ui;
}


//���ˣ�
void customer::on_check_clicked()
{
	QMessageBox::information(this, "information", QStringLiteral("лл���٣���ӭ�´�������"));
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
		QMessageBox::information(this, "information", QStringLiteral("�˿��Ѿ�������"));
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
//���˽��Ȳ�ѯ
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
		QMessageBox::information(this, "information", QStringLiteral("��Ʒ�����ã������ϲˣ�"));
	}
	else
	{
		QMessageBox::information(this, "information", QStringLiteral("��Ʒ��û���ã�"));
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
		ui->textEdit->append(query.value(1).toString() + QStringLiteral("����λ����"));
	}
	db.close();//�ر����ݿ�

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
	db.setDatabaseName("../menu.sql");//�����˵����ݿ⣻
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database connection.", QMessageBox::Cancel);
	}//�򿪲˵����ݿ⣻
	QSqlQuery query;
	query.exec("SELECT * FROM menu");//�Ӳ˵����в�ѯ��Ʒ���ࣻ
	QString id;
	QString dish;
	while (query.next())
	{
		id = query.value(0).toString();
		dish = query.value(1).toString();
		ui->textEdit->append(id + tr(":") + dish);
	}//�����в�Ʒ���ֳ�����
	*/
}
void customer::on_reminder_clicked()
{
	QString need;
	QString water;
	need = QStringLiteral("����Ա");
	water = QStringLiteral("���ϲˣ�");
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
	QMessageBox::information(this, "information", QStringLiteral("���Ե�Ƭ�̣�����Ա���ڴ߲ˣ�"));
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
	need = QStringLiteral("����Ա");
	water = QStringLiteral("��Ҫ��ˮ");
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
	QMessageBox::information(this, "information", QStringLiteral("���Եȣ�����Ա��ˮ���Ͼ͵���"));
}
