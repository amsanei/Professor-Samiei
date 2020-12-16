#include "List.h"

List::List(){
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void List::addNode(int hour,string pName,string nCode){
    nodePtr n = new node;
    n->next = NULL;
    n->hour = hour;
    n->pName = pName;
    n->nCode = nCode;

    if(head != NULL){
        curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->next = n;
    }else{
        head = n;
    }
}

void List::printList(){
    curr = head;
    while(curr != NULL){
        cout<<curr->hour<<"\t"
            <<curr->pName<<"\t"
            <<curr->nCode<<endl;
        curr = curr->next;
    }
}
