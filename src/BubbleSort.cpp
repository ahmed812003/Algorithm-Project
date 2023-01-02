#include <bits/stdc++.h>
using namespace std;
#include "BubbleSort.h"

BubbleSort::BubbleSort(){

}
void BubbleSort::Set_Array(vector<int>arr){
    array = arr;

}

void BubbleSort::Bubble(){
    int n=array.size();
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (array[j] > array[j + 1])
                swap(array[j] , array[j + 1]);
        }
    }
}

void BubbleSort::Disply(){
    cout<<"Array Elements  is : ";
    for (auto i : array) {
        cout << i << " ";
    }
    cout << "\n";
}
