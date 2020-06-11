#pragma once

#include <QtWidgets/QWidget>
#include "ui_CesiumJSQtDemo.h"

class CesiumJSQtDemo : public QWidget
{
	Q_OBJECT

public:
	CesiumJSQtDemo(QWidget *parent = Q_NULLPTR);

	void InitUrl();

private:
	Ui::CesiumJSQtDemoClass ui;
};
