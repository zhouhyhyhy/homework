#ifndef VIEWMENU_H
#define VIEWMENU_H

#include <QMenu>

class ViewMenu : public QMenu
{
    Q_OBJECT

public:
    explicit ViewMenu(QWidget *parent = nullptr);

private:
    void createActions();
};

#endif // VIEWMENU_H
