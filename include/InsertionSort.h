#include <bits/stdc++.h>
#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H


class InsertionSort
{
private:
    vector<int>array;
public:
    InsertionSort();
    void Set_Array (vector<int> array);
    vector<int> Get_Array ();
    void Insertion ();
    void Disply ();
};

#endif
