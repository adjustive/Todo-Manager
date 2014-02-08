#ifndef TASK_H
#define TASK_H

#include <string>
#include <list>
#include <Classes/Category.h>
#include <QString>
#include <QDate>

#define TITLE_LENGTH 30
#define DESCRIPTION_LENGTH 200

using namespace std;

class Task
{
public:
    Task(QString Titel);
    ~Task();

    void   SetTitle(QString Title);
    QString GetTitle(void);
    void   SetDescription(QString Title);
    QString GetDescription(void);
    void   SetCategory(Category* cat);
    int    GetCategory(void);
    void   SetPriority( unsigned int Priority);
    unsigned int GetPriority(void);
    void   SetDueTo(QDate DueTo);
    QDate     GetDueTo(void);
    void   SetCompletion(unsigned int Percent);
    unsigned int GetCompletion(void);
    void CreateSubTask(Task* subTask);

private:
    QString Title;
    QString Description;
    Category *Cat;
    unsigned int Priority;
    QDate DueTo;
    unsigned int Completion;

    list <Task*> Subtasks; //Liste mit Pointern zu Subtasks
};

#endif // TASK_H
