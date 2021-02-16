#ifndef EXITPOP_H
#define EXITPOP_H

#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>

class exitPop: public QGraphicsRectItem
{
public:
    exitPop(QGraphicsRectItem * parent=nullptr);
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
};

#endif // EXITPOP_H
