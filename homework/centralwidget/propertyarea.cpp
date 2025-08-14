#include "propertyarea.h"
// 解决中文乱码（Qt Creator/VS 需确保文件编码为UTF-8）
#if _MSC_VER
# pragma execution_character_set("utf-8")
#endif
PropertyArea::PropertyArea(QWidget *parent) : QTableWidget(parent)
{
    setupProperties();
}

void PropertyArea::setupProperties()
{
    setColumnCount(2);
    setHorizontalHeaderLabels(QStringList() << "属性" << "值");
    setRowCount(3);
    setItem(0, 0, new QTableWidgetItem("名称"));
    setItem(0, 1, new QTableWidgetItem("示例项目"));
    setItem(1, 0, new QTableWidgetItem("类型"));
    setItem(1, 1, new QTableWidgetItem("QT应用"));
    setItem(2, 0, new QTableWidgetItem("版本"));
    setItem(2, 1, new QTableWidgetItem("1.0.0"));
}
