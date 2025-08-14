#include "filemenu.h"
#include <QAction>
// 解决中文乱码（Qt Creator/VS 需确保文件编码为UTF-8）
#if _MSC_VER
# pragma execution_character_set("utf-8")
#endif
FileMenu::FileMenu(QWidget *parent) : QMenu("文件", parent)
{
    createActions();
}

void FileMenu::createActions()
{
    // 新建动作
    QAction *newAction = addAction("新建");
    newAction->setShortcut(QKeySequence::New);
    connect(newAction, &QAction::triggered, this, &FileMenu::newRequested);

    // 打开动作
    QAction *openAction = addAction("打开");
    openAction->setShortcut(QKeySequence::Open);
    connect(openAction, &QAction::triggered, this, &FileMenu::openRequested);

    // 保存动作
    QAction *saveAction = addAction("保存");
    saveAction->setShortcut(QKeySequence::Save);
    connect(saveAction, &QAction::triggered, this, &FileMenu::saveRequested);

    addSeparator();

    // 退出动作
    QAction *exitAction = addAction("退出");
    exitAction->setShortcut(QKeySequence::Quit);
    connect(exitAction, &QAction::triggered, this, &FileMenu::exitRequested);
}
