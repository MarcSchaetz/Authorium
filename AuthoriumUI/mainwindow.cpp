#include "mainwindow.h"
#include "./ui_mainwindow.h"

namespace Authorium::ui
{

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

}
