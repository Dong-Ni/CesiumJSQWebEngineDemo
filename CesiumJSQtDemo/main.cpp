#include "CesiumJSQtDemo.h"
#include <QtWidgets/QApplication>
#include <QtWebEngineWidgets/QWebEngineSettings>
#include <QtWebEngineWidgets/QWebEngineProfile>



int main(int argc, char *argv[])
{
	QCoreApplication::setOrganizationName("QtExamples");
	QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
	QCoreApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);

	QApplication a(argc, argv);

	QWebEngineSettings::defaultSettings()->setAttribute(QWebEngineSettings::PluginsEnabled, true);
#if QT_VERSION >= QT_VERSION_CHECK(5, 13, 0)
	QWebEngineSettings::defaultSettings()->setAttribute(QWebEngineSettings::DnsPrefetchEnabled, true);
	QWebEngineProfile::defaultProfile()->setUseForGlobalCertificateVerification();
#endif

	CesiumJSQtDemo w;
	w.show();
	return a.exec();
}
