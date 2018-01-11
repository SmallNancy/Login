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
	//主窗口界面 边缘拉伸，标题拖动
	FramelessHelper *pHelper = new FramelessHelper(this);
	pHelper->activateOn(this);  //激活当前窗体
	pHelper->setTitleHeight(ui.centralWidget->height());  //设置窗体的标题栏高度
	pHelper->setWidgetMovable(true);  //设置窗体可移动
	pHelper->setWidgetResizable(true);  //设置窗体可缩放
	pHelper->setRubberBandOnMove(false);  //设置橡皮筋效果-可移动
	pHelper->setRubberBandOnResize(false);  //设置橡皮筋效果-可缩放

}
