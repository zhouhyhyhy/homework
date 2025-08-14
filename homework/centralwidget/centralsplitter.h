#ifndef CENTRALSPLITTER_H
#define CENTRALSPLITTER_H

#include <QSplitter>

class ViewArea;
class PropertyArea;
class TextArea;

class CentralSplitter : public QSplitter
{
    Q_OBJECT

public:
    explicit CentralSplitter(QWidget *parent = nullptr);
    // 添加 getter 函数，用于外部获取 TextArea 指针
    TextArea* getTextArea() const {
       return textArea;
    }

private:
    ViewArea *viewArea;
    PropertyArea *propertyArea;
    TextArea *textArea;
};

#endif // CENTRALSPLITTER_H
