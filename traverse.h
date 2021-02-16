#ifndef TRAVERSE_H
#define TRAVERSE_H

#include <QGraphicsSceneMouseEvent>
#include <QGraphicsPixmapItem>

class traverse: public QGraphicsPixmapItem
{
public:
    //traverse(QGraphicsRectItem * parent = nullptr);
    traverse(QGraphicsPixmapItem * parent = nullptr);
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
    void setFlag(int x);
    void addimage();
private:
    int flag = 3;
};

#endif // TRAVERSE_H
