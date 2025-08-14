#ifndef TEXTAREA_H
#define TEXTAREA_H

#include <QTextEdit>

class TextArea : public QTextEdit
{
    Q_OBJECT

public:
    explicit TextArea(QWidget *parent = nullptr);

private:
    void setupText();
};

#endif // TEXTAREA_H
