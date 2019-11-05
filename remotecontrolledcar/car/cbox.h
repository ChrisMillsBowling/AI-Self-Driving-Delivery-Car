#ifndef CBOX_H
#define CBOX_H

#include <QGraphicsObject>
#include <QBrush>

class CBox : public QGraphicsObject
{
    Q_OBJECT
public:
    CBox();
    QRectF boundingRect() const;

public Q_SLOTS:
    bool Pickup();

protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = 0);
    void timerEvent(QTimerEvent* event);

private:
    QBrush color;
    qreal DeviationX;
    qreal DeviationY;
};

#endif // CBOX_H
