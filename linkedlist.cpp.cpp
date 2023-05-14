#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node() {
        next = nullptr;
    }
};
class LinkedList {
public:
    Node* head;
    Node* tail;

    void InsertToHead(int input){
 Node *newnode = new Node();
 newnode->value = input;

 newnode->next = head ;
 head = newnode;

 if(tail==nullptr){
        tail=head;
 }
}

void InsertToTail(int input){
 Node *newnode = new Node();
 if(head==nullptr){
    head=newnode;
    tail=newnode;
 }
 newnode->value = input;
 tail->next = newnode ;
 tail = newnode;

}
void InsertAfter(int input,int afternode){
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
void DeleteHead(){
 Node *tmp;
 tmp=head;
 head = head ->next;
 delete tmp;

}
void DeleteTail(){
 Node *tmp=tail;
 Node *tmp2=head;
while(tmp2 != nullptr && tmp2->next != tail){
    tmp2=tmp2->next ;
 }
  if(tmp2!= nullptr){
  tail=tmp2;
  delete tmp;
  tmp2->next =nullptr;
}else{
cout<<"node kosong"<<endl;
    }
}


void DeleteNode(int val){
 Node *tmp ;
 Node *tmp2=head;
 while(tmp2 != nullptr && tmp2->value != val){
    tmp =tmp2;
    tmp2=tmp2->next ;
 }
  if(tmp2!= nullptr){
  tmp->next=tmp2->next;
  delete tmp2;
  tmp2->next =nullptr;
}else{
cout<<"node kosong"<<endl;
    }
}


void printAll(){
 Node *tmp = head ;
  while(tmp!=nullptr){
    cout<< tmp->value <<"->";
    tmp=tmp->next;
  }
 cout<<endl;
}

    LinkedList() {
        head = tail = nullptr;
    }
};

int main() {
    LinkedList list1;
    list1.InsertToHead(10);
    list1.InsertToHead(20);
    list1.InsertToTail(30);
    list1.printAll();
    list1.InsertAfter(40,20);
    list1.printAll();
    list1.DeleteHead();
    list1.printAll();
    list1.DeleteNode(30);
    list1.printAll();

    return 0;
}
