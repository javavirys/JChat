#include "mainwindow.h"
#include "ui_mainwindow.h"

cMainWindow::cMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::cMainWindow)
{
    ui->setupUi(this);

    connect(ui->actionSign_in, SIGNAL(triggered()), this, SLOT(on_actionSign_in_clicked()));
    connect(ui->actionQuit, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->actionSetting, SIGNAL(triggered()), this, SLOT(on_actionSetting_in_clicked()));
}

cMainWindow::~cMainWindow()
{
    delete ui;
}

void cMainWindow::on_webView_loadStarted()
{
    ui->bprogress->setValue(0);
}

void cMainWindow::on_webView_loadProgress(int progress)
{
    ui->bprogress->setValue(progress);
}

void cMainWindow::on_webView_loadFinished(bool arg1)
{
    ui->bprogress->setValue(0);
    //if(!arg1)
    //{
        //QMessageBox::warning(this, "Error","Error opened page",QMessageBox::Ok, 0);
        //return;
    //}
}

void cMainWindow::on_actionSign_in_clicked()
{
    if(ui->actionSign_in->text()=="Connect")
    {
        QUrl url("http://coder.pusku.com/projects/jChat/server.php");
        ui->webView->load(url);
        ui->actionSign_in->setText("Disconnect");
    }else
    {
        ui->actionSign_in->setText("Connect");
        ui->webView->setUrl(QUrl("about:blank"));
        QNetworkSession session( ui->webView->page()->networkAccessManager()->configuration() );
        session.stop();
    }
}

void cMainWindow::on_actionSetting_in_clicked()
{
    //setting.setModal(true);
    //setting.showNormal();
}
