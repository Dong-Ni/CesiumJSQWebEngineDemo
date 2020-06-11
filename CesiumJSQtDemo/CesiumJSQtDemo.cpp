#include "CesiumJSQtDemo.h"
#include <QUrl>

CesiumJSQtDemo::CesiumJSQtDemo(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	InitUrl();
}

void CesiumJSQtDemo::InitUrl()
{
	QUrl url("www.baidu.com");
	//ui.webEngineView->load(url);
}
