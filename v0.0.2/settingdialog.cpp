#include "settingdialog.h"
#include "ui_settingdialog.h"

cSettingDialog::cSettingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cSettingDialog)
{
    //QMessageBox::warning(this, "Warning","cSettingDialog create",QMessageBox::Ok, 0);
    ui->setupUi(this);
}

cSettingDialog::~cSettingDialog()
{
   // QMessageBox::warning(this, "Warning","cSettingDialog destroy",QMessageBox::Ok, 0);
    delete ui;
}

void cSettingDialog::on_pushButton_2_clicked()
{
    this->close();
}

void cSettingDialog::on_pushButton_clicked()
{
    this->close();
}

void cSettingDialog::showEvent(QShowEvent * event)
{
    QWidget::showEvent(event);
    QCoreApplication::processEvents();

}
