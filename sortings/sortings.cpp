//
// Created by youssef zakaria on 3/23/2023.
//
#include "sortings.h"
template<typename T>
void sortings::insertionSort(T arr[], int n) {
    T i, key, j;
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

template<typename T>
void sortings::merge(T arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    T left[n1];
    T right[n2];

    for (int i = 0; i < n1; ++i) {
        left[i] = arr[l + i];
    }
    for (int j = 0; j < n2; ++j) {
        right[j] = arr[m + 1 + j];
    }

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (left[i] < right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

template<typename T>
void sortings::mergeSort(T arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

template<typename T>
int sortings::partition(T arr[], int start, int end) {
    int pivot = arr[end];
    int pivotIndex = start;
    for (int i = start; i < end; ++i) {
        if (arr[i] <= pivot) {
            swap(arr[i], arr[pivotIndex]);
            pivotIndex++;
        }
    }
    swap(arr[end], arr[pivotIndex]);
    return pivotIndex;
}

template<typename T>
void sortings::quickSort(T arr[], int start, int end) {
    if (start < end) {
        int pivotIndex = partition(arr, start, end);
        quickSort(arr, start, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, end);
    }
}

template<typename T>
void sortings::shellSort(T arr[], int n) {
    int gap = n / 2, temp, i, j;
    for (gap; gap >= 1; gap /= 2) {
        for (i = gap; i < n; ++i) {
            temp = arr[i];
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}


template<class T>
void sortings::countSort(T arr[], int size) {
    T mx = 0;
    for (int i = 0; i < size; ++i) {
        mx = max(mx, arr[i]);
    }
    vector<T> freq(mx + 1);
    for (int i = 0; i < size; ++i) {
        freq[arr[i]]++;
    }
    for (int i = 1; i <= mx; ++i) {
        freq[i] += freq[i - 1];
    }
    T sortedArr[size];
    for (int i = size - 1; i >= 0; --i) {
        sortedArr[freq[arr[i]] - 1] = arr[i];
        freq[arr[i]]--;
    }
    for (int i = 0; i < size; ++i) {
        arr[i] = sortedArr[i];
    }
}

