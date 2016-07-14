#ifndef TOWER_H
#define TOWER_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsPolygonItem>
#include <QGraphicsItem>
#include <QPointF>

class Tower : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Tower(QGraphicsItem *parent = 0);
    double distanceTo(QGraphicsItem *item);
    virtual void fire() = 0;
public slots:
    void aquire_target();
protected:
    QGraphicsPolygonItem *attack_area;
    QPointF attack_dest;
    bool has_target;
};

#endif // TOWER_H