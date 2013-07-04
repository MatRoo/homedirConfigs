#include <QCoreApplication>
#include <iostream>

using namespace std;

class Task : public QObjecct
{
    Q_OBJECT
public:
    Task(QObject *parent = 0) : QObject(parent) {}

public slots:
    void run()
    {
        emit finished();
    }

signals:
    void finished();
};

int main(int argc, char *argv[])
{
    Task *task = new Task(&a);

    QObject::connect(task, SIGNAL(finished()), &a, SLOT(quit()));
    QTimer::singleShot(0, task, SLOT(run()));
    cout << " test";
    return a.exec();
}
