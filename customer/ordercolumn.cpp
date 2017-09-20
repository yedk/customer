#include "ordercolumn.h"
#include <QString>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QDialog>
#include "ui_ordercolumn.h"



int price=0;
/*evaluate::evaluate(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::evaluate)*/
ordercolumn::ordercolumn(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::ordercolumn)
{
	ui->setupUi(this);
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	QSqlQuery query;
	db.setDatabaseName("../menu.sql");//�򿪲˵����ݿ⣻
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database conenction.", QMessageBox::Cancel);
	}
	query.exec("select * from menu");
	QString id;
	QString dish;
	QString pri;
	while (query.next())
	{
		id = query.value(0).toString();
		dish = query.value(1).toString();
		pri = query.value(2).toString();
		ui->tray->append(id + tr(":") + dish + tr(",") + pri);
	}
	db.close();//�ر����ݿ�
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
	QSqlQuery query;
	db.setDatabaseName("../menu.sql");//�򿪲˵����ݿ⣻
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database conenction.", QMessageBox::Cancel);
	}
	query.exec("CREATE TABLE tray (dish VARCHAR(20))");//��������Ŀ¼��
	query.exec("SELECT *FROM menu WHERE id = ui->add->text()");
	QString dish;
	while (query.next())
	{
		dish = query.value(1).toString();
		price = price + query.value(2).toInt()- 0x30;
		query.exec("insert into tray (dish)values('" + dish + "')");
		ui->tray->append(dish);
	}
	//ui->total->text();//��ʾ�۸�
	db.close();//�ر����ݿ�
}
void ordercolumn::on_endmeal_clicked()
{
	close();
}
