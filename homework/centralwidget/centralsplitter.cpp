#include "centralsplitter.h"
#include "viewarea.h"
#include "propertyarea.h"
#include "textarea.h"

// 解决中文乱码（Qt Creator/VS 需确保文件编码为UTF-8）
#if _MSC_VER
# pragma execution_character_set("utf-8")
#endif
CentralSplitter::CentralSplitter(QWidget *parent) : QSplitter(Qt::Horizontal, parent)
{
    // 左侧垂直分割器
    QSplitter *leftSplitter = new QSplitter(Qt::Vertical, this);

    viewArea = new ViewArea(leftSplitter);
    propertyArea = new PropertyArea(leftSplitter);

    // 右侧文本区
    textArea = new TextArea(this);

    // 设置分割比例
    leftSplitter->setStretchFactor(0, 2);
    leftSplitter->setStretchFactor(1, 1);
    setStretchFactor(0, 1);
    setStretchFactor(1, 2);
}
