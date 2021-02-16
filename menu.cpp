#include "menu.h"
#include "elementblock.h"
#include <QDebug>
#include "system.h"

extern SYSTEMS * sys;
menu::menu(QGraphicsRectItem * parent)
{
    time = new QTimer();
    connect(time,SIGNAL(timeout()),this,SLOT(spawnElements()));
    time->start(5);
}

void menu::setX(int x)
{
    x_pos = x;
}

void menu::setY(int y)
{
    y_pos = y;
}

int menu::getX()
{
    return x_pos;
}

int menu::getY()
{
    return y_pos;
}

void menu::spawnElements()
{
    if(ElemCtr == 120)
        time->disconnect();
    else
    {
        sys->setelemNum(ElemCtr);
        sys->list->insert(ElemCtr);
        if(ElemCtr == 1 || ElemCtr == 9 || ElemCtr == 17 || ElemCtr == 35 || ElemCtr == 53 || ElemCtr == 71 || ElemCtr == 89)
        {

                x_pos = 720;
                ElementBlock * elem = new ElementBlock();
                scene()->addItem(elem);
                qDebug() << "Test run" << ElemCtr << endl;
                //sys->setelemNum(ElemCtr);
                ElemCtr++;
                x_pos = 40;
                y_pos = y_pos + 40;

        }
        else if(ElemCtr == 4 || ElemCtr == 12)
        {
           x_pos = 520;
           ElementBlock * elem = new ElementBlock();
           scene()->addItem(elem);
           qDebug() << "Test run" << ElemCtr << endl;
           //sys->setelemNum(ElemCtr);
           ElemCtr++;
           x_pos = x_pos+40;
        }
        else if(ElemCtr >= 89)
        {
            if(ElemCtr == 90 || ElemCtr == 105)
            {
                x_pos = 160;
                ElemCtr++;
                y_pos = y_pos + 40;

            }
            else if(ElemCtr < 105 && ElemCtr > 90)
            {
                ElementBlock * elem = new ElementBlock();
                scene()->addItem(elem);
                qDebug() << "Test run" << ElemCtr << endl;
                //sys->setelemNum(ElemCtr);
                ElemCtr++;
                x_pos = x_pos+40;
            }
            else if(ElemCtr > 104 && ElemCtr > 90)
            {
                ElementBlock * elem = new ElementBlock();
                scene()->addItem(elem);
                qDebug() << "Test run" << ElemCtr << endl;
                //sys->setelemNum(ElemCtr);
                ElemCtr++;
                x_pos = x_pos+40;
            }
        }
        else
        {
            ElementBlock * elem = new ElementBlock();
            scene()->addItem(elem);
            qDebug() << "Test run" << ElemCtr << endl;
            //sys->setelemNum(ElemCtr);
            ElemCtr++;
            x_pos = x_pos + 40;
        }
    }
}
