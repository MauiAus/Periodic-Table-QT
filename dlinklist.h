#ifndef DLINKLIST_H
#define DLINKLIST_H

struct Node{
    int num;
    Node * prev;
    Node * next;
};

class dlinklist
{
public:
    void insert(int n);
    int getNextNode(int c);
    void setCurrentNode(int g);
    int getPrevNode(int c);
private:
    Node * head = nullptr;
    Node * current;
};

#endif // DLINKLIST_H
