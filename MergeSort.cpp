#include <bits/stdc++.h>
using namespace std;
#include "MergeSort.h"

MergeSort::MergeSort(){

}

void MergeSort::Set_Array(vector<int>arr){
    array=arr;
}

vector<int> MergeSort::Get_Array(){
    return array;
}

void MergeSort::MergeFun (int begin , int mid , int end){
    int LeftSubArray = mid - begin+1;
    int RightSubArray = end - mid;

    vector<int>LeftArray(LeftSubArray);
    vector<int>RightArray(RightSubArray);

    for (auto i = 0; i < LeftSubArray ; i++)
        LeftArray[i] = array[begin + i];
    for (auto j = 0; j < RightSubArray ; j++)
        RightArray[j] = array[mid + 1 + j];

    int IndexOfLeftSubArray = 0, indexOfRightSubArray =0 , IndexOfMergedArray = begin;

    while (IndexOfLeftSubArray < LeftSubArray && indexOfRightSubArray < RightSubArray){
        if(LeftArray[IndexOfLeftSubArray] <= RightArray[indexOfRightSubArray]){
            array[IndexOfMergedArray]=LeftArray[IndexOfLeftSubArray];
            IndexOfLeftSubArray++;
        }
        else{
            array[IndexOfMergedArray]=RightArray[indexOfRightSubArray];
            indexOfRightSubArray++;
        }
        IndexOfMergedArray++;
    }

    while(IndexOfLeftSubArray < LeftSubArray){
        array[IndexOfMergedArray]=LeftArray[IndexOfLeftSubArray];
        IndexOfLeftSubArray++;
        IndexOfMergedArray++;
    }

    while(indexOfRightSubArray < RightSubArray){
        array[IndexOfMergedArray]=RightArray[indexOfRightSubArray];
        indexOfRightSubArray++;
        IndexOfMergedArray++;
    }
}

void MergeSort::mergeRec (int begin , int end){
    if (begin >= end)
        return;
    int mid = begin + (end - begin) / 2;
    mergeRec (begin , mid);
    mergeRec (mid+1 , end);
    MergeFun(begin , mid , end);
}

void MergeSort::Merge(){
    mergeRec(0 , array.size()-1);
}

void MergeSort::Disply(){
    cout<<"Array ELements  is : ";
    for (auto i : array) {
        cout << i << " ";
    }
    cout << "\n";
}
