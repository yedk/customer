#pragma once

#include <QtWidgets/QDialog>
#include "ui_cook.h"

class cook : public QDialog
{
	Q_OBJECT

public:
	cook(QWidget *parent = Q_NULLPTR);
	~cook();
	private slots:
	void on_examine_clicked();
	void on_finish_clicked();
private:
	Ui::cook *ui;
};
