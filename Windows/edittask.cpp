#include "edittask.h"
#include "ui_edittask.h"
#include <QDebug>

#ifndef DEBUG_ON
  #define DEBUG_ON
#endif

EditTask::EditTask(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditTask)
{
    ui->setupUi(this);
}

EditTask::~EditTask()
{
    delete ui;
}

void EditTask::on_buttonBox_accepted()
{
#ifdef DEBUG_ON
    qDebug() << "Create Task with Titel:" << endl;
#endif
}
