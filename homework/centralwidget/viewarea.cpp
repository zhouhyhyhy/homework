#include "viewarea.h"
// 解决中文乱码（Qt Creator/VS 需确保文件编码为UTF-8）
#if _MSC_VER
# pragma execution_character_set("utf-8")
#endif
ViewArea::ViewArea(QWidget *parent) : QTreeWidget(parent)
{
    setupView();
}

void ViewArea::setupView()
{
    setHeaderLabel("视图区");
    QTreeWidgetItem *rootItem = new QTreeWidgetItem(this, QStringList("根节点"));
    new QTreeWidgetItem(rootItem, QStringList("子节点1"));
    new QTreeWidgetItem(rootItem, QStringList("子节点2"));
    expandAll();
}
