#include <bits/stdc++.h>
#ifndef DEPTHFIRSTSEARCH_H
#define DEPTHFIRSTSEARCH_H


class DepthFirstSearch
{
private:
    vector<vector<int>>array;
public:
    DepthFirstSearch();
    void Set_Array (vector<pair<int,int>>arr);
    vector<vector<int>> Get_Graph();
    void DfS(int node , vector<bool>&vis , vector<int>&ls);
    void DfS(int node1 , int node2  , vector<bool>&vis , vector<vector<int>>&ls , vector<int>&path);
    void Disply_Graph ();
    void Path_From_Node_A_To_B (int NodeA , int NodeB);
    void ShortestPath_From_Node_A_To_B (int NodeA , int NodeB);
};

#endif // DEPTHFIRSTSEARCH_H
