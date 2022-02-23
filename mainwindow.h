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
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QGraphicsScene* scene;
    QGraphicsLineItem* Track1;
    QGraphicsLineItem* Track2;
    QGraphicsLineItem* Track3;
    QGraphicsLineItem* Track4;
    QGraphicsLineItem* Track5;
    QGraphicsLineItem* Track6;
    QGraphicsLineItem* Track7;
    QGraphicsLineItem* Track8;
    QGraphicsLineItem* Track9;
    QGraphicsLineItem* Track10;
    QGraphicsLineItem* Track11;
    QGraphicsLineItem* Track12;
    QGraphicsLineItem* Track13;
    QGraphicsLineItem* Track14;
    QGraphicsLineItem* Track15;
    QGraphicsLineItem* Track16;
    QGraphicsLineItem* Track17;
    QGraphicsLineItem* Track18;
    QGraphicsLineItem* Track19;
    QGraphicsLineItem* Track20;
    QGraphicsLineItem* Track21;
    QGraphicsLineItem* Track22;
    QGraphicsLineItem* Track23;
    QGraphicsLineItem* Track24;
    QGraphicsLineItem* Track25;
    QGraphicsLineItem* Track26;
    QGraphicsLineItem* Track27;
    QGraphicsLineItem* Track28;
    QGraphicsLineItem* Track29;
    QGraphicsLineItem* Track30;
    QGraphicsLineItem* Track31;
    QGraphicsLineItem* Track32;
    QGraphicsLineItem* Track33;
    QGraphicsLineItem* Track34;
    QGraphicsLineItem* Track35;
    QGraphicsLineItem* Track36;
    QGraphicsLineItem* Track37;
    QGraphicsLineItem* Track38;
    QGraphicsLineItem* Track39;
    QGraphicsLineItem* Track40;
    QGraphicsLineItem* Track41;
    QGraphicsLineItem* Track42;
    QGraphicsLineItem* Track43;
    QGraphicsLineItem* Track44;
    QGraphicsLineItem* Track45;
    QGraphicsLineItem* Track46;
    QGraphicsLineItem* Track47;
    QGraphicsLineItem* Track48;
    QGraphicsLineItem* Track49;
    QGraphicsLineItem* Track50;
    QGraphicsLineItem* Track51;
    QGraphicsLineItem* Track52;
    QGraphicsLineItem* Track53;
    QGraphicsLineItem* Track54;
    QGraphicsLineItem* Track55;
    QGraphicsLineItem* Track56;
    QGraphicsLineItem* Track57;
    QGraphicsLineItem* Track58;
    QGraphicsLineItem* Track59;
    QGraphicsLineItem* Track60;
    QGraphicsLineItem* Track61;
    QGraphicsLineItem* Track62;
    QGraphicsLineItem* Track63;
    QGraphicsLineItem* Track64;
    QGraphicsLineItem* Track65;
    QGraphicsLineItem* Track66;
    QGraphicsLineItem* Track67;
    QGraphicsLineItem* Track68;
    QGraphicsLineItem* Track69;
    QGraphicsLineItem* Track70;
    QGraphicsLineItem* Track71;
    QGraphicsLineItem* Track72;
    QGraphicsLineItem* Track73;
    QGraphicsLineItem* Track74;
    QGraphicsLineItem* Track75;
    QGraphicsLineItem* Track76;
    QGraphicsLineItem* StnTrack1;
    QGraphicsLineItem* StnTrack2;
    QGraphicsLineItem* StnTrack3;
    QGraphicsLineItem* Xover1Track1;
    QGraphicsLineItem* Xover1Track2;
    QGraphicsLineItem* Xover2Track1;
    QGraphicsLineItem* Xover2Track2;
    QGraphicsLineItem* YardTrack1;
    QGraphicsLineItem* YardTrack2;
    QGraphicsLineItem* YardTrack3;
    QGraphicsLineItem* YardXferTrack1;
    QGraphicsLineItem* YardXferTrack2;
    QGraphicsLineItem* YardXferTrack3;
    QGraphicsLineItem* YardXferTrack4;
    QGraphicsLineItem* YardXferTrack5;
    QGraphicsLineItem* YardXferTrack6;
    QGraphicsLineItem* ReverseTrack1;
    QGraphicsLineItem* ReverseTrack2_1;
    QGraphicsLineItem* ReverseTrack2_2;
    QGraphicsLineItem* MainStTrack1;
    QGraphicsLineItem* MainStTrack2;
    QGraphicsLineItem* MainStTrack3;
};
#endif // MAINWINDOW_H
