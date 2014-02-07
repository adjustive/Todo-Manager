#ifndef EDITTASK_H
#define EDITTASK_H

#include <QDialog>

namespace Ui {
class EditTask;
}

class EditTask : public QDialog
{
    Q_OBJECT

public:
    explicit EditTask(QWidget *parent = 0);
    ~EditTask();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::EditTask *ui;
};

#endif // EDITTASK_H
