#include <time.h>
#include <string>
#include <list>
#include <QDebug>
#include <QString>
#include <Classes/Task.h>

using namespace std;

//TODO: Hier weitermachen!!
void Task::SetTitle(QString Title)
{
    this->Title = Title;
}
Task::Task(QString Titel)
{
    this->Title = Titel; //unique identifier?
}

QString Task::GetTitle(void)
{
    return Title;
}

void  Task::SetDescription(QString Description)
{
    this->Description = Description;
}

QString Task::GetDescription(void)
{
    return Description;
}

void  Task::SetCategory(Category* cat)
{
    //TODO Categorien nach Key durchsuchen und dementsprechend die richtige setzen
    //-georg: warum hier nicht einfach bereits die korrekte Kategory übergeben?
}

int   Task::GetCategory(void)
{
    //TODO
    return 0;
}

void  Task::SetPriority(unsigned int Priority)
{
    this->Priority = Priority;

    if(this->Priority > 5)
        this->Priority = 5;
}

unsigned int   Task::GetPriority(void)
{
    return Priority;
}

void  Task::SetDueTo(QDate DueTo)
{
    this->DueTo = DueTo;
}

QDate    Task::GetDueTo(void)
{
    return DueTo;
}

//TODO bei Tasks mit Subtasks muss Completion mit dem Arithmetischen mittel berechnet werden
void  Task::SetCompletion(unsigned int Percent)
{
    Completion = Percent;

    if(Completion > 100)
        Completion = 100;
}

unsigned int   Task::GetCompletion(void)
{
    //Alle Subtasks durchlaufen und das arithemische Mittel berechnen
    unsigned int average = 0;
    for(list<Task*>::iterator it = Subtasks.begin(); it != Subtasks.end(); it++)
        average += (*it)->GetCompletion();

    average = average / Subtasks.size();

    qDebug() << "Average:" << average << endl;

    return Completion;
}

void Task::CreateSubTask(Task* subTask)
{
    list<Task*>::iterator it = Subtasks.end();
    Subtasks.insert(it, subTask);
}
