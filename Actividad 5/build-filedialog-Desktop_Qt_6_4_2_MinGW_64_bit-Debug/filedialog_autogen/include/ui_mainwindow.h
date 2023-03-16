/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbrir;
    QAction *actionGuardar;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QTableWidget *tableWidget;
    QPushButton *btnMostrar;
    QPushButton *btnBuscar;
    QLineEdit *lineEdit;
    QGraphicsView *graphicsView;
    QPushButton *btnmostrar;
    QPushButton *btnDibujar;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuAbrir;
    QMenu *menuGuardar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(656, 422);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName("actionAbrir");
        actionGuardar = new QAction(MainWindow);
        actionGuardar->setObjectName("actionGuardar");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 551, 351));
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tableWidget = new QTableWidget(tab_2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(90, 10, 361, 131));
        btnMostrar = new QPushButton(tab_2);
        btnMostrar->setObjectName("btnMostrar");
        btnMostrar->setGeometry(QRect(4, 20, 81, 24));
        btnBuscar = new QPushButton(tab_2);
        btnBuscar->setObjectName("btnBuscar");
        btnBuscar->setGeometry(QRect(10, 110, 75, 24));
        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 80, 71, 22));
        graphicsView = new QGraphicsView(tab_2);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(90, 150, 361, 141));
        btnmostrar = new QPushButton(tab_2);
        btnmostrar->setObjectName("btnmostrar");
        btnmostrar->setGeometry(QRect(10, 190, 75, 24));
        btnDibujar = new QPushButton(tab_2);
        btnDibujar->setObjectName("btnDibujar");
        btnDibujar->setGeometry(QRect(10, 220, 75, 24));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 656, 22));
        menuAbrir = new QMenu(menubar);
        menuAbrir->setObjectName("menuAbrir");
        menuGuardar = new QMenu(menubar);
        menuGuardar->setObjectName("menuGuardar");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuAbrir->menuAction());
        menubar->addAction(menuGuardar->menuAction());
        menuAbrir->addSeparator();
        menuAbrir->addSeparator();
        menuAbrir->addAction(actionAbrir);
        menuGuardar->addSeparator();
        menuGuardar->addAction(actionGuardar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
        actionGuardar->setText(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Agregar", nullptr));
        btnMostrar->setText(QCoreApplication::translate("MainWindow", " Mostrar Tabla", nullptr));
        btnBuscar->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        btnmostrar->setText(QCoreApplication::translate("MainWindow", "Limpiar", nullptr));
        btnDibujar->setText(QCoreApplication::translate("MainWindow", "Dibujar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        menuAbrir->setTitle(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
        menuGuardar->setTitle(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
