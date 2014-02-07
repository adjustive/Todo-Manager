#include "Windows/mainwindow.h"
#include "ui_mainwindow.h"
#include "Windows/edittask.h"
#include "Classes/taskconnector.h"
#include <QDebug>
#include <time.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_Task_triggered()
{
    EditTask NewTask ;
    qDebug() << "Create Task" << endl;
    TaskConnector::CreateTask("Erster Task","BLABLABLA DEsc", Category("name", QColor(0, 0, 0, 255)), 1, tm.);
    NewTask.exec();


}
