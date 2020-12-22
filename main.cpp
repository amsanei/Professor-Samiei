#include <iostream>
#include <string.h>
#include "include/List.h"
#include "include/setColor.h"
using namespace std;

List appointments;

void mainMune();
void make();
void cancel();
void see();
void edit();
void printList();

int main()
{
    mainMune();
    return 0;
}

void mainMune(){
    system("cls");
    int choice;
    SetColor(12);
    cout<<"---->";
    SetColor(7);
    cout<<" Welcome To The Professor Samiei's office ";
    SetColor(12);
    cout<<"<----\n";
    SetColor(7);
    cout<<"What we can do:\n";
    SetColor(12);
    cout<<"\t1.";
    SetColor(7);
    cout<<"make an appointment"<<endl;
    SetColor(12);
    cout<<"\t2.";
    SetColor(7);
    cout<<"cancel my appointment"<<endl;
    SetColor(12);
    cout<<"\t3.";
    SetColor(7);
    cout<<"show my appointment's details"<<endl;
    SetColor(12);
    cout<<"\t4.";
    SetColor(7);
    cout<<"change my appointment's hour"<<endl;
    SetColor(12);
    cout<<"\t5.";
    SetColor(7);
    cout<<"today's appointment list"<<endl;
    SetColor(12);
    cout<<"\t6.";
    SetColor(7);
    cout<<"Exit"<<endl;
    cout<<"------------"<<endl<<"Enter your choice number(1-5): ";
    cin>>choice;
    switch(choice){
        case 1 : make(); break;
        case 2 : cancel(); break;
        case 3 : see(); break;
        case 4 : edit(); break;
        case 5 : printList(); break;
        case 6 : exit(1);

    }
}

void make(){
    system("cls");
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
    SetColor(10);
    cout<<"We'll meet you at "<<hour<<" o'clock ,please don't be late <3.\n"<<endl;
    SetColor(7);
    system("pause");
    mainMune();
}
void cancel(){
    system("cls");
    string nCode;
    cout<<"Enter your National code(no space,no hyphen): ";
    cin>>nCode;
    appointments.delNode(nCode);
    cout<<endl;
    system("pause");
    mainMune();
}
void see(){
    system("cls");
    string nCode;
    cout<<"Enter your National code(no space,no hyphen): ";
    cin>>nCode;
    appointments.findNode(nCode);
    cout<<endl;
    system("pause");
    mainMune();
}
void edit(){
    system("cls");
    string nCode;
    cout<<"Enter your National code(no space,no hyphen): ";
    cin>>nCode;
    appointments.findNode(nCode);
    appointments.editNode();
    cout<<endl;
    system("pause");
    mainMune();
}

void printList(){
    system("cls");
    SetColor(12);
    cout<<"HOUR\tNAME\tNATINOAL CODE\n";
    cout<<"-------------------------------\n";
    SetColor(7);
    appointments.printList();
    cout<<endl;
    system("pause");
    mainMune();
}
