#include "taskconnector.h"
#include "map"
#include <QDebug>
#include <QString>
#include <QDate>

map <string, Task*> TaskConnector::Tasks;

void TaskConnector::CreateTask(QString sTitel, QString sDescription, Category* category, unsigned int Priority, QDate DueTo)
{
    Task *newTask = new Task(sTitel);
    newTask->SetDescription(sDescription);
    newTask->SetCategory(category);
    newTask->SetPriority(Priority);
    newTask->SetDueTo(DueTo);
    newTask->SetCompletion(0);

    if(Tasks.find(sTitel.toStdString()) != Tasks.end())
        qDebug()<<"Task mit diesem Titel bereits vorhanden";

    Tasks.insert(std::pair<string,Task*>(sTitel.toStdString(), newTask));//Neuen Task speichern

    qDebug() << Tasks.size();
}

void TaskConnector::CreateSubTask(QString sTitel, QString sDescription, Category* category, unsigned int Priority, QDate DueTo, Task* parentTask)
{


//    //Parent Task suchen:
//    map<string,Task*>::iterator it;
//    it = Tasks.find(parentTask->GetTitle());

//    if(it != Tasks.end())
//    {
//        Task* newTask = new Task(sTitel);
//        newTask->SetDescription(sDescription);
//        newTask->SetCategory(category);
//        newTask->SetPriority(Priority);
//        newTask->SetDueTo(DueTo);
//        newTask->SetCompletion(0);
//       // (*it)->second->

//        Tasks.insert(sTitel, newTask);//Neuen Task speichern
//         //it.//CreateSubTask(newTask);
//         //        Tasks.find(parentTask->GetTitle())->second

//    }
//    else
//        qDebug() << "Kein Parent Task gefunden";
}

int TaskConnector::TaskExisting(QString Key)
{
    if(Tasks.find(Key.toStdString()) != Tasks.end())
        return 1;

    return 0;
}
