#include <iostream>
#include <string.h>
#include "include/List.h"
using namespace std;

List appointments;

void mainMune();
void make();
void cancel();
void see();
void edit();

int main()
{
    mainMune();
    return 0;
}

void mainMune(){
    int choice;
    cout<<"----> Welcome To The Professor Samiei's office <----\n";
    cout<<"What we can do:\n";
    cout<<"\t1.make an appointment"<<endl
        <<"\t2.cancel an appointment"<<endl
        <<"\t3.see an appointment's details"<<endl
        <<"\t4.edit an appointment"<<endl
        <<"\t5.Exit"<<endl;
    cout<<"------------"<<endl<<"Enter your choice number(1-5): ";
    cin>>choice;
    switch(choice){
        case 1 : make(); return;
        case 2 : cancel(); return;
        case 3 : see(); return;
        case 4 : edit(); return;
        case 5 : exit(1);
    }
}

void make(){
    int hour;
    string name;
    string nCode;
    cout<<"Enter the hour: ";
    cin>>hour;
    cout<<"What is the patient full name: ";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter patient national code: ";
    cin>>nCode;
    appointments.addNode(hour,name,nCode);
    appointments.printList();
    mainMune();
}
void cancel(){
    string nCode;
    cout<<"Enter your National code(no space,no hyphen): ";
    cin>>nCode;
    appointments.delNode(nCode);
    appointments.printList();
    mainMune();
}
void see(){
    string nCode;
    cout<<"Enter your National code(no space,no hyphen): ";
    cin>>nCode;
    appointments.findNode(nCode);
    mainMune();
}
void edit(){
    string nCode;
    cout<<"Enter your National code(no space,no hyphen): ";
    cin>>nCode;
    appointments.findNode(nCode);
    appointments.editNode();
    appointments.printList();
    mainMune();
    return;
}
