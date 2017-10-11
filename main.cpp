#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QThread>
#include "mythread.h"
#include "firstwindow.h"

// ну main вы просто не приводили; приведу, чтобы было понятно, как можно запустить
int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    qmlRegisterType<FirstWindow>("FirstWindowModule", 1, 0, "FirstWindow");
    qmlRegisterType<MyThread>("NameModule", 1, 0, "TypeName");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QLatin1String("qrc:/firstwindow.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
