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
