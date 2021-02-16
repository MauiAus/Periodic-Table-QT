#ifndef POPINFO_H
#define POPINFO_H

#include <QGraphicsPixmapItem>

class popInfo: public QGraphicsPixmapItem
{
public:
    popInfo(QGraphicsPixmapItem * parent = nullptr);
    void addimage(int s);
};

#endif // POPINFO_H
