#include "register.h"
#include "ui_register.h"
#include <qmessagebox.h>
#include <QDebug>


reg::reg(QWidget *parent)
	:QMainWindow(parent),
	ui(new Ui::reg)
{
	ui->setupUi(this);
}
reg::~reg()
{
	delete ui;
}

void reg::loginEvent(QCloseEvent * event)
{
	
}
bool reg::creatcustomer(QString username, QString password)
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../rest.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database connection.", QMessageBox::Cancel);
		return false;
	}
	QSqlQuery query;
	/*query.exec("creat table customer(id INTEFER PRIMARY KEY,"
		"name varchar(20),"
		"password varchar(20))");
	query.exec("insert into customer(name,password)values('" +username+ "','" +password+"')");
	*/
	query.exec("CREATE TABLE customer (id INTEFER PRIMARY KEY,"
		"name varchar(20),"
		"password varchar(20))");
	query.exec("insert into customer(name,password)values('" + username + "','" + password + "')");

	db.close();
	return true;
}
void reg::on_pushButton_clicked()
{
	/*QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../rest.sql");
	if (!db.open())
	{
		QMessageBox::critical(0,"cannot open datebase,",
			"Unable to establish a database connect",QMessageBox::Cancel);
	}
	QSqlQuery query;
	query.exec("select * from customer");
	bool flag = false;

	QMessageBox error;
	error.setWindowTitle("warning");
		while (query.next())
		{
			if (query.value(1).toString() == ui->nameLineEdit->text())
			{
				flag = true;
				error.setText("this number have been registered!");
					error.exec();
			}
			else
			{*/
			QString username = ui->nameLineEdit->text();
			QString password = ui->lineEdit_2->text();
			if(creatcustomer(username,password)==1)
			{
				QMessageBox::information(this, "information", "register sucessed!");
			}
			else
			{
				QMessageBox::critical(0, "cannot register!",
					"unable",QMessageBox::Cancel);
			}
			close();
//}
		//}

}
