#include <bits/stdc++.h>
using namespace std;
#include "SelectionSort.h"

SelectionSort::SelectionSort(){
    //ctor
}

void SelectionSort::Set_Array(vector<int>arr){
    array=arr;
}

void SelectionSort::Selection (){
    int min_idx , n = array.size();
    for (int i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (int j = i+1; j < n; j++)
            if (array[j] < array[min_idx])
                min_idx = j;

        if(min_idx!=i)
            swap(array[min_idx], array[i]);
    }
}

void SelectionSort::Display(){
    cout<<"Array ELements  is : ";
    for (auto i : array) {
        cout << i << " ";
    }
    cout << "\n";
}

