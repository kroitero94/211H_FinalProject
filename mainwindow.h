#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Subject_clicked();
    void on_AboutGame_clicked();
    void on_login_clicked();
    void on_StartGame_clicked();
    void on_ExitGame_clicked();

private:
    Ui::MainWindow *ui;
    bool permission = false;

};
#endif // MAINWINDOW_H
