#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QObject>
#include <QWidget>

class MainWindow : public QGraphicsView
{
    Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow(void);

    private:
        QGraphicsScene *_scene;
};

#endif // MAINWINDOW_H
