#include <bits/stdc++.h>
using namespace std;
#include "HeapSort.h"

HeapSort::HeapSort(){

}

void HeapSort::Set_Array(vector<int>arr){
    array=arr;
}

void HeapSort::heapify(int N, int i){
    int largest = i;

    int l = 2 * i + 1;

    int r = 2 * i + 2;

    if (l < N && array[l] > array[largest])
        largest = l;

    if (r < N && array[r] > array[largest])
        largest = r;

    if (largest != i) {
        swap(array[i], array[largest]);
        heapify(N, largest);
    }
}

void HeapSort::heapSort(int N){
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(N, i);

    for (int i = N - 1; i > 0; i--) {
        swap(array[0], array[i]);
        heapify(i, 0);
    }
}

void HeapSort::Heap(){
    heapSort(array.size());
}

void HeapSort::Display(){
    cout<<"Array ELements  is : ";
    for (auto i : array) {
        cout << i << " ";
    }
    cout << "\n";
}

