#include <bits/stdc++.h>
#ifndef QUICKSORT_H
#define QUICKSORT_H


class QuickSort
{
    private:
        vector<int>array;
    public:
        QuickSort();
        void Set_Array (vector<int> array);
        int partition(int low, int high);
        void Quick(int low, int high);
        void Disply ();

};

#endif // QUICKSORT_H
