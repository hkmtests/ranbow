#include "widget.h"
#include "ui_widget.h"
#include <QPaintEvent>
#include <QPainter>

widget::widget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::widget)
{
    ui->setupUi(this);
}

widget::~widget()
{
    delete ui;
}

void widget::paintEvent(QPaintEvent * e) {
    QPainter painter(this);

    int width = this->width();
    int height = this->height();

    painter.setBrush(QBrush(Qt::white));
    painter.setPen(QPen(Qt::white));

    painter.drawEllipse(QPoint(0, 0), width * 2, height * 2);

    painter.setBrush(QBrush(Qt::red));
    painter.setPen(QPen(Qt::red));

    painter.drawEllipse(QPoint(0, 0), width, height);

    painter.setBrush(QBrush(Qt::darkYellow));
    painter.setPen(QPen(Qt::darkYellow));

    painter.drawEllipse(QPoint(0, 0), width - 20, height - 20);

    painter.setBrush(QBrush(Qt::yellow));
    painter.setPen(QPen(Qt::yellow));

    painter.drawEllipse(QPoint(0, 0), width - 40, height - 40);

    painter.setBrush(QBrush(Qt::green));
    painter.setPen(QPen(Qt::green));

    painter.drawEllipse(QPoint(0, 0), width - 60, height - 60);

    painter.setBrush(QBrush(Qt::cyan));
    painter.setPen(QPen(Qt::cyan));

    painter.drawEllipse(QPoint(0, 0), width - 80, height - 80);

    painter.setBrush(QBrush(Qt::darkBlue));
    painter.setPen(QPen(Qt::darkBlue));

    painter.drawEllipse(QPoint(0, 0), width - 100, height - 100);

    painter.setBrush(QBrush(Qt::magenta));
    painter.setPen(QPen(Qt::magenta));

    painter.drawEllipse(QPoint(0, 0), width - 120, height - 120);


    painter.setBrush(QBrush(Qt::white));
    painter.setPen(QPen(Qt::white));

    painter.drawEllipse(QPoint(0, 0), width - 140, height - 140);
}
