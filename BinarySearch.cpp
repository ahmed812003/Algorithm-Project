#include <bits/stdc++.h>
using namespace std;
#include "BinarySearch.h"

BinarySearch::BinarySearch(){

}

void BinarySearch::Set_Array(vector<int> arr) {
    array = arr;
}

vector<int> BinarySearch::Get_Array() {
    return array;
}

int BinarySearch::Search(int target){
    int left= 0 , right = array.size()-1 , mid ;
    bool found = false;
    while(left<=right){
        mid = left + (right - left) / 2;
        if(array[mid] == target){
            found=true;
            break;
        }
        else if(array[mid]>target){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    if(found)
        return mid+1;
    return 0;

}

