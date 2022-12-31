#include <bits/stdc++.h>
#ifndef BREADTHFIRSTSEARCH_H
#define BREADTHFIRSTSEARCH_H


class BreadthFirstSearch
{
private:
    vector<vector<int>>array;
public:
    BreadthFirstSearch();
    void Set_Array (vector<pair<int,int>>arr);
    vector<vector<int>> Get_Graph();
    void Disply_Graph ();
    void Path_From_Node_A_To_B (int NodeA , int NodeB);
    void ShortestPath_From_Node_A_To_B (int NodeA , int NodeB);
};

#endif // BREADTHFIRSTSEARCH_H
