#ifndef EDITMENU_H
#define EDITMENU_H

#include <QMenu>

class EditMenu : public QMenu
{
    Q_OBJECT

public:
    explicit EditMenu(QWidget *parent = nullptr);

signals:
    //文本剪切信号
    void cutRequested();
    //文本复制信号
    void copyRequested();
    //文本粘贴信号
    void pasteRequested();
//    void exitRequested();

private:
    void createActions();
};

#endif // EDITMENU_H
