#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <QDebug>

class HelloWorld : public QObject
{
    Q_OBJECT
public:
    HelloWorld()
    {

    }

    static bool returnTrue()
    {
        return true;
    }

public slots:
    void someSlot()
    {
        qDebug() << "test";
    }
};

#endif // HELLOWORLD_H
