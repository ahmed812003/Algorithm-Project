#include <bits/stdc++.h>
#ifndef BREADTH FIRST SEARCH_H
#define BREADTH FIRST SEARCH_H


class Breadth First Search
{
private:
    vector<vector<int>>array;
public:
    Breadth First Search();
    void Set_Array (vector<vector<int>>arr);
    vector<vector<int>> Get_Graph();
    void Disply_Graph ();
    void Path_From_Node_A_To_B (int NodeA , int NodeB);
    vector<vector<int>> Path_From_Node_A_To_B (int NodeA , int NodeB);
    void ShortestPath_From_Node_A_To_B_1 (int NodeA , int NodeB);
    void ShortestPath_From_Node_A_To_B_2 (int NodeA , int NodeB);
};

#endif // BREADTH FIRST SEARCH_H
