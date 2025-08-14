#include "textarea.h"
// 解决中文乱码（Qt Creator/VS 需确保文件编码为UTF-8）
#if _MSC_VER
# pragma execution_character_set("utf-8")
#endif
TextArea::TextArea(QWidget *parent) : QTextEdit(parent)
{
    setupText();
}

void TextArea::setupText()
{
    setPlainText("这是一个文本编辑区域。\n您可以在这里输入和编辑文本内容。\n\n右侧区域可以放置任何您需要的内容。");
}
