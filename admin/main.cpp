#include "admin.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	adminClass w;
	w.show();
	return a.exec();
}
