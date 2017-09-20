#include "evaluate.h"
#include "ui_evaluate.h"
#include <QMessageBox>
#include <Qdebug>

evaluate::evaluate(QWidget *parent):
	QDialog(parent),
	ui(new Ui::evaluate)
{
	ui->setupUi(this);
}
evaluate::~evaluate()
{
	delete ui;
}

void evaluate::on_checkBox_clicked()
{
	thanks.setWindowTitle("evaluate");
	thanks.setText("thanks your evaluate!");
	thanks.show();
	reject();
}
void evaluate::on_checkBox_2_clicked()
{
	thanks.setWindowTitle("evaluate");
	thanks.setText("thanks your evaluate!");
	thanks.show();
	reject();
}

void evaluate::on_checkBox_3_clicked()
{
	thanks.setWindowTitle("evaluate");
	thanks.setText("thanks your evaluate!");
	thanks.show();
	reject();
}
