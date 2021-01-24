#ifndef TEXTAREA_H
#define TEXTAREA_H

#include <QWidget>

namespace Ui {
class TextArea;
}

namespace Authorium::ui
{
class TextArea : public QWidget
{
    Q_OBJECT

public:
    explicit TextArea(QWidget *parent = nullptr);
    ~TextArea();

private:
    Ui::TextArea *ui;
};
}
#endif // TEXTAREA_H
