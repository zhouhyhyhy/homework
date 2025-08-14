#ifndef VIEWAREA_H
#define VIEWAREA_H

#include <QTreeWidget>

class ViewArea : public QTreeWidget
{
    Q_OBJECT

public:
    explicit ViewArea(QWidget *parent = nullptr);

private:
    void setupView();
};

#endif // VIEWAREA_H
