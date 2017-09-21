#pragma once
#ifndef WAITER_H
#define WAITER_H

#include <QtWidgets/QDialog>
#include "ui_waiter.h"
#include "ui_waiter.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <string.h>
#include "evaluate1.h"
#include "ui_evaluate.h"


namespace Ui {
	class waiterClass;
}
class waiterClass : public QDialog
{
	Q_OBJECT

public:
	waiterClass(QWidget *parent = Q_NULLPTR);
	~waiterClass();

private:
	Ui::waiterClass *ui;
private slots:
	void on_claim_clicked();
	void on_evaluate_clicked();
	void on_viewinformation_clicked();
};

#endif
