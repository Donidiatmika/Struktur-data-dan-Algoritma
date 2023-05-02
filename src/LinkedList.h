#ifndef LINKEDLIST_H
#define LINKEDLIST_H


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

    void InsertToHead(int);
    void InsertToTail(int);
    void InsertAfter(int,int);//insert node x setelah B,InsertAfter(x,B)

    void printAll();

    LinkedList() {
        head = tail = nullptr;
    }
};

#endif
