#include "mythread.h"

MyThread::MyThread(QObject *parent)
    : QObject(parent)
{
}

MyThread::MyThread(int counter, QObject *parent)
    : QObject(parent)
{
    this->counter = counter;
    StartThread(counter);
}

QString MyThread::GetFirstNumber()
{
   return firstNumber;
}

void MyThread::SetFirstNumber(QString value)
{
  firstNumber = value;
}

void MyThread::StartThread(int counter)
{
   thread = new QThread;
   newClass = new NewClass(counter);
   newClass->moveToThread(thread);

   connect(newClass, SIGNAL(sendfirstvalue(int)), this, SLOT(UpdateFirstValue(int)));
   connect(thread, SIGNAL(started()), newClass, SLOT(Start()));
   thread->start();
}

void MyThread::UpdateFirstValue (int i)
{
   firstNumber = QString::number(i);
   emit firstNumberChanged();
}

