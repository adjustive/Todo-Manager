#ifndef TASKCONNECTOR_H
#define TASKCONNECTOR_H
#include "Task.h"
#include "category.h"
#include <map>
#include <QString>
#include <QDate>

using namespace std;

class TaskConnector
{
public:
    static void CreateTask(QString sTitel, QString sDescription, Category* category, unsigned int Priority, QDate DueTo);
    static void CreateSubTask(QString sTitel, QString sDescription, Category* category, unsigned int Priority, QDate DueTo, Task* parentTask);
    static int TaskExisting(QString Key);

private:
   static map <string, Task*> Tasks;
};

#endif // TASKCONNECTOR_H
