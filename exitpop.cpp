#include "exitpop.h"
#include "system.h"

extern SYSTEMS * sys;
exitPop::exitPop(QGraphicsRectItem *parent)
{
    setRect(25,25,750,125);
}

void exitPop::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    sys->removeInfo();
}
