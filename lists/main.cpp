#include <iostream>
#include "array.cpp"
#include "singleLinkedList.cpp"
#include "doublyLinkedList.cpp"
#include "circularLinkedList.cpp"
#include "stack.cpp"
#include "queue.cpp"
using namespace std;


int main() {
    queue <int> q;
    q.enqueue(15);
    q.enqueue(20);
    q.enqueue(50);
    q.print();
    q.dequeue();
    q.print();
    cout<<q.first()<<endl;
    cout<<q.queueSize()<<endl;
    q.print();
    q.clear();
    cout<<"empty line"<<endl;
    q.print();
    cout<<"above this";
}