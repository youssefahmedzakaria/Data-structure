#include <iostream>
#include <algorithm>



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
