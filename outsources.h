#ifndef OUTSOURCES_H
#define OUTSOURCES_H

#include <QDialog>

namespace Ui {
class outSources;
}

class outSources : public QDialog
{
    Q_OBJECT

public:
    explicit outSources(QWidget *parent = nullptr);
    ~outSources();

private slots:
    void on_cdcLink_clicked();

    void on_jhLink_clicked();

    void on_nycLink_clicked();

    void on_unicefLink_clicked();

    void on_harvardLink_clicked();

    void on_pushButton_clicked();

private:
    Ui::outSources *ui;
};

#endif // OUTSOURCES_H
