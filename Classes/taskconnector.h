#ifndef TASKCONNECTOR_H
#define TASKCONNECTOR_H
#include "Task.h"
#include "category.h"
#include <map>
#include <QString>
#include <QDate>
#include <QMessageBox>

using namespace std;

class TaskConnector
{
public:
    static void CreateTask(QString sTitel, QString sDescription, Category* category, unsigned int Priority, QDate DueTo);
    static void CreateSubTask(QString sTitel, QString sDescription, Category* category, unsigned int Priority, QDate DueTo, Task* parentTask);
    static int TaskExisting(QString Key);

private:
   static map <QString, Task*> Tasks;
   static QMessageBox errMessage;
};

#endif // TASKCONNECTOR_H
