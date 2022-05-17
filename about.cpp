#include "about.h"
#include "ui_about.h"
#include <QMessageBox>
#include <QWidget>
#include <QString>

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
    QPixmap image(":/background/question_back.jpeg");
    ui->label->setPixmap(image);
    ui->label->setText(" This Covid19-Game is designed to check general knoweldge about the COVID-19 virus.\n We want to boost, educate and sharpen the player's knowledge.\n\n By the design of this questionnaire, we will be able to fade away the Dis/Misinformation on COVID-19.\n At the end, the program will deliver to the player reliable and proper outsources about COVID19.\n Before pressing start, Log in and fill in your details for the game.\n After pressing start, you will start the game and it will generate a running timer.\n In each question, type your answer in the white box.\n After pressing submit you will see if you answered correctly or not.");
    {

    }
}

About::~About()
{
    delete ui;
}


void About::on_pushButton_clicked()
{
    QWidget::close();
}

