/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_file;
    QAction *actionExit;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuwindows;
    QMenu *menuHelp;
    QMenu *menuPlugins;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        actionNew_file = new QAction(MainWindow);
        actionNew_file->setObjectName(QString::fromUtf8("actionNew_file"));
        actionNew_file->setCheckable(false);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menuBar->setToolTipDuration(2000);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuFile->setToolTipDuration(-1);
        menuFile->setToolTipsVisible(false);
        menuwindows = new QMenu(menuBar);
        menuwindows->setObjectName(QString::fromUtf8("menuwindows"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuPlugins = new QMenu(menuBar);
        menuPlugins->setObjectName(QString::fromUtf8("menuPlugins"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuwindows->menuAction());
        menuBar->addAction(menuPlugins->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew_file);
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew_file->setText(QApplication::translate("MainWindow", "New File", nullptr));
        actionNew_file->setIconText(QApplication::translate("MainWindow", "New File", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNew_file->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("MainWindow", "Exit ", nullptr));
#ifndef QT_NO_TOOLTIP
        menuBar->setToolTip(QApplication::translate("MainWindow", "File", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        menuFile->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\346\226\207\344\273\266</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuwindows->setTitle(QApplication::translate("MainWindow", "Windows", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        menuPlugins->setTitle(QApplication::translate("MainWindow", "Plugins", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
