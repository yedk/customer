#include "login.h"
#include<QMessageBox>
#include"ui_login.h"
#include "register.h"
#include "ui_register.h"
#include <QDebug>
#include "customer.h"
#include "ui_customer.h"
#include <qevent.h>


bool flag = false;
//bool dialog_flag =;//对话框完成标志；
log::log(QWidget *parent)
	:QDialog(parent),
	ui(new Ui::log)
{
	ui->setupUi(this);
	ui->lineEdit_2->setEchoMode(QLineEdit::Password);//隐藏输入密码；
}
log::~log()
{
	delete ui;
}
bool log::log_sucess()
{
	if (flag)
		return true;
	else
	return false;
}
void log::closeEvent(QCloseEvent * event)
{
	event->ignore();
}
void log::on_pushButton_clicked()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../rest.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database connection.", QMessageBox::Cancel);
	}
	QSqlQuery query;
	query.exec("select * from customer");

	QMessageBox error;
	error.setWindowTitle("login failed");

	while (query.next())
	{
		if ((query.value(1).toString()==ui->lineEdit->text())&& (query.value(2).toString() == ui->lineEdit_2->text()))
		{
			flag = true;
			//close();
			break;
		}
	}
	if (flag)
	{
		//emit mainwindow();
		//close();
		this->hide();
	}
	else
	{
		error.setText("user name or password error");
		error.exec();
	}

}
void log::on_pushButton_2_clicked()//注册
{
	reg *regi = new reg(this);
	regi->setGeometry(QRect(500, 250, 376, 247));
	regi->setWindowModified(true);
	regi->show();
}
