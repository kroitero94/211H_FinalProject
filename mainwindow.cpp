#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"about.h"
#include "userinfo.h"
#include "gamewindow.h"
#include <QMessageBox>
#include <QWidget>
#include <QDebug>
#include <QTimer>
#include <QDateTime>
#include <QPixmap>
#include <QFile>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap background(":/img/Coronavirus-CDC.jpeg");
    ui->backround_image->setPixmap(background);
    ui->Subject->setText("The COVID-19 Game");
    ui->AboutGame->setText("About the Game");
    ui->StartGame->setStyleSheet("background-color:rgb(100,200,100);");
    ui->AboutGame->setStyleSheet("background-color:gray;");
    ui->ExitGame->setStyleSheet("background-color:rgb(200,40,50);");
    ui->Subject->setStyleSheet("background-color:white;");

    ui->permission_Label->setStyleSheet("color: rgb(255, 38, 0);");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_login_clicked()
{
   UserInfo info;
   info.setModal(true);
   permission = true;
   info.exec();
}


void MainWindow::on_Subject_clicked()
{
    setStyleSheet("background-color: rgb(164, 164, 164);");
}

void MainWindow::on_AboutGame_clicked()
{
    About gameInfo;
    gameInfo.setModal(true);
    gameInfo.exec();

}


void MainWindow::on_StartGame_clicked()
{
    if (permission)
    {
       GameWindow startPlay;
       startPlay.setModal(true);
       startPlay.exec();
    }
    else
    {
        ui->permission_Label->setText("Please log in first");
    }   

}

void MainWindow::on_ExitGame_clicked()
{
    QWidget::close();
}

