#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Authorium::ui::MainWindow w;
    w.show();
    return a.exec();
}
