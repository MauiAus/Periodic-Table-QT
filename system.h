#ifndef SYSTEM_H
#define SYSTEM_H

#include <QGraphicsView>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsScene>
#include "menu.h"
#include "exitpop.h"
#include "popinfo.h"
#include "traverse.h"
#include "dlinklist.h"

class SYSTEMS: public QGraphicsView
{
public:
    SYSTEMS(QWidget * parent=nullptr);
    QGraphicsScene * scene;
    exitPop * exit_pop1;
    exitPop * exit_pop2;
    popInfo * Info_box;
    traverse * tra_left;
    traverse * tra_right;
    dlinklist * list;
    menu * Menu;
    void setelemNum(int x);
    int getelemNum();
    void addInfo();
    void removeInfo();
private:
    int elemNum = 0;
};

#endif // SYSTEM_H
