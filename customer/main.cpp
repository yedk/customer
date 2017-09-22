#include "customer.h"
#include <QtWidgets/QApplication>
#include "login.h"
#include "ui_login.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	customer w;
	//class log l;
	//l.show();
	//if (l.exec() != QDialog::Accepted)
	//{
		w.show();
		//connect();
		return a.exec();
	//}
	//else
		//return 0;
}
