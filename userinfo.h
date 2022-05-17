#ifndef USERINFO_H
#define USERINFO_H
#include "mainwindow.h"
#include <QDialog>
#include "player.h"

namespace Ui {
class UserInfo;
}

class UserInfo : public QDialog, public player
{
    Q_OBJECT

public:
    explicit UserInfo(QWidget *parent = nullptr);
    ~UserInfo();

private slots:
    void on_submit_clicked();
    void on_Yes_clicked();
    void on_No_clicked();
    void on_pushButton_clicked();

private:
    Ui::UserInfo *ui;
    player plr;
};

#endif // USERINFO_H
