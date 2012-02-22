#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);

private slots:
    void on_actionFermer_triggered();

    void on_actionA_propos_Qt_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
