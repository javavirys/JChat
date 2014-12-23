#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include <QtWidgets>
#include "inetutils.h"
#include "settingdialog.h"
#include <QNetworkSession>

namespace Ui {
class cMainWindow;
}

class cMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit cMainWindow(QWidget *parent = 0);
    ~cMainWindow();

    cSettingDialog setting;

private slots:

    void on_webView_loadStarted();

    void on_webView_loadProgress(int progress);

    void on_webView_loadFinished(bool arg1);


    void on_actionSign_in_clicked();
    void on_actionSetting_in_clicked();

private:
    Ui::cMainWindow *ui;
};

#endif // MAINWINDOW_H
