#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Login.h"

class Login : public QMainWindow
{
	Q_OBJECT

public:
	Login(QWidget *parent = Q_NULLPTR);


//private slots:
	//void login();


private:
	Ui::LoginClass ui;
};
