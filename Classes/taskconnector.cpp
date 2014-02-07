#include "taskconnector.h"
#include "map"
#include <QDebug>

map <string, Task*> TaskConnector::Tasks;

void TaskConnector::CreateTask(string sTitel, string sDescription, Category* category, unsigned int Priority, tm DueTo)
{
    Task *newTask = new Task(sTitel);
    newTask->SetDescription(sDescription);
    newTask->SetCategory(category);
    newTask->SetPriority(Priority);
    newTask->SetDueTo(DueTo);
    newTask->SetCompletion(0);

    Tasks.insert(std::pair<string,Task*>(sTitel, newTask));//Neuen Task speichern
}

void TaskConnector::CreateSubTask(string sTitel, string sDescription, Category* category, unsigned int Priority, tm DueTo, Task* parentTask)
{
    //Parent Task suchen:
    map<string,Task*>::iterator it;
    it = Tasks.find(parentTask->GetTitle());

    if(it != Tasks.end())
    {
        Task* newTask = new Task(sTitel);
        newTask->SetDescription(sDescription);
        newTask->SetCategory(category);
        newTask->SetPriority(Priority);
        newTask->SetDueTo(DueTo);
        newTask->SetCompletion(0);
        it->second->CreateSubTask(newTask);
    }
    else
        qDebug() << "Kein Parent Task gefunden";
}
