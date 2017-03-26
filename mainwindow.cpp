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


/*
 Collect input data from user and open new dialog
 */
void MainWindow::on_pushButton_clicked()
{
    double a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r;

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


    Dialog mdialog;
    mdialog.setModal(true);
    mdialog.exec();


}




