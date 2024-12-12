#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    buttonCount = new QPushButton("Count", this);
    buttonReset = new QPushButton("Reset", this);
    txtResult = new QLineEdit(this);
    labelInfo = new QLabel("painiketta on painettu 0 kertaa",this);

    buttonCount->setGeometry(50,50,75,30);
    buttonReset->setGeometry(50,100,75,30);
    txtResult->setGeometry(150,75,75,30);
    labelInfo->setGeometry(50,150,250,30);

    txtResult->setText("0");
    txtResult->setReadOnly(true);

    connect(buttonCount, &QPushButton::clicked, this, &MainWindow::on_buttonCount_clicked);
    connect(buttonReset, &QPushButton::clicked, this, &MainWindow::on_buttonReset_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_buttonCount_clicked() {
    counter++;
    QString s = QString::number(counter);
    txtResult->setText(s);
    labelInfo->setText("Painiketta painettu " + s + " kertaa");
}
void MainWindow::on_buttonReset_clicked() {
    counter = 0;
    QString s = QString::number(counter);
    txtResult->setText(s);
    labelInfo->setText("Painiketta painettu " + s + " kertaa");
}
