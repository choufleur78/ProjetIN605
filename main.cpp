#include <QApplication>
#include <QPushButton>
#include <QGridLayout>
#include <QLabel>
#include "mainwindow.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow fenetre;

    fenetre.show();

    return app.exec();
}
