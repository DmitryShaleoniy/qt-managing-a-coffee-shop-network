#ifndef TIME_CHOICE_DIALOG_H
#define TIME_CHOICE_DIALOG_H

#include <QDialog>

namespace Ui {
class time_choice_dialog;
}

class time_choice_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit time_choice_dialog(QWidget *parent = nullptr);
    ~time_choice_dialog();
    void getparameters(QString &name, QString &adress);

private:
    Ui::time_choice_dialog *ui;
};

#endif // TIME_CHOICE_DIALOG_H
