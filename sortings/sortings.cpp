#include "sortings.h"
#include <bits/stdc++.h>
using namespace std;


template<typename T>
void sortings::insertionSort(T arr[], int n) {
    int i, key, j;
    for (int i = 0; i < n; ++i) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

template<typename T>
void sortings::selectionSort(T arr[], int n) {
    int min;
    for (int i = 0; i < n; ++i) {
        min = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i)
            swap(arr[i], arr[min]);
    }
}


template<typename T>
void sortings::bubbleSort(T arr[], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i] < arr[j])
                swap(arr[i], arr[j]);
        }
    }
}
