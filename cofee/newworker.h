#ifndef NEWWORKER_H
#define NEWWORKER_H

#include <QDialog>

namespace Ui {
class NewWorker;
}

class NewWorker : public QDialog
{
    Q_OBJECT

public:
    explicit NewWorker(QWidget *parent = nullptr);
    ~NewWorker();
    void getparameters(QString &name, QString &login, QString &password, QString &dep);

private:
    Ui::NewWorker *ui;
};

#endif // NEWWORKER_H
