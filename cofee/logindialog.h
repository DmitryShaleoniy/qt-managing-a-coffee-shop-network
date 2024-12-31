#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QWidget>

namespace Ui {
class LogInDialog;
}

class LogInDialog : public QWidget
{
    Q_OBJECT

public:
    explicit LogInDialog(QWidget *parent = nullptr);
    ~LogInDialog();

private:
    Ui::LogInDialog *ui;
};

#endif // LOGINDIALOG_H
