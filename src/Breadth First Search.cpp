#include <bits/stdc++.h>
using namespace std;
#include "Breadth First Search.h"

Breadth First Search::Breadth First Search(){

}

void Breadth First Search::Set_Array(vector<vector<int>> arr){
    for(int i=0 ; i<arr.size() ; i++){
        for(auto j:arr[i]){
            array[i].push_back(j);
        }
    }
}

vector<vector<int>> Breadth First Search::Get_Graph(){
    return array;
}

void Breadth First Search::Disply_Graph(){
    vector<bool>vis(array.size(),false);
    queue<int>q;
    q.push(0);
    while (q.size()){
        int parint = q.front();
        vis[parint]=true;
        cout<<parint<<" ";
        q.pop();
        for (auto child : array[parint]) {
            if (!vis[child]) {
                vis[child] = true;
                q.push(child);
            }
        }
    }
}

void Breadth First Search::Path_From_Node_A_To_B(int NodeA , int NodeB){
    vector<vector<int>>res;
    queue<vector<int>>q;
    vector<int>begin{NodeA};
    int target = NodeB;
    q.push(begin);
    while (!q.empty()) {
        vector<int>parient = q.front();
        q.pop();
        if (parient.back() == target) {
            res.push_back(parient);
        }
        else {
            for (auto child : array[parient.back()]) {
                vector<int> temp = parient;
                temp.push_back(child);
                q.push(temp);
            }
        }
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

vector<vector<int>>Breadth First Search::Path_From_Node_A_To_B(int NodeA , int NodeB){
    vector<vector<int>>res;
    queue<vector<int>>q;
    vector<int>begin{NodeA};
    int target = NodeB;
    q.push(begin);
    while (!q.empty()) {
        vector<int>parient = q.front();
        q.pop();
        if (parient.back() == target) {
            res.push_back(parient);
        }
        else {
            for (auto child : array[parient.back()]) {
                vector<int> temp = parient;
                temp.push_back(child);
                q.push(temp);
            }
        }
    }
    return res;
}

void Breadth First Search::ShortestPath_From_Node_A_To_B_1 (int NodeA , int NodeB){
    vector<vector<int>>res=Path_From_Node_A_To_B(NodeA , NodeB);
    int mn=INT_MAX , idx=-1;
    for(int i= 0 ; i<res.size() ; i++){
        if(res[i].size()<mn){
            mn=res[i].size();
            idx=i;
        }
    }
    cout<<"The Shortest Path is : ";
    for(auto i:res[idx]){
        cout<<i<<" ";
    }
    cout<<"\n";
}
void Breadth First Search::ShortestPath_From_Node_A_To_B_2 (int NodeA , int NodeB){

}
