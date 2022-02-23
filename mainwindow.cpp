#include "mainwindow.h"
#include "ui_mainwindow.h"

#define SCALE_FACTOR 40
#define TRACK_LINE_WIDTH 6

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    QBrush greenBrush(Qt::green);
    QBrush blackBrush(Qt::black);
    QPen emptyTrackPen(Qt::green);
    QPen occupiedTrackPen(Qt::red);
    QPen reservedTrackPen(QColor(0xFA, 0xFD, 0x0F));
    QPen disabledTrackPen(Qt::gray);

    scene->setBackgroundBrush(blackBrush);
    emptyTrackPen.setWidth(TRACK_LINE_WIDTH);
    occupiedTrackPen.setWidth(TRACK_LINE_WIDTH);
    reservedTrackPen.setWidth(TRACK_LINE_WIDTH);
    disabledTrackPen.setWidth(TRACK_LINE_WIDTH);

    StnTrack1 = scene->addLine((10.25 * SCALE_FACTOR), (2.75 * SCALE_FACTOR), (12 * SCALE_FACTOR), (2 * SCALE_FACTOR), emptyTrackPen);
    StnTrack2 = scene->addLine((12 * SCALE_FACTOR), (2 * SCALE_FACTOR), (19 * SCALE_FACTOR), (2 * SCALE_FACTOR), emptyTrackPen);
    StnTrack3 = scene->addLine((19 * SCALE_FACTOR), (2 * SCALE_FACTOR), (21 * SCALE_FACTOR), (3 * SCALE_FACTOR), emptyTrackPen);
    Track1 = scene->addLine((10 * SCALE_FACTOR), (3 * SCALE_FACTOR), (15 * SCALE_FACTOR), (3 * SCALE_FACTOR), emptyTrackPen);
    Track2 = scene->addLine((15.5 * SCALE_FACTOR), (3 * SCALE_FACTOR), (16.5 * SCALE_FACTOR), (3 * SCALE_FACTOR), emptyTrackPen);
    Track3 = scene->addLine((17 * SCALE_FACTOR), (3 * SCALE_FACTOR), (20.5 * SCALE_FACTOR), (3 * SCALE_FACTOR), emptyTrackPen);
    Track4 = scene->addLine((3 * SCALE_FACTOR), (3 * SCALE_FACTOR), (10 * SCALE_FACTOR), (3 * SCALE_FACTOR), emptyTrackPen);
    Track5 = scene->addLine((1 * SCALE_FACTOR), (5 * SCALE_FACTOR), (3 * SCALE_FACTOR), (3 * SCALE_FACTOR), emptyTrackPen);
    Track6 = scene->addLine((1 * SCALE_FACTOR), (5 * SCALE_FACTOR), (1 * SCALE_FACTOR), (15 * SCALE_FACTOR), emptyTrackPen);
    Track7 = scene->addLine((1 * SCALE_FACTOR), (15 * SCALE_FACTOR), (3 * SCALE_FACTOR), (17 * SCALE_FACTOR), emptyTrackPen);
    Track8 = scene->addLine((3 * SCALE_FACTOR), (17 * SCALE_FACTOR), (10 * SCALE_FACTOR), (17 * SCALE_FACTOR), emptyTrackPen);
    Track9 = scene->addLine((10 * SCALE_FACTOR), (17 * SCALE_FACTOR), (12 * SCALE_FACTOR), (15 * SCALE_FACTOR), emptyTrackPen);
    Track10 = scene->addLine((12 * SCALE_FACTOR), (15 * SCALE_FACTOR), (12 * SCALE_FACTOR), (14 * SCALE_FACTOR), emptyTrackPen);
    Track11 = scene->addLine((12 * SCALE_FACTOR), (14 * SCALE_FACTOR), (12 * SCALE_FACTOR), (12 * SCALE_FACTOR), emptyTrackPen);
    Xover1Track1 = scene->addLine((11.75 * SCALE_FACTOR), (13.75 * SCALE_FACTOR), (11.25 * SCALE_FACTOR), (12.25 * SCALE_FACTOR), emptyTrackPen);
    Xover1Track2 = scene->addLine((11.25 * SCALE_FACTOR), (13.75 * SCALE_FACTOR), (11.75 * SCALE_FACTOR), (12.25 * SCALE_FACTOR), emptyTrackPen);
    Track12 = scene->addLine((12 * SCALE_FACTOR), (12 * SCALE_FACTOR), (12 * SCALE_FACTOR), (11 * SCALE_FACTOR), emptyTrackPen);
    Track13 = scene->addLine((12 * SCALE_FACTOR), (11 * SCALE_FACTOR), (13 * SCALE_FACTOR), (10 * SCALE_FACTOR), emptyTrackPen);
    Track14 = scene->addLine((13 * SCALE_FACTOR), (10 * SCALE_FACTOR), (26 * SCALE_FACTOR), (10 * SCALE_FACTOR), emptyTrackPen);
    Track15 = scene->addLine((26 * SCALE_FACTOR), (10 * SCALE_FACTOR), (27 * SCALE_FACTOR), (11 * SCALE_FACTOR), emptyTrackPen);
    Track16 = scene->addLine((27 * SCALE_FACTOR), (11 * SCALE_FACTOR), (27 * SCALE_FACTOR), (15 * SCALE_FACTOR), emptyTrackPen);
    Track17 = scene->addLine((27 * SCALE_FACTOR), (15 * SCALE_FACTOR), (30 * SCALE_FACTOR), (18 * SCALE_FACTOR), emptyTrackPen);
    Track18 = scene->addLine((30 * SCALE_FACTOR), (18 * SCALE_FACTOR), (35 * SCALE_FACTOR), (18 * SCALE_FACTOR), emptyTrackPen);
    Track19 = scene->addLine((35 * SCALE_FACTOR), (18 * SCALE_FACTOR), (38 * SCALE_FACTOR), (15 * SCALE_FACTOR), emptyTrackPen);
    Track20 = scene->addLine((38 * SCALE_FACTOR), (15 * SCALE_FACTOR), (38 * SCALE_FACTOR), (4 * SCALE_FACTOR), emptyTrackPen);
    Track21 = scene->addLine((38 * SCALE_FACTOR), (4 * SCALE_FACTOR), (36 * SCALE_FACTOR), (2 * SCALE_FACTOR), emptyTrackPen);
    Track22 = scene->addLine((36 * SCALE_FACTOR), (2 * SCALE_FACTOR), (25 * SCALE_FACTOR), (2 * SCALE_FACTOR), emptyTrackPen);
    Track23 = scene->addLine((25 * SCALE_FACTOR), (2 * SCALE_FACTOR), (23 * SCALE_FACTOR), (3 * SCALE_FACTOR), emptyTrackPen);
    Track24 = scene->addLine((23 * SCALE_FACTOR), (3 * SCALE_FACTOR), (21 * SCALE_FACTOR), (3 * SCALE_FACTOR), emptyTrackPen);
    Track25 = scene->addLine((23 * SCALE_FACTOR), (4 * SCALE_FACTOR), (17 * SCALE_FACTOR), (4 * SCALE_FACTOR), emptyTrackPen);
    Track26 = scene->addLine((16.5 * SCALE_FACTOR), (4 * SCALE_FACTOR), (15.5 * SCALE_FACTOR), (4 * SCALE_FACTOR), emptyTrackPen);
    Track27 = scene->addLine((15 * SCALE_FACTOR), (4 * SCALE_FACTOR), (12 * SCALE_FACTOR), (4 * SCALE_FACTOR), emptyTrackPen);
    Xover2Track1 = scene->addLine((17 * SCALE_FACTOR), (4 * SCALE_FACTOR), (15 * SCALE_FACTOR), (3 * SCALE_FACTOR), emptyTrackPen);
    Xover2Track2 = scene->addLine((15 * SCALE_FACTOR), (4 * SCALE_FACTOR), (17 * SCALE_FACTOR), (3 * SCALE_FACTOR), emptyTrackPen);
    YardXferTrack1 = scene->addLine((12 * SCALE_FACTOR), (4 * SCALE_FACTOR), (13 * SCALE_FACTOR), (5 * SCALE_FACTOR), emptyTrackPen);
    YardXferTrack2 = scene->addLine((13 * SCALE_FACTOR), (5 * SCALE_FACTOR), (14 * SCALE_FACTOR), (6 * SCALE_FACTOR), emptyTrackPen);
    YardXferTrack3 = scene->addLine((14 * SCALE_FACTOR), (6 * SCALE_FACTOR), (15 * SCALE_FACTOR), (7 * SCALE_FACTOR), emptyTrackPen);
    YardXferTrack4 = scene->addLine((22 * SCALE_FACTOR), (5 * SCALE_FACTOR), (23 * SCALE_FACTOR), (4 * SCALE_FACTOR), emptyTrackPen);
    YardXferTrack5 = scene->addLine((21 * SCALE_FACTOR), (6 * SCALE_FACTOR), (22 * SCALE_FACTOR), (5 * SCALE_FACTOR), emptyTrackPen);
    YardXferTrack6 = scene->addLine((20 * SCALE_FACTOR), (7 * SCALE_FACTOR), (21 * SCALE_FACTOR), (6 * SCALE_FACTOR), emptyTrackPen);
    YardTrack1 = scene->addLine((13 * SCALE_FACTOR), (5 * SCALE_FACTOR), (22 * SCALE_FACTOR), (5 * SCALE_FACTOR), emptyTrackPen);
    YardTrack2 = scene->addLine((14 * SCALE_FACTOR), (6 * SCALE_FACTOR), (21 * SCALE_FACTOR), (6 * SCALE_FACTOR), emptyTrackPen);
    YardTrack3 = scene->addLine((15 * SCALE_FACTOR), (7 * SCALE_FACTOR), (20 * SCALE_FACTOR), (7 * SCALE_FACTOR), emptyTrackPen);
    Track28 = scene->addLine((12 * SCALE_FACTOR), (4 * SCALE_FACTOR), (10 * SCALE_FACTOR), (4 * SCALE_FACTOR), emptyTrackPen);
    ReverseTrack1 = scene->addLine((10 * SCALE_FACTOR), (4 * SCALE_FACTOR), (15 * SCALE_FACTOR), (9 * SCALE_FACTOR), emptyTrackPen);
    Track29 = scene->addLine((10 * SCALE_FACTOR), (4 * SCALE_FACTOR), (7 * SCALE_FACTOR), (4 * SCALE_FACTOR), emptyTrackPen);
    MainStTrack1 = scene->addLine((7 * SCALE_FACTOR), (4 * SCALE_FACTOR), (6 * SCALE_FACTOR), (5 * SCALE_FACTOR), emptyTrackPen);
    MainStTrack2 = scene->addLine((6 * SCALE_FACTOR), (5 * SCALE_FACTOR), (6 * SCALE_FACTOR), (15 * SCALE_FACTOR), emptyTrackPen);
    MainStTrack3 = scene->addLine((6 * SCALE_FACTOR), (15 * SCALE_FACTOR), (7 * SCALE_FACTOR), (16 * SCALE_FACTOR), emptyTrackPen);
    Track30 = scene->addLine((7 * SCALE_FACTOR), (4 * SCALE_FACTOR), (3 * SCALE_FACTOR), (4 * SCALE_FACTOR), emptyTrackPen);
    Track31 = scene->addLine((3 * SCALE_FACTOR), (4 * SCALE_FACTOR), (2 * SCALE_FACTOR), (5 * SCALE_FACTOR), emptyTrackPen);
    Track32 = scene->addLine((2 * SCALE_FACTOR), (5 * SCALE_FACTOR), (2 * SCALE_FACTOR), (15 * SCALE_FACTOR), emptyTrackPen);
    Track33 = scene->addLine((2 * SCALE_FACTOR), (15 * SCALE_FACTOR), (3 * SCALE_FACTOR), (16 * SCALE_FACTOR), emptyTrackPen);
    Track34 = scene->addLine((3 * SCALE_FACTOR), (16 * SCALE_FACTOR), (7 * SCALE_FACTOR), (16 * SCALE_FACTOR), emptyTrackPen);
    Track35 = scene->addLine((7 * SCALE_FACTOR), (16 * SCALE_FACTOR), (10 * SCALE_FACTOR), (16 * SCALE_FACTOR), emptyTrackPen);
    Track36 = scene->addLine((10 * SCALE_FACTOR), (16 * SCALE_FACTOR), (11 * SCALE_FACTOR), (15 * SCALE_FACTOR), emptyTrackPen);
    Track37 = scene->addLine((11 * SCALE_FACTOR), (15 * SCALE_FACTOR), (11 * SCALE_FACTOR), (12 * SCALE_FACTOR), emptyTrackPen);
    Track38 = scene->addLine((11 * SCALE_FACTOR), (12 * SCALE_FACTOR), (11 * SCALE_FACTOR), (11 * SCALE_FACTOR), emptyTrackPen);
    Track39 = scene->addLine((11 * SCALE_FACTOR), (11 * SCALE_FACTOR), (13 * SCALE_FACTOR), (9 * SCALE_FACTOR), emptyTrackPen);
    Track40 = scene->addLine((13 * SCALE_FACTOR), (9 * SCALE_FACTOR), (15 * SCALE_FACTOR), (9 * SCALE_FACTOR), emptyTrackPen);
    Track41 = scene->addLine((15 * SCALE_FACTOR), (9 * SCALE_FACTOR), (20 * SCALE_FACTOR), (9 * SCALE_FACTOR), emptyTrackPen);
    ReverseTrack2_1 = scene->addLine((20 * SCALE_FACTOR), (9 * SCALE_FACTOR), (21 * SCALE_FACTOR), (8 * SCALE_FACTOR), emptyTrackPen);
    ReverseTrack2_2 = scene->addLine((21 * SCALE_FACTOR), (8 * SCALE_FACTOR), (25 * SCALE_FACTOR), (4 * SCALE_FACTOR), emptyTrackPen);
    Track42 = scene->addLine((20 * SCALE_FACTOR), (9 * SCALE_FACTOR), (28 * SCALE_FACTOR), (9 * SCALE_FACTOR), emptyTrackPen);
    Track43 = scene->addLine((21 * SCALE_FACTOR), (8 * SCALE_FACTOR), (24 * SCALE_FACTOR), (7 * SCALE_FACTOR), emptyTrackPen);
    Track44 = scene->addLine((24 * SCALE_FACTOR), (7 * SCALE_FACTOR), (28 * SCALE_FACTOR), (7 * SCALE_FACTOR), emptyTrackPen);
    Track45 = scene->addLine((28 * SCALE_FACTOR), (7 * SCALE_FACTOR), (31 * SCALE_FACTOR), (9 * SCALE_FACTOR), emptyTrackPen);
    Track46 = scene->addLine((31 * SCALE_FACTOR), (9 * SCALE_FACTOR), (31 * SCALE_FACTOR), (11 * SCALE_FACTOR), emptyTrackPen);
    Track47 = scene->addLine((31 * SCALE_FACTOR), (11 * SCALE_FACTOR), (29 * SCALE_FACTOR), (13 * SCALE_FACTOR), emptyTrackPen);
    Track48 = scene->addLine((29 * SCALE_FACTOR), (13 * SCALE_FACTOR), (29 * SCALE_FACTOR), (15 * SCALE_FACTOR), emptyTrackPen);
    Track49 = scene->addLine((29 * SCALE_FACTOR), (15 * SCALE_FACTOR), (30 * SCALE_FACTOR), (16 * SCALE_FACTOR), emptyTrackPen);
    Track50 = scene->addLine((30 * SCALE_FACTOR), (16 * SCALE_FACTOR), (34 * SCALE_FACTOR), (16 * SCALE_FACTOR), emptyTrackPen);
    Track51 = scene->addLine((34 * SCALE_FACTOR), (16 * SCALE_FACTOR), (35 * SCALE_FACTOR), (15 * SCALE_FACTOR), emptyTrackPen);
    Track52 = scene->addLine((35 * SCALE_FACTOR), (15 * SCALE_FACTOR), (35 * SCALE_FACTOR), (13 * SCALE_FACTOR), emptyTrackPen);
    Track53 = scene->addLine((35 * SCALE_FACTOR), (13 * SCALE_FACTOR), (33 * SCALE_FACTOR), (11 * SCALE_FACTOR), emptyTrackPen);
    Track54 = scene->addLine((33 * SCALE_FACTOR), (11 * SCALE_FACTOR), (33 * SCALE_FACTOR), (9 * SCALE_FACTOR), emptyTrackPen);
    Track55 = scene->addLine((33 * SCALE_FACTOR), (9 * SCALE_FACTOR), (35 * SCALE_FACTOR), (7 * SCALE_FACTOR), emptyTrackPen);
    Track56 = scene->addLine((35 * SCALE_FACTOR), (7 * SCALE_FACTOR), (35 * SCALE_FACTOR), (5 * SCALE_FACTOR), emptyTrackPen);
    Track57 = scene->addLine((35 * SCALE_FACTOR), (5 * SCALE_FACTOR), (34 * SCALE_FACTOR), (4 * SCALE_FACTOR), emptyTrackPen);
    Track58 = scene->addLine((34 * SCALE_FACTOR), (4 * SCALE_FACTOR), (28 * SCALE_FACTOR), (4 * SCALE_FACTOR), emptyTrackPen);
    Track59 = scene->addLine((28 * SCALE_FACTOR), (4 * SCALE_FACTOR), (25 * SCALE_FACTOR), (4 * SCALE_FACTOR), emptyTrackPen);
    Track60 = scene->addLine((25 * SCALE_FACTOR), (4 * SCALE_FACTOR), (23 * SCALE_FACTOR), (4 * SCALE_FACTOR), emptyTrackPen);
    Track61 = scene->addLine((28 * SCALE_FACTOR), (9 * SCALE_FACTOR), (30 * SCALE_FACTOR), (10 * SCALE_FACTOR), emptyTrackPen);
    Track62 = scene->addLine((30 * SCALE_FACTOR), (10 * SCALE_FACTOR), (30 * SCALE_FACTOR), (11 * SCALE_FACTOR), emptyTrackPen);
    Track63 = scene->addLine((30 * SCALE_FACTOR), (11 * SCALE_FACTOR), (28 * SCALE_FACTOR), (13 * SCALE_FACTOR), emptyTrackPen);
    Track64 = scene->addLine((28 * SCALE_FACTOR), (13 * SCALE_FACTOR), (28 * SCALE_FACTOR), (15 * SCALE_FACTOR), emptyTrackPen);
    Track65 = scene->addLine((28 * SCALE_FACTOR), (15 * SCALE_FACTOR), (30 * SCALE_FACTOR), (17 * SCALE_FACTOR), emptyTrackPen);
    Track66 = scene->addLine((30 * SCALE_FACTOR), (17 * SCALE_FACTOR), (34 * SCALE_FACTOR), (17 * SCALE_FACTOR), emptyTrackPen);
    Track67 = scene->addLine((34 * SCALE_FACTOR), (17 * SCALE_FACTOR), (36 * SCALE_FACTOR), (15 * SCALE_FACTOR), emptyTrackPen);
    Track68 = scene->addLine((36 * SCALE_FACTOR), (15 * SCALE_FACTOR), (36 * SCALE_FACTOR), (13 * SCALE_FACTOR), emptyTrackPen);
    Track69 = scene->addLine((36 * SCALE_FACTOR), (13 * SCALE_FACTOR), (34 * SCALE_FACTOR), (11 * SCALE_FACTOR), emptyTrackPen);
    Track70 = scene->addLine((34 * SCALE_FACTOR), (11 * SCALE_FACTOR), (34 * SCALE_FACTOR), (9 * SCALE_FACTOR), emptyTrackPen);
    Track71 = scene->addLine((34 * SCALE_FACTOR), (9 * SCALE_FACTOR), (36 * SCALE_FACTOR), (7 * SCALE_FACTOR), emptyTrackPen);
    Track72 = scene->addLine((36 * SCALE_FACTOR), (7 * SCALE_FACTOR), (36 * SCALE_FACTOR), (5 * SCALE_FACTOR), emptyTrackPen);
    Track73 = scene->addLine((36 * SCALE_FACTOR), (5 * SCALE_FACTOR), (34 * SCALE_FACTOR), (3 * SCALE_FACTOR), emptyTrackPen);
    Track74 = scene->addLine((34 * SCALE_FACTOR), (3 * SCALE_FACTOR), (30 * SCALE_FACTOR), (3 * SCALE_FACTOR), emptyTrackPen);
    Track75 = scene->addLine((30 * SCALE_FACTOR), (3 * SCALE_FACTOR), (28 * SCALE_FACTOR), (4 * SCALE_FACTOR), emptyTrackPen);
    Track76 = scene->addLine((30 * SCALE_FACTOR), (3 * SCALE_FACTOR), (23 * SCALE_FACTOR), (3 * SCALE_FACTOR), emptyTrackPen);
}

MainWindow::~MainWindow()
{
    delete ui;
}

