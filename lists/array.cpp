//
// Created by youssef zakaria on 3/31/2023.
//

#include "array.h"

array::array(int arrSize) {
    length = 0;
    size = arrSize;
    list = new int[arrSize];
}

array::array() {
length=0;
size=0;
list = nullptr;
}

void array::insert(int val) {
    if(length>=size){
        cout<<"array is full"<<endl;
        return;
    }
    list[length] = val;
    length++;
}

void array::insertAt(int val, int index) {
    if (index >= 0 && index < size) {
        if(length>=size){
            cout<<"array is full"<<endl;
            return;
        }
        else {
            //the length is more than the highest index as the array
            //is zero based so length 9 will be at index 8
            //so while replacement we will shift from index length
            for (int i = length; i > index; i--) {
                list[i] = list[i - 1];
            }
        }
        //now the index is empty as we shifted all the elements in front of it
        list[index] = val;
        length++;

    }
}

int array::retrieveAt(int index) {
    if (index >= 0 && index < length) {
        return list[index];
    } else {
        cout << "invalid index" << endl;
    }
}

void array::removeAt(int index) {
    if (index >= 0 && index < length) {
        for (int i = index; i < length-1; ++i) {
            list[i] = list[i + 1];
        }
        length--;
    } else {
        cout << "invalid index" << endl;
    }
}

void array::replaceAt(int newVal, int index) {
    if (index >= 0 && index < length) {
        list[index] = newVal;
    } else {
        cout << "invalid index" << endl;
    }
}

void array::print() {
    for (int i = 0; i < length ; ++i) {
        cout << list[i] << " ";
    }
    cout << endl;
}

bool array::isItemAtEqual(int val, int index) {
    if (index >= 0 && index < length) {
        return (list[index] == val);
    } else
        return false;
}

bool array::isEmpty() {
    return (length==0);
}

bool array::isFull() {
    return (length==size);
}

int array::listSize() {
    return size;
}

int array::maxListSize() {
    return size;
    delete list;
}

void array::clear() {
    length = 0;
}


