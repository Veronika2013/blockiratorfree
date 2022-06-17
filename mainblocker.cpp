#include "mainblocker.h"
#include "ui_mainblocker.h"
#include <QFile>
#include <QDesktopServices>
#include <QUrl>

MainBlocker::MainBlocker(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainBlocker)
{

    ui->setupUi(this);

    QFile *file = new QFile("key.bkl");//check key in device

    if(file->size() == 0){
        generate_key();
    }
    else{
        file->open(QFile::ReadOnly);
        QString data = file->readAll();
        ui->lineEdit->setText(data);
    }

}

MainBlocker::~MainBlocker()
{
    delete ui;
}


void MainBlocker::on_settingsBth_pressed()
{

}


void MainBlocker::on_copyBth_pressed()
{
    QApplication::clipboard()->setText(ui->lineEdit->text());
    QMessageBox::information(this,("Done"),("Key copy!"));

}


void MainBlocker::on_registerBth_pressed()
{
    QDesktopServices::openUrl(QUrl("https://test.com"));
}

