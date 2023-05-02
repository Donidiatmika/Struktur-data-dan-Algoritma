#include<iostream>
#include "LinkedList.h"
using namespace std;

void LinkedList::InsertToHead(int input){
 Node *newnode = new Node();
 newnode->value = input;

 newnode->next = head ;
 head = newnode;

 if(tail==nullptr){
        tail=head;
 }
}

void LinkedList::InsertToTail(int input){
 Node *newnode = new Node();
 if(head==nullptr){
    head=newnode;
    tail=newnode;
 }
 newnode->value = input;
 tail->next = newnode ;
 tail = newnode;

}
void LinkedList::InsertAfter(int input,int afternode){
    Node *newnode = new Node();
    newnode->value = input;
    Node *tmp = head;
    while (tmp != nullptr && tmp->value != afternode){
        tmp = tmp->next;
    }
    if(tmp != nullptr){
        newnode->next = tmp->next;
        tmp->next = newnode;
    }else{
     cout<<"node kosong "<<endl;
    }

}

void LinkedList::printAll(){
 Node *tmp = head ;
  while(tmp!=nullptr){
    cout<< tmp->value <<"->";
    tmp=tmp->next;
  }
 cout<<endl;
}
