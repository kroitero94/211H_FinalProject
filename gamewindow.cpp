#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <iostream>
#include <QTimer>
#include "outsources.h"
#include <QDesktopServices>
#include <QUrl>
#include <QFile>
#include <ctype.h>
#include <iomanip>
#include <QDebug>
#include <QMessageBox>
using namespace std;

GameWindow::GameWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    QPixmap img(":/background/111.jpeg");
    ui->game_background->setPixmap(img);
    game_timer = QTime(0,0,0);
    t = new QTimer(this);
    connect(t,SIGNAL(timeout()),this,SLOT(myTime()));
    t->start(1000);

}

GameWindow::~GameWindow()
{
    delete ui;
}

void GameWindow::myTime()
{
    game_timer = game_timer.addSecs(1);
    QString time_text = game_timer.toString("mm : ss");
    ui->timer->setText(time_text);
    time_count++;

}

void GameWindow::on_button1_clicked()
{
   QString answer = ui->userAnswer1->toPlainText();
   QFile fi;
   try
   {
       exception_msg(answer);
   }
   catch(QString msg)
   {

       QMessageBox::information(0,msg,fi.errorString());
   }

   if(answer == "1")
   {
       count++;
       ui->Result1->setText("Your answer is correct! Nice strat!");

   }
   else if(answer != "1")
   {
       ui->Result1->setText("Wrong answer.");
   }



}

void GameWindow::on_button2_clicked()
{
    QString answer2 = ui->userAnswer2->toPlainText();
    QFile fi;
    try
    {
        exception_msg(answer2);
    }
    catch(QString msg)
    {
        QMessageBox::information(0,msg,fi.errorString());
    }

    if(answer2 == "4")
    {
        count++;
        ui->Result2->setText("Your answer is correct! Keep going!");
    }
    else
    {
        ui->Result2->setText("Wrong answer.");
    }
}


void GameWindow::on_button3_clicked()
{
    QString answer3 = ui->userAnswer3->toPlainText();
    QFile fi;
    try
    {
        exception_msg(answer3);
    }
    catch(QString msg)
    {
        QMessageBox::information(0,msg,fi.errorString());
    }

    if(answer3 == "1")
    {
        count++;
        ui->Result3->setText("Your answer is correct! Keep going!");
    }
    else
    {
        ui->Result3->setText("Wrong answer.");
    }
}


void GameWindow::on_button4_clicked()
{
    QString answer4 = ui->userAnswer4->toPlainText();
    QFile fi;
    try
    {
        exception_msg(answer4);
    }
    catch(QString msg)
    {
        QMessageBox::information(0,msg,fi.errorString());
    }

    if(answer4 == "4")
    {
        count++;
        ui->Result4->setText("Your answer is correct! Keep going!");
    }
    else
    {
        ui->Result4->setText("Wrong answer.");
    }
}


void GameWindow::on_button5_clicked()
{
    QString answer5 = ui->userAnswer5->toPlainText();
    QFile fi;
    try
    {
        exception_msg(answer5);
    }
    catch(QString msg)
    {
        QMessageBox::information(0,msg,fi.errorString());
    }

    if(answer5 == "1")
    {
        count++;
        ui->Result5->setText("Your answer is correct! Keep going!");
    }
    else
    {
        ui->Result5->setText("Wrong answer.");
    }
}


void GameWindow::on_button6_clicked()
{
    QString answer6 = ui->userAnswer6->toPlainText();
    QFile fi;
    try
    {
        exception_msg(answer6);
    }
    catch(QString msg)
    {
        QMessageBox::information(0,msg,fi.errorString());
    }


    if(answer6 == "4")
    {
        count++;
        ui->Result6->setText("Your answer is correct! Keep going!");
    }
    else
    {
        ui->Result6->setText("Wrong answer. Dont give up!");
    }
}


void GameWindow::on_button7_clicked()
{
    QString answer7 = ui->userAnswer7->toPlainText();
    QFile fi;
    try
    {
        exception_msg(answer7);
    }
    catch(QString msg)
    {
        QMessageBox::information(0,msg,fi.errorString());
    }

    if(answer7 == "4")
    {
        count++;
        ui->Result7->setText("Your answer is correct! Keep going!");
    }
    else
    {
        ui->Result7->setText("Wrong answer.");
    }
}


void GameWindow::on_button8_clicked()
{
    QString answer8 = ui->userAnswer8->toPlainText();
    QFile fi;
    try
    {
        exception_msg(answer8);
    }
    catch(QString msg)
    {
        QMessageBox::information(0,msg,fi.errorString());
    }

    if(answer8 == "3")
    {
        count++;
        ui->Result8->setText("Your answer is correct! Keep going!");
    }
    else
    {
        ui->Result8->setText("Wrong answer.");
    }
}


void GameWindow::on_button9_clicked()
{
    QString answer9 = ui->userAnswer9->toPlainText();
    QFile fi;
    try
    {
        exception_msg(answer9);
    }
    catch(QString msg)
    {
        QMessageBox::information(0,msg,fi.errorString());
    }

    if(answer9 == "3")
    {
        count++;
        ui->Result9->setText("Your answer is correct! Keep going!");
    }
    else
    {
        ui->Result9->setText("Wrong answer.");
    }
}


void GameWindow::on_button10_clicked()
{
    QString answer10 = ui->userAnswer10->toPlainText();
    QFile fi;
    try
    {
        exception_msg(answer10);
    }
    catch(QString msg)
    {
        QMessageBox::information(0,msg,fi.errorString());
    }

    if(answer10 == "1")
    {
        count++;
        ui->Result10->setText("Your answer is correct!\nQuestionnaire ended. Your score: ");
        ui->labelScore->setNum(count);
        ui->labelScore2->setText("out of 10 points");
    }
    else
    {
        ui->Result10->setText("Wrong answer.\nQuestionnaire ended. Your score: ");
        ui->labelScore->setNum(count);
        ui->labelScore2->setText("out of 10 points");
    }

    if(count <= 5)
    {
        ui->score->setText("Let's boost your knowledge about COVID-19 virus.\n");
    }
    else if( count > 5 && count <= 8)
    {
        ui->score->setText("You have proper knowledge about the COVID-19 virus.\n");
    }
    else
    {
        ui->score->setText("You are a genius. Well done!\n");
    }

    QFile fileOut("/Users/barkroitoro/211HF/out.txt");
    if(!fileOut.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
    {
        qCritical() << "File not found...";
    }

    QTextStream out(&fileOut);
    QString outfile;
    QString user_score = QString::number(count);
    outfile += user_score;
    out << "* Score: ";
    out << outfile << "/10\n---------------------------------\n";
    if(time_count < 60.0)
    {
        out << "* Time: " << time_count << " seconds.";
        out << "\n*********************************\n";
    }
    else
    {
        out << "* Time: " << (time_count/60.0) << " minutes.";
        out << "\n*********************************\n";
    }

}

void GameWindow::on_pushButton_clicked()
{
    QWidget::close();
}

void GameWindow::on_links_clicked()
{
    outSources outsource;
    outsource.isModal();
    outsource.exec();
}

bool GameWindow::exception_msg(QString ans)
{
    if(ans != "1" && ans != "2" && ans != "3" && ans != "4")
    {
        throw QString ("Invalid input");
    }
    else return true;
}



