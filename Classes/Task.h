#ifndef TASK_H
#define TASK_H

#include <string>
#include <list>
#include <Classes/Category.h>


#define TITLE_LENGTH 30
#define DESCRIPTION_LENGTH 200

using namespace std;

class Task
{
public:
    Task();
    ~Task();

    void   SetTitle(string Title);
    string GetTitle(void);
    void   SetDescription(string Title);
    string GetDescription(void);
    void   SetCategory(int Key);
    int    GetCategory(void);
    void   SetPriority( unsigned int Priority);
    unsigned int GetPriority(void);
    void   SetDueTo(tm DueTo);
    tm     GetDueTo(void);
    void   SetCompletion(unsigned int Percent);
    unsigned int GetCompletion(void);

private:
    string Title;
    string Description;
    Category *Cat;
    unsigned int Priority;
    tm DueTo;
    unsigned int Completion;

    //TODO@Schöffi -> herausfinden wie die scheiß list:: funktioniert
    //list::Task Subtasks;
};

#endif // TASK_H