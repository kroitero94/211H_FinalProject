#ifndef TIMER_H
#define TIMER_H
#include <QObject>
#include <QDialog>

namespace Ui {
class Timer;
}

class Timer : public QDialog
{
    Q_OBJECT

public:
    explicit Timer(QWidget *parent = nullptr);
    ~Timer();
    Timer(QObject *parent = nullptr);
protected:
    void timerEvent(QTimerEvent *event) override;

private:
    Ui::Timer *ui;
};

#endif // TIMER_H
