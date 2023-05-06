#include "queue.h"

template <typename elementType>
queue<elementType>::queue() {
    firstPtr = lastPtr = nullptr;
    size = 0;
}

template<class elementType> 
bool queue<elementType>::isEmpty(){
    return(firstPtr == nullptr && lastPtr == nullptr);
}

template <typename elementType>
int queue<elementType>::queueSize()
{
    return size;
}

template <typename elementType>
void queue<elementType>::clear()
{
    while (firstPtr != nullptr) {
        node* temp = firstPtr;
        firstPtr = firstPtr->next;
        delete temp;
    }
    lastPtr = nullptr;
    size = 0;
}

template<class elementType> 
void queue<elementType>::enqueue(elementType element){
    node* newNode = new node;
    newNode->item = element;
    newNode->next = nullptr;
    if (isEmpty()) {
        firstPtr = lastPtr = newNode;
    } else {
        lastPtr->next = newNode;
        lastPtr = newNode;
    }
    size++;
}

template <typename elementType>
elementType queue<elementType>::dequeue()
{
    if(isEmpty()){
        cout<<"queue is empty"<<endl;
    }
    elementType temp = firstPtr->item;
    node* tempNode = firstPtr;
    firstPtr = firstPtr->next;
    delete tempNode;
    size--;
    return temp;
}

template <typename elementType>
elementType queue<elementType>::first()
{
    if(isEmpty()){
        throw "queue is empty";
    }
    return firstPtr->item;
}

template <typename elementType>
void queue<elementType>::print()
{
    node* current = firstPtr;
    while (current != nullptr) {
        cout << current->item << " ";
        current = current->next;
    }
    cout << endl;
}
