//
// Created by youssef zakaria on 3/31/2023.
//

#include "singleLinkedList.h"

singleLinkedList::singleLinkedList() {
head = nullptr;
}

bool singleLinkedList::isEmpty() {
    return (head == nullptr);
}


int singleLinkedList::linkedListSize()
{
    int count = 0;
    node* temp = head;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

void singleLinkedList::insertAtHead(int val) {
    node *newnode = new node;
    newnode->item=val;
    newnode->next = head;
    head = newnode;
}

void singleLinkedList::clear()
{
    head = nullptr;
}

void singleLinkedList::print()
{
    node *temp = new node;
    temp = head;
    while(temp!=nullptr){
        cout<<temp->item<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void singleLinkedList::insertAtTail(int val) {
    node *newnode = new node;
    newnode->item=val;
    newnode->next= nullptr;
    if(isEmpty()){
        head = newnode;
        return;
    }
    node* temp = head;
    while(temp->next!= nullptr){
        temp = temp->next;
    }
    temp->next = newnode;
}

void singleLinkedList::insertAt(int val, int index)
{
    node *newnode = new node;
    newnode->item = val;

    if (index == 0) {  // Insert at the head of the list
        insertAtHead(val);
        }

    // Traverse the linked list to find the node at the previous index
    node *prevnode = head;
    for (int i = 0; i < index - 1; i++) {
        prevnode = prevnode->next;

        // If the previous node is NULL, the index is out of range
        if (prevnode == NULL) {
            cout << "Error: Index out of range." << endl;
            return;
        }
    }

    // Insert the new node after the previous node
    newnode->next = prevnode->next;
    prevnode->next = newnode;
}

void singleLinkedList::removeAtHead()
{
    if (isEmpty()) {
        cout << "Error: Cannot remove from an empty list." << endl;
        return;
    }
    node *temp = head;
    head = head->next;
    delete temp;
}

void singleLinkedList::removeAtTail()
{
    if (isEmpty()) {
        cout << "Error: Cannot remove from an empty list." << endl;
        return;
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    node *temp = head;
    while(temp->next->next!= nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

void singleLinkedList::removeAt(int index)
{
    if (index == 0) {  
        removeAtHead();
        return;
    }
    node *prevnode = head;
    for (int i = 0; i < index - 1; i++) {
        prevnode = prevnode->next;

        if (prevnode == NULL) {
            cout << "Error: Index out of range." << endl;
            return;
        }
    }

    node *nodeToDelete = prevnode->next;
    prevnode->next = nodeToDelete->next;
    delete nodeToDelete;
}

int singleLinkedList::retrieveAt(int index)
{
if (isEmpty()) {
        cout << "Error: Cannot retrieve from an empty list." << endl;
        return 0; 
    }
    node *temp = head;
    for (int i = 0; i < index; i++) {
        temp = temp->next;

        if (temp == nullptr) {
            cout << "Error: Index out of range." << endl;
            return 0;
        }
    }

    return temp->item;
    }

    void singleLinkedList::replaceAt(int val, int index)
    {
        if(isEmpty()){
            cout << "Error: Cannot retrieve from an empty list." << endl;
        }
        node *temp = head;
        for(int i = 0; i < index; i++){
            temp = temp->next;
        }
        if(temp == nullptr) {
            cout << "Error: Index out of range." << endl;
        }
        temp->item = val;
    }


    bool singleLinkedList::isExist(int val)
    {
    if (isEmpty()) {
        cout << "Error: Cannot search an empty list." << endl;
        return false;
    }
    node* temp = head;
    while (temp != nullptr) {
        if (temp->item == val) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

bool singleLinkedList::isItemAtEqual(int val, int index)
{
    if (isEmpty()) {
        cout << "Error: Cannot search an empty list." << endl;
        return false;
    }
    node *temp = head;
        for(int i = 0; i < index; i++){
            temp = temp->next;
            if(temp == nullptr) {
                cout << "Error: Index out of range." << endl;
                return false;
            }
        }
        
        if(temp->item=val){
            return true;
        }
        else{
            return false;
        }   
}