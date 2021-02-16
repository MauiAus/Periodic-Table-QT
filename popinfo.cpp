#include "popinfo.h"
#include "system.h"

extern SYSTEMS * sys;
popInfo::popInfo(QGraphicsPixmapItem *parent)
{
    setPos(150,150);
}

void popInfo::addimage(int s)
{
    if(s == 0)
    setPixmap(QPixmap(":/new/images/1.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 1)
    setPixmap(QPixmap(":/new/images/2.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 2)
    setPixmap(QPixmap(":/new/images/3.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 3)
    setPixmap(QPixmap(":/new/images/4.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 4)
    setPixmap(QPixmap(":/new/images/5.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 5)
    setPixmap(QPixmap(":/new/images/6.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 6)
    setPixmap(QPixmap(":/new/images/7.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 7)
    setPixmap(QPixmap(":/new/images/8.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 8)
    setPixmap(QPixmap(":/new/images/9.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 9)
    setPixmap(QPixmap(":/new/images/10.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 10)
    setPixmap(QPixmap(":/new/images/11.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 11)
    setPixmap(QPixmap(":/new/images/12.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 12)
    setPixmap(QPixmap(":/new/images/13.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 13)
    setPixmap(QPixmap(":/new/images/14.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 14)
    setPixmap(QPixmap(":/new/images/15.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 15)
    setPixmap(QPixmap(":/new/images/16.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 16)
    setPixmap(QPixmap(":/new/images/17.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 17)
    setPixmap(QPixmap(":/new/images/18.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 18)
    setPixmap(QPixmap(":/new/images/19.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 19)
    setPixmap(QPixmap(":/new/images/20.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 20)
    setPixmap(QPixmap(":/new/images/21.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 21)
    setPixmap(QPixmap(":/new/images/22.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 22)
    setPixmap(QPixmap(":/new/images/23.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 23)
    setPixmap(QPixmap(":/new/images/24.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 24)
    setPixmap(QPixmap(":/new/images/25.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 25)
    setPixmap(QPixmap(":/new/images/26.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 26)
    setPixmap(QPixmap(":/new/images/27.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 27)
    setPixmap(QPixmap(":/new/images/28.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 28)
    setPixmap(QPixmap(":/new/images/29.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 29)
    setPixmap(QPixmap(":/new/images/30.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 30)
    setPixmap(QPixmap(":/new/images/31.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 31)
    setPixmap(QPixmap(":/new/images/32.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 32)
    setPixmap(QPixmap(":/new/images/33.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 33)
    setPixmap(QPixmap(":/new/images/34.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 34)
    setPixmap(QPixmap(":/new/images/35.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 35)
    setPixmap(QPixmap(":/new/images/36.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 36)
    setPixmap(QPixmap(":/new/images/37.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 37)
    setPixmap(QPixmap(":/new/images/38.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 38)
    setPixmap(QPixmap(":/new/images/39.png").scaled(500,300,Qt::KeepAspectRatio));
    else if(s == 39)
    setPixmap(QPixmap(":/new/images/40.png").scaled(500,300,Qt::KeepAspectRatio));
    else
    setPixmap(QPixmap(":/new/images/40.png").scaled(500,300,Qt::KeepAspectRatio));
}
