#include "mainwindow.h"
#include "ui_mainwindow.h"

#define SCALE_FACTOR 20
#define TRACK_LINE_WIDTH 6

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , Ui(new Ui::MainWindow)
{
    Ui->setupUi(this);
    Scene = new QGraphicsScene(this);
    Ui->graphicsView->setScene(Scene);

    QBrush BlackBrush(Qt::black);
    QPen EmptyTrackPen(Qt::white);
    QPen OccupiedTrackPen(Qt::red);
    QPen ReservedTrackPen(QColor(0xFA, 0xFD, 0x0F));
    QPen DisabledTrackPen(Qt::gray);

    Scene->setBackgroundBrush(BlackBrush);
    EmptyTrackPen.setWidth(TRACK_LINE_WIDTH);
    OccupiedTrackPen.setWidth(TRACK_LINE_WIDTH);
    ReservedTrackPen.setWidth(TRACK_LINE_WIDTH);
    DisabledTrackPen.setWidth(TRACK_LINE_WIDTH);

    YardLead = Scene->addLine((2.0 * SCALE_FACTOR), (6.0 * SCALE_FACTOR), (0.0 * SCALE_FACTOR), (8.0 * SCALE_FACTOR), EmptyTrackPen);
    YardTrack1 = Scene->addLine((0.0 * SCALE_FACTOR), (8.0 * SCALE_FACTOR), (0.0 * SCALE_FACTOR), (15.0 * SCALE_FACTOR), EmptyTrackPen);
    Track1 = Scene->addLine((6.0 * SCALE_FACTOR), (0.0 * SCALE_FACTOR), (80.0 * SCALE_FACTOR), (0.0 * SCALE_FACTOR), EmptyTrackPen);
    Track1A = Scene->addLine((2.0 * SCALE_FACTOR), (4.0 * SCALE_FACTOR), (6.0 * SCALE_FACTOR), (0.0 * SCALE_FACTOR), EmptyTrackPen);
    Track1B = Scene->addLine((80.0 * SCALE_FACTOR), (0.0 * SCALE_FACTOR), (84.0 * SCALE_FACTOR), (4.0 * SCALE_FACTOR), EmptyTrackPen);
    Track2 = Scene->addLine((2.0 * SCALE_FACTOR), (4.0 * SCALE_FACTOR), (2.0 * SCALE_FACTOR), (20.0 * SCALE_FACTOR), EmptyTrackPen);
    Track2A = Scene->addLine((2.0 * SCALE_FACTOR), (20.0 * SCALE_FACTOR), (6.0 * SCALE_FACTOR), (24.0 * SCALE_FACTOR), EmptyTrackPen);
    Track3 = Scene->addLine((84.0 * SCALE_FACTOR), (4.0 * SCALE_FACTOR), (84.0 * SCALE_FACTOR), (32.0 * SCALE_FACTOR), EmptyTrackPen);
    Track3A = Scene->addLine((84.0 * SCALE_FACTOR), (32.0 * SCALE_FACTOR), (80.0 * SCALE_FACTOR), (36.0 * SCALE_FACTOR), EmptyTrackPen);
    Track4 = Scene->addLine((70.0 * SCALE_FACTOR), (36.0 * SCALE_FACTOR), (80.0 * SCALE_FACTOR), (36.0 * SCALE_FACTOR), EmptyTrackPen);
    Track4A = Scene->addLine((66.0 * SCALE_FACTOR), (32.0 * SCALE_FACTOR), (70.0 * SCALE_FACTOR), (36.0 * SCALE_FACTOR), EmptyTrackPen);
    Track5 = Scene->addLine((66.0 * SCALE_FACTOR), (26.0 * SCALE_FACTOR), (66.0 * SCALE_FACTOR), (32.0 * SCALE_FACTOR), EmptyTrackPen);
    Track5A = Scene->addLine((64.0 * SCALE_FACTOR), (24.0 * SCALE_FACTOR), (66.0 * SCALE_FACTOR), (26.0 * SCALE_FACTOR), EmptyTrackPen);
    Track6 = Scene->addLine((6.0 * SCALE_FACTOR), (24.0 * SCALE_FACTOR), (64.0 * SCALE_FACTOR), (24.0 * SCALE_FACTOR), EmptyTrackPen);
}

MainWindow::~MainWindow()
{
    delete Ui;
}

