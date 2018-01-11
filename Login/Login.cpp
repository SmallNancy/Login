#include "Login.h"
#include"ui_Login.h"
#include"frameless.h"
#include <QMovie>
#include <QLabel>


Login::Login(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowFlags(Qt::FramelessWindowHint);
	QMovie *movie = new QMovie("D:/code/Login/Login/Resources/timg.gif");
	ui.label->setMovie(movie);
	movie->start();
	//�����ڽ��� ��Ե���죬�����϶�
	FramelessHelper *pHelper = new FramelessHelper(this);
	pHelper->activateOn(this);  //���ǰ����
	pHelper->setTitleHeight(ui.centralWidget->height());  //���ô���ı������߶�
	pHelper->setWidgetMovable(true);  //���ô�����ƶ�
	pHelper->setWidgetResizable(true);  //���ô��������
	pHelper->setRubberBandOnMove(false);  //������Ƥ��Ч��-���ƶ�
	pHelper->setRubberBandOnResize(false);  //������Ƥ��Ч��-������

}
