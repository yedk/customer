#include "cook.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	cook w;
	w.show();
	return a.exec();
}
