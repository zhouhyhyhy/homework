#ifndef PROPERTYAREA_H
#define PROPERTYAREA_H

#include <QTableWidget>

class PropertyArea : public QTableWidget
{
    Q_OBJECT

public:
    explicit PropertyArea(QWidget *parent = nullptr);

private:
    void setupProperties();
};

#endif // PROPERTYAREA_H
