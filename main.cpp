#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();



    return a.exec();
}

void ShowMultiple()
{
    QWidget *win1 = new QWidget();
    QWidget *win2 = new QWidget();
    QWidget *win3 = new QWidget();

    win1->show();
    win2->show();
    win3->show();
}
