#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QPushButton *buttonCount;
    QPushButton *buttonReset;
    QLineEdit *txtResult;
    QLabel *labelInfo;
    int counter = 0;

private slots:
    void on_buttonCount_clicked();
    void on_buttonReset_clicked();
};
#endif // MAINWINDOW_H
