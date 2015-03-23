#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "valve.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   /* Valve V12 = new Valve();
    connect(ui->V12,SIGNAL(clicked(bool)),V12,SLOT(setopen(bool)));*/
}

MainWindow::~MainWindow()
{
    delete ui;
}
