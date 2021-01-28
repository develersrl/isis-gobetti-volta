#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml>

#include "messageboard.h"

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);

    // Expose the Message Board to QML
    MessageBoard mb;
    engine.rootContext()->setContextProperty("msgBoard", &mb);

    engine.load(url);

    return app.exec();
}
