#ifndef NEWCLASS_H
#define NEWCLASS_H

#include <QObject>

class NewClass : public QObject
{
   Q_OBJECT

   public:
     explicit NewClass(int value, QObject *parent = nullptr);
   signals:
     void sendfirstvalue(int);
   private slots:
     void Start();
    private:
      int value;
};

#endif // NEWCLASS_H
