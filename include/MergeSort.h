#include <bits/stdc++.h>
#ifndef MERGESORT_H
#define MERGESORT_H


class MergeSort
{
private:
    vector<int>array;
public:
    void Set_Array(vector<int>array);
    vector<int> Get_Array ();
    void Disply();
    void Merge();
    void MergeFun (int begin , int mid , int end);
    void mergeRec (int begin , int end);
    MergeSort();

};

#endif
