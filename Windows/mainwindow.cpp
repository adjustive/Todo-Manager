#include "Windows/mainwindow.h"
#include "ui_mainwindow.h"
#include "Windows/edittask.h"

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
    NewTask.exec();
}
