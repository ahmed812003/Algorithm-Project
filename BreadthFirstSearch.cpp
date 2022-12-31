#include <bits/stdc++.h>
using namespace std;
#include "BreadthFirstSearch.h"

BreadthFirstSearch::BreadthFirstSearch(){


}
void BreadthFirstSearch::Set_Array(vector<pair<int,int>> arr){

    array.resize(arr.size()+3);
    for(int i=0 ; i<arr.size() ; i++){
        array[arr[i].first].push_back(arr[i].second);
        //array[arr[i].second].push_back(arr[i].first);
    }
}
vector<vector<int>> BreadthFirstSearch::Get_Graph(){

    return array;
}
void BreadthFirstSearch::Disply_Graph(){

    cout<<"Following is Breadth First Traversal :";
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
    cout<<"\n";
}
void BreadthFirstSearch::Path_From_Node_A_To_B(int NodeA , int NodeB){


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
void BreadthFirstSearch::ShortestPath_From_Node_A_To_B(int NodeA , int NodeB){
    bool valid = false;
    queue<int>q;
    vector<bool>vis(array.size()+3 , false);
    vector<int>dist(array.size()+3 , -1);
    q.push(NodeA);
    while(!q.empty()){
        int parient = q.front();
        q.pop();
        vis[parient]=true;
        for(auto child:array[parient]){
            if(!vis[child]){
                vis[child]=true;
                dist[child]=parient;
                q.push(child);
                if(child == NodeB){
                    valid=true;
                    break;
                }
            }
        }
    }
    vector<int>path;
    if(valid){
        int temp=NodeB;
        path.push_back(NodeB);
        while(dist[temp]!=-1){
            path.push_back(dist[temp]);
            temp=dist[temp];
        }
        cout << "Shortest path length is : "<< path.size()-1;
        cout << "\nPath is:: ";
        for (int i = path.size() - 1; i >= 0; i--)
            cout << path[i] << " ";
        cout<<"\n";
    }
    else{
        cout << "Given source and destination are not connected"<<"\n";
    }
}


