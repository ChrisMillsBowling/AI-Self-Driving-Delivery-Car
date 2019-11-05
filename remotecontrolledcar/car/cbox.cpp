#include "cbox.h"
#include <QtWidgets/QtWidgets>
#include <qmath.h>

CBox::CBox() : color(Qt::yellow), DeviationX(0), DeviationY(0)
{
    startTimer(1000 / 33);
    setFlag(QGraphicsItem::ItemIsMovable, true);
    setFlag(QGraphicsItem::ItemIsFocusable, true);
}


void CBox::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);

    painter->setBrush(Qt::yellow);
    painter->drawRect(-40, -40, 40, 40); // base sqaure

}

bool CBox::Pickup()
{
    return true;
}

QRectF CBox::boundingRect() const
{
    return QRectF(-40, -40, 40, 40);
}


void CBox::timerEvent(QTimerEvent *event)
{
    Q_UNUSED(event);

    update();
}
