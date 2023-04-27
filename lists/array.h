//
// Created by youssef zakaria on 3/31/2023.
//

#ifndef ASSIGNMENT_2_ARRAY_H
#define ASSIGNMENT_2_ARRAY_H
#include <iostream>
using namespace std;

class array {
private:
    int* list;
    int length;
    int size;
public:
    array(int arrSize);

    array();

    void insert(int val);

    void insertAt(int val,int index);

    int retrieveAt(int index);

    void removeAt(int index);

    void replaceAt(int newVal,int index);

    bool isItemAtEqual(int val,int index);

    bool isEmpty();

    bool isFull();

    int listSize();

    int maxListSize();

    void clear();

    void print();
};


#endif //ASSIGNMENT_2_ARRAY_H
