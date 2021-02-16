#ifndef MENU_H
#define MENU_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QTimer>

class menu:public QObject, public QGraphicsRectItem
{
   Q_OBJECT
public:
    menu(QGraphicsRectItem * parent = nullptr);
    QTimer * time;
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();
public slots:
    void spawnElements();
private:
    int ElemCtr = 0;
    int x_pos = 40;
    int y_pos = 40;

};

#endif // MENU_H
