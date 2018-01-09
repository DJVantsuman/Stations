#include <QGuiApplication>

#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QQuickView>

#include "logic.h"
#include "station.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Logic logic;

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("logic", &logic);
    engine.load(QUrl(QStringLiteral("qrc:/qml/main.qml")));

    logic.show();

    return app.exec();
}
