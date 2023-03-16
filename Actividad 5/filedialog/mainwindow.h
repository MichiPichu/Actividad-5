#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include  <QGraphicsScene>
#include <QPen>
#include <qcolor.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionAbrir_triggered();

    void on_btnMostrar_clicked();

    void on_btnDibujar_clicked();

    void on_btnmostrar_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene escena;

};
#endif // MAINWINDOW_H
