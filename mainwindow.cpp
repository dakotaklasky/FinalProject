#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    double a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s;

    a=ui->plainTextEdit->toPlainText().toDouble();
    b=ui->plainTextEdit_2->toPlainText().toDouble();
    c=ui->plainTextEdit_3->toPlainText().toDouble();
    d=ui->plainTextEdit_4->toPlainText().toDouble();
    e=ui->plainTextEdit_5->toPlainText().toDouble();
    f=ui->plainTextEdit_6->toPlainText().toDouble();
    g=ui->plainTextEdit_7->toPlainText().toDouble();
    h=ui->plainTextEdit_8->toPlainText().toDouble();
    i=ui->plainTextEdit_9->toPlainText().toDouble();
    j=ui->plainTextEdit_10->toPlainText().toDouble();
    k=ui->plainTextEdit_11->toPlainText().toDouble();
    l=ui->plainTextEdit_12->toPlainText().toDouble();
    m=ui->plainTextEdit_13->toPlainText().toDouble();
    n=ui->plainTextEdit_14->toPlainText().toDouble();
    o=ui->plainTextEdit_15->toPlainText().toDouble();
    p=ui->plainTextEdit_16->toPlainText().toDouble();
    q=ui->plainTextEdit_17->toPlainText().toDouble();
    r=ui->plainTextEdit_18->toPlainText().toDouble();
    s=ui->plainTextEdit_19->toPlainText().toDouble();

    double AB,AC,CD,DE,F,G,I,IJ, K,L, BM P, HP;
    AB = i;
    AC= (1/2)*k+(3/8);
    CD = 2;
    DE = j;
    F = g;
    G = (1/2)*i+1.25;
    GH = (1/2)*l+.5;
    IJ = (1/2)*k;
    L = 1;
    BM = (1/4)*b+(3/4);
    P = 1.5;
    HP = n;
    NO = GH+(3/8);





}
