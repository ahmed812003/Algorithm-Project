#include <bits/stdc++.h>
using namespace std;
#include "InsertionSort.h"

InsertionSort::InsertionSort() {

}

void InsertionSort::Set_Array(vector<int> arr) {
    array = arr;
}

vector<int> InsertionSort::Get_Array() {
    return array;
}

void InsertionSort::Insertion() {
    int i, key, j , n = array.size();
    for (i = 1; i < n; i++) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

void InsertionSort::Disply() {
    cout<<"Array ELements  is : ";
    for (auto i : array) {
        cout << i << " ";
    }
    cout << "\n";
}
