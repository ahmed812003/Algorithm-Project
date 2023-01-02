#include <bits/stdc++.h>
using namespace std;
#include "QuickSort.h"

QuickSort::QuickSort(){

}

void QuickSort::Set_Array(vector<int>arr){
    array=arr;
}

int QuickSort::partition(int low, int high){
    int pivot = array[high];
    int i = (low- 1);
    for (int j = low; j <= high - 1; j++) {
        if (array[j] < pivot) {
            i++;
            swap(array[i], array[j]);
        }
    }
    swap(array[i + 1], array[high]);
    return (i + 1);
}

void QuickSort::Quick( int low, int high){

    if (low < high) {
        int pi = partition(low, high);
        Quick(low, pi - 1);
        Quick(pi + 1, high);
    }
}

void QuickSort::Disply(){
    cout<<"Array Elements  is : ";
    for (auto i : array) {
        cout << i << " ";
    }
    cout << "\n";
}
