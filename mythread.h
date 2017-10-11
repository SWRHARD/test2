#ifndef MYTHREAD_H
#define MYTHREAD_H

#include "newclass.h"
#include <QObject>
#include <QThread>

class MyThread : public QObject
{
  Q_OBJECT
  Q_PROPERTY(QString firstNumber READ GetFirstNumber WRITE SetFirstNumber NOTIFY firstNumberChanged)

  private:
    QThread *thread;
    NewClass *newClass;
    QString firstNumber;
    int counter;

  private slots:
    void UpdateFirstValue (int i);
  public slots:
  // это основная причина, почему не работало; вы определили его как private, но хотели вызывать из qml
    void StartThread(int);

  public:
    explicit MyThread(int value, QObject *parent = nullptr);
    explicit MyThread(QObject *parent = nullptr);
    QString GetFirstNumber();
    void SetFirstNumber(QString);

  signals:
    void firstNumberChanged();
};
#endif // MYTHREAD_H
