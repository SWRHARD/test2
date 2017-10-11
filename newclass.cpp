#include "newclass.h"
#include <windows.h>
#include "QDebug"

NewClass::NewClass(int value, QObject *parent)
    : QObject(parent)
{
    this->value = value;
}

void NewClass::Start()
{
    qDebug() << "value" << value;
   for(int i = 0; i < value; i++)
   {
     qDebug() << "i" << i;
     emit sendfirstvalue(i);
     Sleep(1000); // from windows.h
   }
}
