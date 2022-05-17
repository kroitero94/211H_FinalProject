#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H
#include <QThread>
#include <QTimer>
#include <QDialog>
#include <QDateTime>
#include <QDialog>
#include <QWidget>

//static int count = 0;
namespace Ui {
class GameWindow;
}

class GameWindow : public QDialog
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = nullptr);
    ~GameWindow();
    int count = 0;
    bool exception_msg(QString);



private slots:

    void myTime();
    void on_button1_clicked();
    void on_button2_clicked();
    void on_button3_clicked();
    void on_button4_clicked();
    void on_button5_clicked();
    void on_button6_clicked();
    void on_button7_clicked();
    void on_button8_clicked();
    void on_button9_clicked();
    void on_button10_clicked();
    void on_pushButton_clicked();
    void on_links_clicked();


private:
    Ui::GameWindow *ui;

    QTimer *t;
    QTimer *app;
    QTime game_timer;
    QTime window_counter;
    double time_count =0.0;
    bool clicked = false;


};

#endif // GAMEWINDOW_H
