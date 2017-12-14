#include "logic.h"
#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QQuickView>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    
    Logic logic;
//    QQmlApplicationEngine engine;
//    engine.rootContext()->setContextProperty("logic", QVariant::fromValue(logic.getList()));
//    engine.load(QUrl(QStringLiteral("qrc:/qml/main.qml")));

//    logic.show(logic.getList());

    QQuickView view;
    view.setSource(QUrl::fromLocalFile(":/qml/main.qml"));
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    QQmlContext *ctxt = view.rootContext();
    ctxt->setContextProperty("logic", QVariant::fromValue(logic.getList()));

//    view.show();

    return app.exec();
}
