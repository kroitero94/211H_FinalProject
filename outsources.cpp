#include "outsources.h"
#include "ui_outsources.h"
#include <QDesktopServices>
#include <QUrl>
#include <iostream>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

outSources::outSources(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::outSources)
{
    ui->setupUi(this);
    QPixmap background(":/img/covid-19.jpeg");
    ui->labelbackground_links->setPixmap(background);
    ui->output_label->setText("Here are links that will help you find answers: ");
}

outSources::~outSources()
{
    delete ui;
}

//A function that read from a file and assign the exact url to its button.
void outSources::on_cdcLink_clicked()
{
    QFile file("/Users/barkroitoro/211HF/links.txt");
    if (!file.exists())
    {
        qCritical() << "File not found...";
        return;
    }
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::information(0,"error",file.errorString());
        return;
    }
    qInfo() << "Reading a file...";
    QTextStream in(&file);
    QString link1 = file.readLine();
    link1 = link1.trimmed();
    qInfo() << link1;
    QDesktopServices::openUrl(QUrl(link1));
    file.close();


}

//A function that read from a file and assign the exact url to its button.
void outSources::on_unicefLink_clicked()
{

    QFile file("/Users/barkroitoro/211HF/links.txt");
    if (!file.exists())
    {
        qCritical() << "File not found...";
        return;
    }
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::information(0,"error",file.errorString());
        return;
    }
    qInfo() << "Reading a file...";
    QTextStream in(&file);
    for(int i = 0; i < 2; i++)
    {
        if(i==1)
        {
            QString link = file.readLine();
            link = link.trimmed();
            qInfo() << link;
            QDesktopServices::openUrl(QUrl(link));
            file.close();
        }
        else
           QString link_null = file.readLine();
    }
}

//A function that read from a file and assign the exact url to its button.
void outSources::on_nycLink_clicked()
{
    QFile file("/Users/barkroitoro/211HF/links.txt");
    if (!file.exists())
    {
        qCritical() << "File not found...";
        return;
    }
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::information(0,"error",file.errorString());
        return;
    }
    qInfo() << "Reading a file...";
    QTextStream in(&file);
    for(int i = 0; i < 4; i++)
    {
        if(i==3)
        {
            QString link = file.readLine();
            link = link.trimmed();
            qInfo() << link;
            QDesktopServices::openUrl(QUrl(link));
            file.close();
        }
        else
           QString link_null = file.readLine();
    }
}


//A function that read from a file and assign the exact url to its button.
void outSources::on_jhLink_clicked()
{
    QFile file("/Users/barkroitoro/211HF/links.txt");
    if (!file.exists())
    {
        qCritical() << "File not found...";
        return;
    }
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::information(0,"error",file.errorString());
        return;
    }
    qInfo() << "Reading a file...";
    QTextStream in(&file);
    for(int i = 0; i < 3; i++)
    {
        if(i==2)
        {
            QString link = file.readLine();
            link = link.trimmed();
            qInfo() << link;
            QDesktopServices::openUrl(QUrl(link));
            file.close();
        }
        else
           QString link_null = file.readLine();
    }
}

//A function that read from a file and assign the exact url to its button.
void outSources::on_harvardLink_clicked()
{
    QFile file("/Users/barkroitoro/211HF/links.txt");
    if (!file.exists())
    {
        qCritical() << "File not found...";
        return;
    }
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::information(0,"error",file.errorString());
        return;
    }
    qInfo() << "Reading a file...";
    QTextStream in(&file);
    for(int i = 0; i < 5; i++)
    {
        if(i==4)
        {
            QString link = file.readLine();
            link = link.trimmed();
            qInfo() << link;
            QDesktopServices::openUrl(QUrl(link));
            file.close();
        }
        else
           QString link_null = file.readLine();
    }
}

//A function that close the specific window.
void outSources::on_pushButton_clicked()
{
    QWidget::close();
}

