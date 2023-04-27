//
// Created by youssef zakaria on 3/31/2023.
//

#ifndef ASSIGNMENT_2_SINGLELINKEDLIST_H
#define ASSIGNMENT_2_SINGLELINKEDLIST_H
#include <iostream>
using namespace std;

struct node{
public:
    int item;
    node *next;
};


class singleLinkedList {
public:
    node *head;
    singleLinkedList();

    void insertAtHead(int val);

    void insertAtTail(int val);

    void insertAt(int val, int index);

    void removeAtHead();

    void removeAtTail();

    void removeAt(int index);

    int retrieveAt(int index);

    void replaceAt(int val, int index);

    bool isExist(int val);

    bool isItemAtEqual(int val, int index);

    void swap(int firstItemIndex, int secondItemIndex); //nodes without data;

    bool isEmpty();

    int linkedListSize();

    void clear();

    void print();

};


#endif //ASSIGNMENT_2_SINGLELINKEDLIST_H
