#include "navigationbar.h"
// 解决中文乱码（Qt Creator/VS 需确保文件编码为UTF-8）
#if _MSC_VER
# pragma execution_character_set("utf-8")
#endif
NavigationBar::NavigationBar(QWidget *parent) : QToolBar("导航栏", parent)
{
    setMovable(false);
    createActions();
}

void NavigationBar::createActions()
{
    addAction("首页");
    addAction("设置");
    addAction("帮助");
}
