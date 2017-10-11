#include "firstwindow.h"

FirstWindow::FirstWindow(QObject *parent) : QObject(parent)
{

}

void FirstWindow::start()
{
    myThread = new MyThread(5); //передача значения в класс MyThread
}


