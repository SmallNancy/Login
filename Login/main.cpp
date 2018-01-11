#include "Login.h"
#include <QtWidgets/QApplication>



int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Login w;
	w.setFixedSize(420, 320);
	w.show();
	return a.exec();
}
