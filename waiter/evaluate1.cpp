#include "evaluate1.h"
#include "ui_evaluate.h"
#include <QMessageBox>
#include <Qdebug>

evaluate1::evaluate1(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::evaluate1)
{
	ui->setupUi(this);
}
evaluate1::~evaluate1()
{
	delete ui;
}

void evaluate1::on_checkBox_clicked()
{
	thanks.setWindowTitle("evaluate");
	thanks.setText("thanks your evaluate!");
	thanks.show();
	reject();
}
void evaluate1::on_checkBox_2_clicked()
{
	thanks.setWindowTitle("evaluate");
	thanks.setText("thanks your evaluate!");
	thanks.show();
	reject();
}

void evaluate1::on_checkBox_3_clicked()
{
	thanks.setWindowTitle("evaluate");
	thanks.setText("thanks your evaluate!");
	thanks.show();
	reject();
}
