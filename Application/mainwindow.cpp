#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include "QTextCodec"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//设置File及子菜单ToolTip显示时间
/*
 * ToolTipDuration
此属性保留小部件的工具提示持续时间
指定工具提示显示的时间（毫秒）。如果值为-1（默认值），则根据工具提示的长度计算持续时间。
Qt5.2中介绍了该特性
*/
    ui->menuFile->setToolTipDuration(2000);
/*
 *  ToolTipsVisible
此属性保留菜单操作的工具提示是否应可见
此属性指定操作菜单项是否显示其工具提示。
默认情况下，此属性为假。
Qt5.1中介绍了该特性。
*/
    ui->menuFile->setToolTipsVisible(true);

/*ToolTip
* 此属性保留操作的工具提示
* 此文本用于工具提示。如果未指定工具提示，则使用操作的文本。
*默认情况下，此属性包含操作的文本
*/
    ui->actionNew_file->setToolTip(tr("create new file c++"));
    ui->menuBar->setStyleSheet("QMenuBar::Item:selected{background-color:#999999}QMenuBar{background-color:#666666}");
    ui->menuFile->setStyleSheet("QMenu::Item:selected{background-color:#999999}QMenu{background-color:#666666}");




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_file_triggered()
{

}


void MainWindow::on_actionsave_triggered()
{
    //QString fileName= QFileDialog::getSaveFileName(this,tr("Save File"),"/home/jana/untitled",tr("Images(*.html) ;;xx（*.txt）"));
    QTextCodec *code=QTextCodec::codecForName("GBK");
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF8"));
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                                 "/home/jana/untitled.png",
                                code->toUnicode("图片(*.png *.xpm *.jpg);;文本文档 (*.txt)"));
    ui->textEdit->setPlainText(fileName);
}

void MainWindow::on_actionNew_file_hovered()
{

}
