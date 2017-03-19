#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);

    //Make Polygon
    QPolygon poly;
    poly << QPoint(37,0);
    poly << QPoint(55,6);
    poly << QPoint(55,102);
    poly << QPoint(8,106);
    poly << QPoint(0,60);
    poly << QPoint(11,12);


    //make a pen
    QPen linepen;
    linepen.setWidth(1);
    linepen.setColor(Qt::blue);
    linepen.setJoinStyle(Qt::MiterJoin);
    painter.setPen(linepen);


    //draw polygon
    painter.drawPolygon(poly);


}
