#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QGraphicsView(parent)
{
    _scene = new QGraphicsScene(this);
    setScene(_scene);

    QPixmap img(":/background");
    _scene->addPixmap(img);
}

MainWindow::~MainWindow()
{
    // Void
}
