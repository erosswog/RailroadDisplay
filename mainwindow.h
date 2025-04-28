#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QGraphicsScene>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *Ui;
    QGraphicsScene* Scene;
    QGraphicsLineItem* Track1;
    QGraphicsLineItem* Track1A;
    QGraphicsLineItem* Track1B;
    QGraphicsLineItem* Track2;
    QGraphicsLineItem* Track2A;
    QGraphicsLineItem* Track3;
    QGraphicsLineItem* Track3A;
    QGraphicsLineItem* Track4;
    QGraphicsLineItem* Track4A;
    QGraphicsLineItem* Track5;
    QGraphicsLineItem* Track5A;
    QGraphicsLineItem* Track6;
    QGraphicsLineItem* YardLead;
    QGraphicsLineItem* YardTrack1;
};
#endif // MAINWINDOW_H
