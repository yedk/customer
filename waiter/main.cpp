#include "waiter.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	waiterClass w;
	w.show();
	return a.exec();
}
