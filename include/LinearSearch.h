#include <bits/stdc++.h>
#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

class LinearSearch
{
private:
    vector<int>array;
public:
    LinearSearch();
    void Set_Array(vector<int>arr);
    int Search(int target);
};

#endif // LINEARSEARCH_H
