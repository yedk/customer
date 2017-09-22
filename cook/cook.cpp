#include "cook.h"
#include "ui_cook.h"
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QMessageBox>
#include <qfile.h>


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
	QString d = QStringLiteral("已做好！");
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../finished.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a database", QMessageBox::Cancel);
	}
	QSqlQuery query;
	query.exec("CREATE TABLE finished (id INTEFER PRIMARY KEY,"
		"idname varchar(20),"
		"dish varchar(20))");
	query.exec("insert into finished(idname,dish)values('"+d+"','"+d+"')");
	db.close();//关闭数据库
	QFile::remove("../tray.sql");
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