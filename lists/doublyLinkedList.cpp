#include "doublyLinkedList.h"

doublyLinkedList::doublyLinkedList()
{
    first = nullptr;
    last = nullptr;
    count = 0;
}

void doublyLinkedList::insertAtHead(int element)
{
    node *newnode = new node;
    newnode->item = element; 
    if(count == 0){
        first = last = newnode;
        newnode->next = newnode->prev = nullptr;
    }
    else{
        newnode->next = first;
        newnode->prev = nullptr;
        first->prev = newnode;
        first = newnode;
    }
    count++;
}

void doublyLinkedList::insertAtTail(int element)
{
    node *newnode = new node;
    newnode->item = element;
    if(count == 0){
        first = last = newnode;
        newnode->next = newnode->prev = nullptr;
    }
    else{
        newnode->next = nullptr;
        newnode->prev = last;
        last->next = newnode;
        last = newnode;
    }
    count++;
}

void doublyLinkedList::insertAt(int element, int index)
{
    if(index < 0 || index > count){
        cout << "out of range" << endl;
        return;
    }
    node *newnode = new node();
    newnode->item = element;
    if(count == 0){
        insertAtHead(element);
    } 
    else if(index == count){
        insertAtTail(element);
    }
    else{
        node *cur = first;
        for (int i = 0; i < index-1; i++)
        {
            cur = cur->next;
        }
        newnode->next = cur->next;
        newnode->prev = cur;
        cur->next = newnode;
        newnode->next->prev = newnode;
    }
    count++;
}



void doublyLinkedList::insertAfter(node *prev_node, int data)
{
    if (prev_node == nullptr) {
        cout << "The previous node cannot be null.\n";
        return;
    }

    node* newnode = new node;
    newnode->item = data;
    newnode->next = prev_node->next;
    newnode->prev = prev_node;
    prev_node->next = newnode;

    if (newnode->next != nullptr) {
        newnode->next->prev = newnode;
    }
    else {
        last = newnode;
    }

    count++;
}

void doublyLinkedList::removeAtHead()
{
    if (isEmpty()) {
        cout << "Error: Cannot remove from an empty list." << endl;
        return;
    }
    else if(count == 1){
        delete first;
        last = first = nullptr;
    }
    else{
        node* curr = first;
        first = first->next;
        first->prev=nullptr;
        delete curr;
    }
    count--;
}

void doublyLinkedList::removeAtTail()
{
    if (isEmpty()) {
        cout << "Error: Cannot remove from an empty list." << endl;
        return;
    }
    else if(count == 1){
        delete first;
        last = first = nullptr;
    }
    else{
        node* curr = last;
        last = last->prev;
        last->next=nullptr;
        delete curr;
    }
    count--;
}

void doublyLinkedList::removeAt(int index)
{
     if (isEmpty()) {
        cout << "Error: Cannot remove from an empty list." << endl;
        return;
    }
    else if(count == 1){
        delete first;
        last = first = nullptr;
    }
    else{
        node *cur = first;
        for (int i = 0; i < index-1; i++)
        {
            cur = cur->next;
        }
        first = first->next;
        first->prev=nullptr;
        delete cur;
    }
    count--;
}

int doublyLinkedList::retrieveAt(int index)
{
    if (isEmpty()) {
        cout << "Error: Cannot remove from an empty list." << endl;
        return 0;
    }
    node *temp = first;
    for (int i = 0; i < index; i++) {
        temp = temp->next;

        if (temp == nullptr) {
            cout << "Error: Index out of range." << endl;
            return 0;
        }
    }

    return temp->item;
    }

    void doublyLinkedList::replaceAt(int newElement, int index)
    {
     if (isEmpty()) {
        cout << "Error: Cannot remove from an empty list." << endl;
        return ;
    }
    node *temp = first;
    for (int i = 0; i < index; i++) {
        temp = temp->next;

        if (temp == nullptr) {
            cout << "Error: Index out of range." << endl;
            return;
        }
    }

    temp->item = newElement;
    }

    bool doublyLinkedList::isExist(int element)
    {
    if(isEmpty()){
        return false;
    }
    else{
        node *temp = first;
        while(temp!=nullptr){
            if(temp->item==element){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
    }

    bool doublyLinkedList::isItemAtEqual(int element, int index)
    {
    if(isEmpty()){
        return false;
    }
       if (index < 0 || index >= count) {
        return false;
    }
    node *temp = first;
    for (int i = 0; i < index; i++) {
        temp = temp->next;
    }
    return (temp->item == element);
    }

void doublyLinkedList::reverse()
{
    node *temp = nullptr;
    node *current = first;
    while (current != nullptr) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if (temp != nullptr) {
        first = temp->prev;
    } else {
        first = last;
    }
}



    bool doublyLinkedList::isEmpty()
    {
    return (first == nullptr);
}

int doublyLinkedList::doubleLinkedListSize()
{
    return count;
}

void doublyLinkedList::clear()
{
    node *current = first;
    while(current != nullptr) {
        node *temp = current;
        current = current->next;
        delete temp;
    }
    first = last = nullptr;
    count = 0;
}

void doublyLinkedList::forwardTraversal()
{
    node *current = first;
    while(current != nullptr){
        cout << current->item << " ";
        current = current->next;
    }
    cout << endl;
}

void doublyLinkedList::backwardTraversal()
{
    node *current = last;
    while(current != nullptr){
        cout << current->item << " ";
        current = current->prev;
    }
    cout << endl;
}
