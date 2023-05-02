#include <iostream>
#include "src/LinkedList.h"
using namespace std;

int main()
{
    LinkedList List1;
    List1.InsertToHead(20);
    List1.InsertToHead(30);
    List1.InsertToTail(12);
    List1.InsertToTail(44);
    List1.InsertAfter(33,12);
    List1.InsertAfter(100,20);
    List1.printAll();


    return 0;
}
