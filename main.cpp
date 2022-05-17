#include "mainwindow.h"
#include <QApplication>

/*

Bar Kroitoro
CunyID #: 24150999
Spring 2022 - CSC 211H 1700
Date of Submission: Sunday, May 15th, 2022
Time Stamp:  17:00 PM
Final Project - The Covid19 Game
Dr. Azhar

*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
