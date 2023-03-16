#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include <qfiledialog.h>
#include <QTableWidgetItem>


#include "mainwindow.h"

#include <QApplication>
#include <iostream>
#include <QPen>
#include <QColor>
#include <qcolor.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionAbrir_triggered()
{

    QString Filename = QFileDialog::getOpenFileName(this,"abrir archivo",".","images(*.jpg, *.png)" );
    std::string file = Filename.toStdString();
    std::cout<<file;
    std::cout<<std::endl;
    //milista.prepend(a);

    //qDebug() << milista;

}

void MainWindow::on_btnMostrar_clicked()
{
    ui->tableWidget->setColumnCount(4);
    QStringList headers = { "ID", "Voltaje",  "x", "y"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(6);//metodo que retorne las columnas que tenemos
    QTableWidgetItem *id = new QTableWidgetItem("1");//colocar datos en la tabla como matrices
    QTableWidgetItem *id2 = new QTableWidgetItem("-69");
    QTableWidgetItem *id3 = new QTableWidgetItem("32");
    QTableWidgetItem *id4 = new QTableWidgetItem("12");
    ui->tableWidget->setItem(1,1,id);
    ui->tableWidget->setItem(1,2,id2);
    ui->tableWidget->setItem(1,3,id3);
    ui->tableWidget->setItem(1,4,id4);
}


void MainWindow::on_btnDibujar_clicked()
{
    QPen pen;
    pen.setWidth(50);
    QColor color(3, 90, 180);
    pen.setColor(color);
    escena.addEllipse(100,100,50,50, pen);
    ui->graphicsView->setScene(&escena);//vamos a colorear los elipses
}


void MainWindow::on_btnmostrar_clicked()
{
    escena.clear();
}

