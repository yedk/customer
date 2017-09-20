#include "customer.h"
#include <QtWidgets/QApplication>
#include "login.h"
#include "ui_login.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	customer w;
	w.show();
	return a.exec();
}
