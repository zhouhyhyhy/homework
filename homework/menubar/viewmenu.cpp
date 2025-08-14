#include "viewmenu.h"
// 解决中文乱码（Qt Creator/VS 需确保文件编码为UTF-8）
#if _MSC_VER
# pragma execution_character_set("utf-8")
#endif
ViewMenu::ViewMenu(QWidget *parent) : QMenu("视图", parent)
{
    createActions();
}

void ViewMenu::createActions()
{
    addAction("全屏");
    addAction("缩放");
}
