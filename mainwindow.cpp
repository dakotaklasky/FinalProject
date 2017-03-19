#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

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
    std::vector<double> measurements {
    ui->plainTextEdit->toPlainText().toDouble(),
    ui->plainTextEdit_2->toPlainText().toDouble(),
    ui->plainTextEdit_3->toPlainText().toDouble(),
    ui->plainTextEdit_4->toPlainText().toDouble(),
    ui->plainTextEdit_5->toPlainText().toDouble(),
    ui->plainTextEdit_6->toPlainText().toDouble(),
    ui->plainTextEdit_7->toPlainText().toDouble(),
    ui->plainTextEdit_8->toPlainText().toDouble(),
    ui->plainTextEdit_9->toPlainText().toDouble(),
    ui->plainTextEdit_10->toPlainText().toDouble(),
    ui->plainTextEdit_11->toPlainText().toDouble(),
    ui->plainTextEdit_12->toPlainText().toDouble(),
    ui->plainTextEdit_13->toPlainText().toDouble(),
    ui->plainTextEdit_14->toPlainText().toDouble(),
    ui->plainTextEdit_15->toPlainText().toDouble(),
    ui->plainTextEdit_16->toPlainText().toDouble(),
    ui->plainTextEdit_17->toPlainText().toDouble(),
    ui->plainTextEdit_18->toPlainText().toDouble()};

/*
    double AB,AC,CD,DE,F,G,IJ,L,BM,P,HP,GH,NO;
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
*/
    Dialog mdialog;
    mdialog.setModal(true);
    mdialog.exec();


}




