#ifndef ELEMENTBLOCK_H
#define ELEMENTBLOCK_H

#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsPixmapItem>

class ElementBlock: public QGraphicsPixmapItem
{
public:
    //ElementBlock(QGraphicsRectItem * parent = nullptr);
    ElementBlock(QGraphicsPixmapItem * parent = nullptr);
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
    void addimage(int s);
private:
    int ElementNum;
};

#endif // ELEMENTBLOCK_H
