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

void List::delNode(string nCode){
    nodePtr delptr = NULL;
    temp = head;
    curr = head;
    while(curr != NULL && curr->nCode != nCode){
        temp = curr;
        curr = curr->next;
    }
    if(curr == NULL){
        cout<<"there are no appointment for this national code ~> "<<nCode<<endl;
        delete delptr;
    }else{
        delptr = curr;
        curr = curr->next;
        temp->next = curr;
        if(delptr == head){
            head = head->next;
            temp = NULL;
        }
        delete delptr;
        cout<<"the appointment for this national code, canceled"<<endl;

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
