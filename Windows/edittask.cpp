#include "edittask.h"
#include "ui_edittask.h"

#include <QDebug>
#include <QPushButton>

#include "Classes/taskconnector.h"

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
    qDebug() << "Create Task with Titel:" << ui->tTitle->text() << endl;

    TaskConnector::CreateTask(ui->tTitle->text(), ui->tbDesc->document()->toPlainText(),
                              NULL, ui->cbbPriority->currentIndex(), ui->deDueTo->date());


}

void EditTask::on_tTitle_textChanged(const QString &arg1)
{
    if(TaskConnector::TaskExisting(arg1) != 0)
    {
        ui->lWarning->show();
        ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);
    }
    else
    {
        ui->lWarning->hide();
        ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(true);
    }
}
