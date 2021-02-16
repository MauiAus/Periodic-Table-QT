#include "dlinklist.h"
#include "system.h"
#include "QDebug"

extern SYSTEMS * sys;

void dlinklist::insert(int n)
{
    Node * newN = new Node();
    newN->num = n;
    newN->next = NULL;
    newN->prev = head;
    if(head != NULL)
    {
        head->next = newN;
    }
    qDebug() << "LL" << newN->num;
    head = newN;
}

int dlinklist::getPrevNode(int c)
{
    setCurrentNode(c);
    return current->prev->num;
}

void dlinklist::setCurrentNode(int g)
{
    Node * temp = new Node();
    temp = head;
    while(temp->num!= g)
    {
        temp = temp->prev;
        current = temp;
    }
}

int dlinklist::getNextNode(int c)
{
    setCurrentNode(c);
    return current->next->num;
}
