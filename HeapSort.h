#include <bits/stdc++.h>
#ifndef HEAPSORT_H
#define HEAPSORT_H


class HeapSort
{
private:
    vector<int>array;
public:
    HeapSort();
    void Set_Array (vector<int>arr);
    void Heap();
    void heapify(int N, int i);
    void heapSort(int N);
    void Display();
};

#endif // HEAPSORT_H
