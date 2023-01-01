#include <bits/stdc++.h>
using namespace std;
#include "InsertionSort.h"
#include "MergeSort.h"
#include "BinarySearch.h"
#include "BreadthFirstSearch.h"
#include "HeapSort.h"
#include "SelectionSort.h"
#include "LinearSearch.h"
#include "Painter.h"
#include "DepthFirstSearch.h"

int main()
{
    Painter paint;
    bool DoWork =true;
    while(DoWork){
        paint.MainMenu();
        int choice;
        cin>>choice;
        if(choice==1){
            sortMenu:
            paint.SortingMenu();
            cin>>choice;
            int n;
            paint.AskForArraySize();
            cin>>n;
            vector<int>a(n);
            paint.AskForArray();
            for(int i=0 ; i<n ; i++){
                cin>>a[i];
            }

            if(choice==1){
                InsertionSort s;
                s.Set_Array(a);
                s.Insertion();
                paint.OutputMessage();
                s.Disply();
            }
            else if(choice==2){
                HeapSort h;
                h.Set_Array(a);
                h.Heap();
                paint.OutputMessage();
                h.Display();
            }
            else if(choice==3){
                MergeSort m;
                m.Set_Array(a);
                m.Merge();
                paint.OutputMessage();
                m.Disply();
            }
            else if(choice==4){
                SelectionSort s;
                s.Set_Array(a);
                s.Selection();
                paint.OutputMessage();
                s.Display();
            }
            paint.BackToSortMenu ();
            cin>>choice;
            if(choice==3)
                goto sortMenu;
            else if(choice==2)
                DoWork=false;
        }
        else{
            bool valid = false;
            search:
            paint.SearchingMenu();
            cin>>choice;
            if(choice==1){
                int n;
                paint.AskForArraySize();
                cin>>n;
                vector<int>a(n);
                paint.AskForArray();
                for(int i=0 ; i<n ; i++){
                    cin>>a[i];
                }
                sort(a.begin() , a.end());
                int target;
                paint.AskForTarget();
                cin>>target;
                BinarySearch b;
                b.Set_Array(a);
                int idx = b.Search(target);
                if(idx){
                    paint.FoundBinarySearchTarget(idx);
                }
                else{
                    paint.NotFoundBinarySearchTarget();
                }
            }
            else if(choice==2){
                int n;
                paint.AskForArraySize();
                cin>>n;
                vector<int>a(n);
                paint.AskForArray();
                for(int i=0 ; i<n ; i++){
                    cin>>a[i];
                }
                int target;
                paint.AskForTarget();
                cin>>target;
                LinearSearch l;
                l.Set_Array(a);
                int idx = l.Search(target);
                if(idx){
                    paint.FoundBinarySearchTarget(idx);
                }
                else{
                    paint.NotFoundBinarySearchTarget();
                }
            }
            else if(choice==3) {
                paint.AskForNumberOfNodes();
                int n;
                cin>>n;
                paint.AskForNodes();
                vector<pair<int,int>>a(n);
                for(int i=0 ; i<n ; i++){
                    cin>>a[i].first >> a[i].second;
                }
                BreadthFirstSearch p;
                p.Set_Array(a);
                graph:
                paint.GraphMenu();
                cin>>choice;
                if(choice==1){
                    p.Disply_Graph();
                }
                else if(choice==2){
                    int a,b;
                    paint.AskForTwoNodes();
                    cin>>a>>b;
                    p.Path_From_Node_A_To_B(a,b);
                }
                else{
                    int a,b;
                    paint.AskForTwoNodes();
                    cin>>a>>b;
                    p.ShortestPath_From_Node_A_To_B(a,b);
                }
                paint.BackToGraphMenu();
                cin>>choice;
                if(choice==3)
                    goto graph;
                else if(choice==2){
                    DoWork=false;
                }
                else if(choice == 4){
                    goto search;
                }
                valid=true;
            }
            else {
                paint.AskForNumberOfNodes();
                int n;
                cin>>n;
                paint.AskForNodes();
                vector<pair<int,int>>a(n);
                for(int i=0 ; i<n ; i++){
                    cin>>a[i].first >> a[i].second;
                }
                DepthFirstSearch p;
                p.Set_Array(a);
                graph1:
                paint.GraphMenu();
                cin>>choice;
                if(choice==1){
                    p.Disply_Graph();
                }
                else if(choice==2){
                    int a,b;
                    paint.AskForTwoNodes();
                    cin>>a>>b;
                    p.Path_From_Node_A_To_B(a,b);
                }
                else{
                    int a,b;
                    paint.AskForTwoNodes();
                    cin>>a>>b;
                    p.ShortestPath_From_Node_A_To_B(a,b);
                }
                paint.BackToGraphMenu();
                cin>>choice;
                if(choice==3)
                    goto graph1;
                else if(choice==2){
                    DoWork=false;
                }
                else if(choice == 4){
                    goto search;
                }
                valid=true;
            }
            if(!valid){
                paint.BackToSearchMenu ();
                cin>>choice;
                if(choice==3)
                    goto search;
                else if(choice==2){
                    DoWork=false;
                }
            }
        }
    }
    return 0;
}
