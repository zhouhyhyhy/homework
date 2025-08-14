#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMenuBar>
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include <QClipboard>  // 添加剪切板头文件
// 解决中文乱码（Qt Creator/VS 需确保文件编码为UTF-8）
#if _MSC_VER
# pragma execution_character_set("utf-8")
#endif
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 1. 设置窗口属性
    setWindowTitle("多区域界面示例");
    resize(1000, 700);

    // 2. 初始化菜单栏
    fileMenu = new FileMenu(this);
    editMenu = new EditMenu(this);
    menuBar()->addMenu(fileMenu);
    menuBar()->addMenu(editMenu);

    // 3. 初始化工具栏
//    toolBar = new NavigationBar(this);
//    addToolBar(toolBar);

    // 4. 初始化中心部件
    centralSplitter = new CentralSplitter(this);
    setCentralWidget(centralSplitter);

    // 5. 初始化状态栏
    statusBar = new StatusBar(this);
    setStatusBar(statusBar);

    // 6. 连接信号槽
    connect(fileMenu, &FileMenu::newRequested, this, &MainWindow::handleNewFile);
    connect(fileMenu, &FileMenu::openRequested, this, &MainWindow::handleOpenFile);
    connect(fileMenu, &FileMenu::saveRequested, this, &MainWindow::handleSaveFile);
    connect(fileMenu, &FileMenu::exitRequested, this, &MainWindow::handleExit);

    connect(editMenu, &EditMenu::cutRequested, this, &MainWindow::handleTextCut);//editmenu发送cutRequested信号时handleTextCut相应
    connect(editMenu, &EditMenu::copyRequested, this, &MainWindow::handleTextCopy);
    connect(editMenu, &EditMenu::pasteRequested, this, &MainWindow::handleTextPaste);

}

TextArea *MainWindow::getTextArea(){
    // 通过中心部件获取文本区域
//    return centralSplitter->textArea;
    if (centralSplitter) {
        return centralSplitter->getTextArea();
    }
    return nullptr;
}

// 文本剪切功能实现
void MainWindow::handleTextCut()
{
    //获取文本框数据
    TextArea *textArea = getTextArea();

    if (textArea) {
        //获取系统剪切板对象
        QClipboard *clipboard = QApplication::clipboard();
        // 将选中的文本复制到剪切板
        clipboard->setText(textArea->textCursor().selectedText());
        // 删除选中的文本
        textArea->cut();
    }
}

// 文本复制功能实现
void MainWindow::handleTextCopy()
{

    TextArea *textArea = getTextArea();
    if (textArea) {
        QClipboard *clipboard = QApplication::clipboard();
        clipboard->setText(textArea->textCursor().selectedText());
    }
}

// 文本粘贴功能实现
void MainWindow::handleTextPaste()
{
    TextArea *textArea = getTextArea();
    if (textArea) {
        QClipboard *clipboard = QApplication::clipboard();
        // 将剪切板内容粘贴到文本区域
        textArea->insertPlainText(clipboard->text());
    }
}

void MainWindow::handleNewFile()
{
    qDebug() << "处理新建文件操作";
    QMessageBox::information(this, "新建文件", "新建文件功能已触发");
    // 这里添加实际的新建文件逻辑
}

void MainWindow::handleOpenFile()
{
    qDebug() << "处理打开文件操作";
    QString fileName = QFileDialog::getOpenFileName(this, "打开文件");
    if(!fileName.isEmpty()) {
        QMessageBox::information(this, "文件已打开", "已选择文件: " + fileName);
        // 这里添加实际的文件打开逻辑
    }
}

void MainWindow::handleSaveFile()
{
    qDebug() << "处理保存文件操作";
    QString fileName = QFileDialog::getSaveFileName(this, "保存文件");
    if(!fileName.isEmpty()) {
        QMessageBox::information(this, "文件已保存", "文件已保存到: " + fileName);
        // 这里添加实际的文件保存逻辑
    }
}

void MainWindow::handleExit()
{
    qDebug() << "处理退出操作";
    if(QMessageBox::question(this, "退出", "确定要退出程序吗?",
                           QMessageBox::Yes|QMessageBox::No) == QMessageBox::Yes) {
        qApp->quit();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
