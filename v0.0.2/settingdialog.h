#ifndef SETTINGDIALOG_H
#define SETTINGDIALOG_H

#include <QDialog>
#include <qmessagebox.h>

namespace Ui {
class cSettingDialog;
}

class cSettingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit cSettingDialog(QWidget *parent = 0);
    ~cSettingDialog();

    void showEvent(QShowEvent * event);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::cSettingDialog *ui;
};

#endif // SETTINGDIALOG_H
