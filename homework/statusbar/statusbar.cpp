#include "statusbar.h"
#include <QLabel>
// 解决中文乱码（Qt Creator/VS 需确保文件编码为UTF-8）
#if _MSC_VER
# pragma execution_character_set("utf-8")
#endif
StatusBar::StatusBar(QWidget *parent) : QStatusBar(parent)
{
    setupStatusBar();
}

void StatusBar::setupStatusBar()
{
    showMessage("就绪", 2000);

    QLabel *statusLabel = new QLabel("状态: 正常", this);
    addPermanentWidget(statusLabel);
}
