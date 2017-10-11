#ifndef FIRSTWINDOW_H
#define FIRSTWINDOW_H

#include "mythread.h"
#include <QObject>

class FirstWindow : public QObject
{
    Q_OBJECT
public:
    explicit FirstWindow(QObject *parent = nullptr);

private:
    MyThread *myThread;

private slots:

public slots:
    void start();
};
#endif // FIRSTWINDOW_H
