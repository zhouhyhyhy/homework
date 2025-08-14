#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "menubar/filemenu.h"
#include "toolbar/navigationbar.h"
#include "centralwidget/centralsplitter.h"
#include "centralwidget/textarea.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menubar/editmenu.h"
#include <QMenuBar>
#include <QDebug>
#include "statusbar/statusbar.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //文件工具栏
    void handleNewFile();
    void handleOpenFile();
    void handleSaveFile();
    void handleExit();

    //编辑工具栏
    void handleTextCut();
    void handleTextCopy();
    void handleTextPaste();

private:
    Ui::MainWindow *ui;
    FileMenu *fileMenu;
    EditMenu *editMenu;
    NavigationBar *toolBar;
    CentralSplitter *centralSplitter;
    StatusBar *statusBar;
    TextArea *getTextArea();  // 添加获取文本区域的方法
};
#endif
