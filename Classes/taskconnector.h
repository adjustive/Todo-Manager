#ifndef TASKCONNECTOR_H
#define TASKCONNECTOR_H
#include "Task.h"
#include "category.h"
#include <map>
#include <string>

using namespace std;

class TaskConnector
{
public:
    static void CreateTask(string sTitel, string sDescription, Category* category, unsigned int Priority, tm DueTo);
    static void CreateSubTask(string sTitel, string sDescription, Category* category, unsigned int Priority, tm DueTo, unsigned int Completion, Task* parentTask);


private:
   static map <string, Task*> Tasks;
};

#endif // TASKCONNECTOR_H
