#include <bits/stdc++.h>
using namespace std;
#include "LinearSearch.h"

LinearSearch::LinearSearch(){

}

void LinearSearch::Set_Array(vector<int>arr){
    array=arr;
}

int LinearSearch::Search(int target){
    for(int i=0 ; i<array.size() ; i++){
        if(array[i]==target){
            return i+1;
        }
    }
    return 0;
}
