#include "traverse.h"
#include "system.h"
#include "QDebug"

extern SYSTEMS * sys;


/*
traverse::traverse(QGraphicsRectItem *parent)
{
    setRect(25,250,125,100);
}
*/
traverse::traverse(QGraphicsPixmapItem *parent)
{
    //int cur = sys->getelemNum();
    //int i = 0;
    //while(i != 119)
    //{
    //    insert(i);
    //}
    //if(sys->getelemNum() > 0 & sys->getelemNum() <119)
    //setRect(25,250,125,100);
    //else
    //setRect(1,1,1,1);
    //setCurrentNode(cur);

}

void traverse::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    //sys->list->setCurrentNode(sys->getelemNum());
    if(flag == 0)
    {
        qDebug() << sys->list->getPrevNode(sys->getelemNum());
        sys->setelemNum(sys->getelemNum() - 1);
        sys->removeInfo();
        sys->addInfo();
        //qDebug() << (sys->getelemNum() - 1);
        //qDebug() << sys->list->getPrevNode();
    }
    if(flag == 1)
    {
        qDebug() << sys->list->getNextNode(sys->getelemNum());
        sys->setelemNum(sys->getelemNum() + 1);
        sys->removeInfo();
        sys->addInfo();
        //qDebug() << (sys->getelemNum() + 1);
        //qDebug() << sys->list->getNextNode();
    }
}

void traverse::setFlag(int x)
{
    flag = x;
}

void traverse::addimage()
{
    if(flag == 0)
    setPixmap(QPixmap(":/new/images/left.png").scaled(125,100,Qt::KeepAspectRatio));
    if(flag == 1)
    setPixmap(QPixmap(":/new/images/right.png").scaled(125,100,Qt::KeepAspectRatio));
}


