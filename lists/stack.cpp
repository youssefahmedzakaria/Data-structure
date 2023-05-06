#include "stack.h"


template <typename elementType>
stack<elementType>::stack() {
    topPtr = nullptr;
    size = 0;
}

template<class elementType> 
bool stack<elementType>::isEmpty(){
    return(topPtr == nullptr);
}

template<class elementType> 
void stack<elementType>::push(elementType element){
    node* newNode = new node;
    newNode->item = element;
    newNode->next = topPtr;
    topPtr = newNode;
    size++;
}

template <typename elementType>
elementType stack<elementType>::pop(){
    if(isEmpty()){
        cout<<"stack is empty"<<endl;
    }
    elementType temp = topPtr->item;
    node* tempNode = topPtr;
    topPtr = topPtr->next;
    delete tempNode;
    size--;
    return temp;
}

template <typename elementType>
elementType stack<elementType>::top(){
    if(isEmpty()){
        cout<<"stack is empty"<<endl;
    }
    elementType top = topPtr->item;
    return top;
}

template <typename elementType>
void stack<elementType>::print() {
    node* current = topPtr;
    while (current != nullptr) {
        cout << current->item << " ";
        current = current->next;
    }
    cout << endl;
}

template <typename elementType>
int stack<elementType>::stackSize() {
    return size;
}

template <typename elementType>
void stack<elementType>::clear()
{
    while(!isEmpty()){
        pop();
    }
    size = 0;   
}
