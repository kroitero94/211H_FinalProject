#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <QString>
#include <QLabel>
using namespace std;


class player
{

private:
    QString fullname;
    QLabel x;
public:
    void setFullName(QString fullname) {this -> fullname = fullname;}
    QString getFullName() const {return fullname;}

};

#endif // PLAYER_H
