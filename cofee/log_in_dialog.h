#ifndef LOG_IN_DIALOG_H
#define LOG_IN_DIALOG_H

#include <QDialog>

namespace Ui {
class LogInDialog;
}

class LogInDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LogInDialog(QWidget *parent = nullptr);
    //~LogInDialog();
private:
    Ui::LogInDialog *ui;
};

#endif // LOG_IN_DIALOG_H
