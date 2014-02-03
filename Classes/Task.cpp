#include <time.h>
#include <string>
#include <list>
#include <Classes/Task.h>

using namespace std;

//TODO: Hier weitermachen!!
void Task::SetTitle(string Title)
{
    this->Title = Title;
}

string Task::GetTitle(void)
{
    return Title;
}

void  Task::SetDescription(string Description)
{
    this->Description = Description;
}

string Task::GetDescription(void)
{
    return Description;
}

void  Task::SetCategory(int Key)
{
    //TODO Categorien nach Key durchsuchen und dementsprechend die richtige setzen
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

void  Task::SetDueTo(tm DueTo)
{
    this->DueTo = DueTo;
}

tm    Task::GetDueTo(void)
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
    return Completion;
}
