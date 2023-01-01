#include <bits/stdc++.h>
#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H


class BinarySearch
{
private:
    vector<int>array;
public:
    BinarySearch();
    void Set_Array(vector<int>arr);
    vector<int> Get_Array();
    int Search(int target);
};

#endif // BINARYSEARCH_H
