#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QFile>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowStyle();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setWindowStyle()
{
       QFile file(":/qss/qss/QtStyle1.qss");
       file.open(QFile::ReadOnly);
       QString styleSheet = tr(file.readAll());
       this->setStyleSheet(styleSheet);
       file.close();
}

