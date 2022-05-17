#include "userinfo.h"
#include "ui_userinfo.h"
#include <QFile>
#include <QProcess>
#include <QWidget>
#include <QLabel>
#include <iostream>
#include <QMessageBox>

UserInfo::UserInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserInfo)
{
    ui->setupUi(this);
    ui->label->setText("Type in your full name:");
    ui->label_2->setText("Age:");
    ui->label_3->setText("Are you vaccinated?");
    ui->Yes->setStyleSheet("QPushButton {background-color:rgb(100,200,100);}");
    ui->No->setStyleSheet("QPushButton {background-color:rgb(200,40,50);}");
}

UserInfo::~UserInfo()
{
    delete ui;
}


void UserInfo::on_submit_clicked()
{
    QFile fileOut("/Users/barkroitoro/211HF/out.txt");
    fileOut.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text);
        QTextStream out(&fileOut);
        QString text,outfile, userName;

        userName = ui->fullName->toPlainText();
        plr.setFullName(userName);
        text += plr.getFullName();
        text += ", these are your details:\n\n* Name: ";
        outfile += "* Name: ";
        text += ui->fullName->toPlainText();
        outfile += ui->fullName->toPlainText();
        text += "\n* Age: ";
        outfile += "\n* Age: ";
        text += ui->age->toPlainText();
        outfile += ui->age->toPlainText();
        text += "\n* Zip Code: ";
        outfile += "\n* Zip Code: ";
        text += ui->zipCode_2->toPlainText();
        text += "\n* Vaxxed: ";
        outfile += ui->zipCode_2->toPlainText();
        outfile += "\n* Vaxxed: ";
        text += ui->Vaxx->toPlainText();
        outfile += ui->Vaxx->toPlainText();
        outfile += "\n---------------------------------\n";
        ui->ulabel->setText(text);
        out << outfile;
     fileOut.close();
}


void UserInfo::on_Yes_clicked()
{
    ui->label_yes->setText("Which type of vaccine? (Moderna, Pfizer, Etc):");
}

void UserInfo::on_No_clicked()
{
    QPushButton *tmpButton = (QPushButton*)sender( );
    QPalette pal = tmpButton->palette( );
    pal.setColor( QPalette::Button, QColorConstants::Red);
    tmpButton->setPalette( pal );
    tmpButton->setAutoFillBackground( true );
    ui->label_yes->setText("Type No, and the reason:");
}


void UserInfo::on_pushButton_clicked()
{
    QWidget::close();
}

