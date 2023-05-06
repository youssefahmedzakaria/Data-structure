//
// Created by youssef zakaria on 3/23/2023.
//
#include "bits/stdc++.h"
using namespace std;
#ifndef DATASTRUCTURE_ASSIGNMENT_1_SORTINGS_H
#define DATASTRUCTURE_ASSIGNMENT_1_SORTINGS_H


class sortings {

public:
template<typename T>
void insertionSort(T arr[], int n) ;

template<typename T>
void selectionSort(T arr[], int n);

template<typename T>
void bubbleSort(T arr[], int n);

template<typename T>
void merge(T arr[], int l, int m, int r) ;

template<typename T>
void mergeSort(T arr[], int l, int r);

template<typename T>
int partition(T arr[], int start, int end) ;

template<typename T>
void quickSort(T arr[], int start, int end) ;

template<typename T>
void shellSort(T arr[], int n) ;


template<class T>
void countSort(T arr[], int size);

};


#endif //DATASTRUCTURE_ASSIGNMENT_1_SORTINGS_H
