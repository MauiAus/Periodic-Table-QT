#include "system.h"

SYSTEMS::SYSTEMS(QWidget * parent)
{
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);
    setScene(scene);

    Menu = new menu();
    Menu->setRect(25,25,750,550);
    scene->addItem(Menu);

    exit_pop1 = new exitPop();
    exit_pop2 = new exitPop();
    Info_box = new popInfo();
    tra_left = new traverse();
    tra_right = new traverse();
    list = new dlinklist();
}

void SYSTEMS::setelemNum(int x)
{
    elemNum = x;
}

int SYSTEMS::getelemNum()
{
    return elemNum;
}

void SYSTEMS::addInfo()
{
    setelemNum(elemNum);
    scene->addItem(exit_pop1);
    exit_pop2->setPos(0,425);
    scene->addItem(exit_pop2);
    if(elemNum > 0)
    {
    tra_left->setPos(25,250);
    tra_left->setFlag(0);
    tra_left->addimage();
    scene->addItem(tra_left);
    }
    if(elemNum < 119)
    {
    tra_right->setPos(650,250);
    tra_right->setFlag(1);
    tra_right->addimage();
    scene->addItem(tra_right);
    }
    Info_box->addimage(elemNum);
    scene->addItem(Info_box);
}

void SYSTEMS::removeInfo()
{
    scene->removeItem(tra_left);
    scene->removeItem(tra_right);
    scene->removeItem(exit_pop1);
    scene->removeItem(exit_pop2);
    scene->removeItem(Info_box);

}

