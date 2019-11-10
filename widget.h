#ifndef WIDGET_H
#define WIDGET_H

#include <QMainWindow>

namespace Ui {
class widget;
}

class widget : public QMainWindow
{
    Q_OBJECT

protected:
    void paintEvent(QPaintEvent * e);

public:
    explicit widget(QWidget *parent = 0);
    ~widget();

private:
    Ui::widget *ui;
};

#endif // WIDGET_H
