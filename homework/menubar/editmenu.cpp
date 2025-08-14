#include "editmenu.h"
// 解决中文乱码（Qt Creator/VS 需确保文件编码为UTF-8）
#if _MSC_VER
# pragma execution_character_set("utf-8")
#endif
EditMenu::EditMenu(QWidget *parent) : QMenu("编辑", parent)
{
    createActions();
}

void EditMenu::createActions()
{
    // 剪切动作
    //创建剪切动作并添加到当前菜单
    QAction *cutAction = addAction("剪切");
    //为剪切动作设置快捷键
    cutAction->setShortcut(QKeySequence::Cut);
    //连接动作触发信号：当用户点击剪切菜单时触发当前的cutRequested信号
    connect(cutAction, &QAction::triggered, this, &EditMenu::cutRequested);

    // 复制动作
    QAction *copyAction = addAction("复制");
    copyAction->setShortcut(QKeySequence::Copy);
    connect(copyAction, &QAction::triggered, this, &EditMenu::copyRequested);

    // 粘贴动作
    QAction *pasteAction = addAction("粘贴");
    pasteAction->setShortcut(QKeySequence::Paste);
    connect(pasteAction, &QAction::triggered, this, &EditMenu::pasteRequested);

    addSeparator();


}
