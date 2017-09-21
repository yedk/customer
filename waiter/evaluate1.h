#pragma once
#pragma once
#ifndef EVALUATE_H
#define EVALUATE_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
	class evaluate1;
}

class evaluate1 : public QDialog
{
	Q_OBJECT
public:
	explicit evaluate1(QWidget *parent = 0);
	~evaluate1();
	QString value;
	QMessageBox thanks;

	private slots:
	void on_checkBox_clicked();
	void on_checkBox_2_clicked();
	void on_checkBox_3_clicked();

private:
	Ui::evaluate1 *ui;
};

#endif