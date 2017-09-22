#include "waiter.h"
#include "ui_waiter.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <string.h>
#include "evaluate1.h"
#include "ui_evaluate.h"
#include <qfile.h>


waiterClass::waiterClass(QWidget *parent)
	: QDialog(parent),
	ui(new Ui::waiterClass)
{
	ui->setupUi(this);
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../seatnumber.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database", QMessageBox::Cancel);
	}
	QSqlQuery query;
	query.exec("select * from seatnumber");
	while (query.next())
	{
		//ui->menu->append(query.value(1).toString() + tr("hao zuo wei"));
		ui->textEdit->append(query.value(1).toString() + QStringLiteral("号座位已经就坐"));
	}
	db.close();//关闭数据库
	/*QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../seat.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database", QMessageBox::Cancel);
	}
	QSqlQuery query;
	query.exec("select * from seatnumber");
	while (query.next())
	{
		//ui->menu->append(query.value(1).toString() + tr("hao zuo wei"));
		ui->textEdit->append(query.value(1).toString() + tr("hao zuo wei have been seated!"));
	}
	db.close();//关闭数据库*/
}

waiterClass::~waiterClass()
{
	delete ui;
}

void waiterClass::on_evaluate_clicked()
{
	evaluate1 *e = new evaluate1(this);
	e->exec();
}

void waiterClass::on_viewinformation_clicked()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../service.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database", QMessageBox::Cancel);
	}
	QSqlQuery query;
	query.exec("select * from service");
	while (query.next())
	{
		//ui->menu->append(query.value(1).toString() + tr("hao zuo wei"));
		ui->textEdit_2->append(query.value(1).toString() + tr(":") + query.value(2).toString());
	}
	db.close();//关闭数据库
	/*QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../service.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database", QMessageBox::Cancel);
	}
	QSqlQuery query;
	//QString num,num1;
	//num = '1';
	//num1 = '2';
	query.exec("select * from service");
	while (query.next())
	{
		ui->textEdit_2->append(query.value(1).toString()+query.value(2).toString());

	}
	db.close();//关闭数据库*/
}

void waiterClass::on_empty_clicked()
{
	QFile::remove("../service.sql");
	ui->textEdit_2->clear();
}

void waiterClass::on_checkdish_clicked()
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

void waiterClass::on_claim_clicked()
{
	QMessageBox::information(this, "information", "You will serive this seat!");
	ui->textEdit->clear();
	QFile::remove("../seatnumber.sql");
}

