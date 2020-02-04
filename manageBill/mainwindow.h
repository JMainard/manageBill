#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QCloseEvent>
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

private slots:
    void closeEvent(QCloseEvent *event);

    void on_pushButtonQuit_clicked();

    void on_pushButtonBalance_clicked();

    void on_pushButtonSupplier_clicked();

    void on_pushButtonClient_clicked();

    void on_pushButtonProducts_clicked();

    void on_pushButtonEmployees_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
