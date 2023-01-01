#include <bits/stdc++.h>
using namespace std;
#include "DepthFirstSearch.h"

DepthFirstSearch::DepthFirstSearch(){

}

void DepthFirstSearch::Set_Array(vector<pair<int,int>> arr){

    array.resize(arr.size()+3);
    for(int i=0 ; i<arr.size() ; i++){
        array[arr[i].first].push_back(arr[i].second);
    }
}

vector<vector<int>> DepthFirstSearch::Get_Graph(){
    return array;
}

void DepthFirstSearch::DfS(int node , vector<bool>&vis , vector<int>&ls){
    vis[node]=1;
    ls.push_back(node);

    for(auto i:array[node]){
        if(!vis[i]){
            DfS(i , vis , ls);
        }
    }
}

void DepthFirstSearch::Disply_Graph(){

    cout<<"Following is Breadth First Traversal :";
    vector<bool>vis(array.size(),false);
    vector<int>ls;
    DfS(0 , vis , ls);
    for(auto i:ls){
        cout<<i<<" ";
    }
    cout<<"\n";
}

void DepthFirstSearch::DfS(int node1 , int node2  , vector<bool>&vis , vector<vector<int>>&res , vector<int>&path){
    if(node1==node2){
        res.push_back(path);
        return ;
    }

    vis[node1]=true;
    for(auto i:array[node1]){
        if(!vis[i]){
            path.push_back(i);
            DfS(i , node2 , vis ,res,path);
            path.pop_back();
        }
    }
    vis[node1]=false;
}

void DepthFirstSearch::Path_From_Node_A_To_B (int NodeA , int NodeB){
    vector<vector<int>>res;
    vector<bool>vis(array.size(),false);
    vector<int>ls;
    ls.push_back(NodeA);
    DfS(NodeA , NodeB , vis , res , ls);
    if(!res.size()){
        cout << "Given source and destination are not connected"<<"\n";
        return;
    }
    int counter = 1;
    for(auto i:res){
        cout<<"Path Number " << counter<<": ";
        for(auto j:i){
            cout<<j<<" ";
        }
        counter++;
        cout<<"\n";
    }
}

void DepthFirstSearch::ShortestPath_From_Node_A_To_B (int NodeA , int NodeB){
    vector<vector<int>>res;
    vector<bool>vis(array.size(),false);
    vector<int>ls;
    ls.push_back(NodeA);
    DfS(NodeA , NodeB , vis , res , ls);
    if(!res.size()){
        cout << "Given source and destination are not connected"<<"\n";
        return;
    }
    int mn=INT_MAX , idx=-1;
    for(int i=0 ; i<res.size() ; i++){
        if(res[i].size()<mn){
            mn=res[i].size();
            idx=i;
        }
    }
    cout << "Shortest path length is : "<< res[idx].size()-1;
    cout << "\nPath is:: ";
    for(int i=0 ; i<res[idx].size() ; i++){
        cout<<res[idx][i]<<" ";
    }
    cout<<"\n";
}
