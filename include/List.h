#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <iostream>
#include <string.h>

using namespace std;

class List{
private:
    typedef struct node{
        int hour;
        string pName; // Patient Name
        string nCode; // National Code
        node* next;
    }* nodePtr;

    nodePtr head;
    nodePtr curr;
    nodePtr temp;
public:
    List();
    void addNode(int hour,string pName,string nCode);
    void delNode(string nCode);
    void findNode(string nCode);
    void editNode();
    void printList();

};

#endif // LIST_H_INCLUDED
