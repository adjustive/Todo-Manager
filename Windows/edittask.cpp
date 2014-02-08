#include "edittask.h"
#include "ui_edittask.h"

#include <QDebug>

#include "Classes/taskconnector.h"

#ifndef DEBUG_ON
  #define DEBUG_ON
#endif

EditTask::EditTask(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditTask)
{
    ui->setupUi(this);
    ui->lWarning->setStyleSheet("QLabel { color : red; }");
    ui->lWarning->hide();
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
    TaskConnector::CreateTask(ui->tTitle->text(), ui->tbDesc->document()->toPlainText(),
                              NULL, ui->cbbPriority->currentIndex(), ui->deDueTo->date());


}

void EditTask::on_tTitle_editingFinished()
{
 if(TaskConnector::TaskExisting(ui->tTitle->text()) != 0)
 {
     ui->lWarning->show();
    //TODO: OK-Button disablen
 }
 else
     ui->lWarning->hide();
}
