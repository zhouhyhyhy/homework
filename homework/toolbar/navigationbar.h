#ifndef NAVIGATIONBAR_H
#define NAVIGATIONBAR_H

#include <QToolBar>

class NavigationBar : public QToolBar
{
    Q_OBJECT

public:
    explicit NavigationBar(QWidget *parent = nullptr);

private:
    void createActions();
};

#endif // NAVIGATIONBAR_H
