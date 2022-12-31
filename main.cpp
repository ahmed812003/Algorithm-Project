#include <bits/stdc++.h>
using namespace std;
#include "InsertionSort.h"
#include "MergeSort.h"
#include "BinarySearch.h"
#include "BreadthFirstSearch.h"
#include "HeapSort.h"
#include "SelectionSort.h"
#include "LinearSearch.h"

void MainMenu (){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<"Desktop Application For Sorting And Searching Algorithms \n";
    cout<<" 1 - Sorting Algorithms \n";
    cout<<" 2 - Searching Algorithms \n";
    cout<<"Enter Your Choice [1-2] \n";
    cout<<"--------------------------------------------------"<<"\n";
}

void SortingMenu (){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<" 1- Insertion Sort \n";
    cout<<" 2- Heap Sort \n";
    cout<<" 3- Merge Sort \n";
    cout<<" 4- Selection sort \n";
    //cout<<" 5- Quick sort \n";
    cout<<"Enter Your Choice [1-4] \n";
    cout<<"--------------------------------------------------"<<"\n";
}

void SearchingMenu (){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<" 1- Binary search \n";
    cout<<" 2- Linear search \n";
    cout<<" 3- Breadth First Search \n";
    cout<<"Enter Your Choice [1-3] \n";
    cout<<"--------------------------------------------------"<<"\n";
}

void AskForArraySize () {
    cout<<"--------------------------------------------------"<<"\n";
    cout<<" Please Enter Your Array Size \n";
    cout<<"--------------------------------------------------"<<"\n";
}

void AskForArray () {
    cout<<"--------------------------------------------------"<<"\n";
    cout<<" Please Enter Your Array \n";
    cout<<"--------------------------------------------------"<<"\n";
}

void OutputMessage (){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<" Your Array After Applying Your Sort Algorithm \n";
    cout<<"--------------------------------------------------"<<"\n";
}

void AskForTarget () {
    cout<<"--------------------------------------------------"<<"\n";
    cout<<" Please Enter Your Target \n";
    cout<<"--------------------------------------------------"<<"\n";
}

void FoundBinarySearchTarget (int target){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<" Your Target in Index : " << target <<"\n";
    cout<<"--------------------------------------------------"<<"\n";
}

void NotFoundBinarySearchTarget (){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<" Your Target Can not found in the Array \n";
    cout<<"--------------------------------------------------"<<"\n";
}

void AskForNumberOfNodes (){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<" Please Enter Number of Connected Nodes \n";
    cout<<"--------------------------------------------------"<<"\n";

}

void AskForNodes (){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<" Please Enter Connected Nodes as Node A and Node B\n";
    cout<<" When You Enter A then B it is mean that A is connected to B \n";
    cout<<"--------------------------------------------------"<<"\n";
}

void GraphMenu (){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<" 1- Display Graph \n";
    cout<<" 2- Path From Node A To B \n";
    cout<<" 3- ShortestPath From Node A To B \n";
    cout<<"Enter Your Choice [1-3] \n";
    cout<<"--------------------------------------------------"<<"\n";

}

void AskForTwoNodes(){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<"Please Enter Node A then B \n";
    cout<<"--------------------------------------------------"<<"\n";
}

void BackToSortMenu (){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<"1- Back to Main Menu \n";
    cout<<"2- Close Program \n";
    cout<<"3- Back to Sort Menu \n";
    cout<<"Enter Your Choice [1-3] \n";
    cout<<"--------------------------------------------------"<<"\n";

}

void BackToSearchMenu (){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<"1- Back to Main Menu \n";
    cout<<"2- Close Program \n";
    cout<<"3- Back to Search Menu \n";
    cout<<"Enter Your Choice [1-3] \n";
    cout<<"--------------------------------------------------"<<"\n";

}

void BackToGraphMenu (){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<"1- Back to Main Menu \n";
    cout<<"2- Close Program \n";
    cout<<"3- Back to Graph Menu \n";
    cout<<"4- Back to Search Menu \n";
    cout<<"Enter Your Choice [1-4] \n";
    cout<<"--------------------------------------------------"<<"\n";
}

int main()
{
    bool DoWork =true;
    while(DoWork){
        MainMenu();
        int choice;
        cin>>choice;
        if(choice==1){
            sortMenu:
            SortingMenu();
            cin>>choice;
            int n;
            AskForArraySize();
            cin>>n;
            vector<int>a(n);
            AskForArray();
            for(int i=0 ; i<n ; i++){
                cin>>a[i];
            }

            if(choice==1){
                InsertionSort s;
                s.Set_Array(a);
                s.Insertion();
                OutputMessage();
                s.Disply();
            }
            else if(choice==2){
                HeapSort h;
                h.Set_Array(a);
                h.Heap();
                OutputMessage();
                h.Display();
            }
            else if(choice==3){
                MergeSort m;
                m.Set_Array(a);
                m.Merge();
                OutputMessage();
                m.Disply();
            }
            else if(choice==4){
                SelectionSort s;
                s.Set_Array(a);
                s.Selection();
                OutputMessage();
                s.Display();
            }
            BackToSortMenu ();
            cin>>choice;
            if(choice==3)
                goto sortMenu;
            else if(choice==2)
                DoWork=false;
        }
        else{
            search:
            SearchingMenu();
            cin>>choice;
            if(choice==1){
                int n;
                AskForArraySize();
                cin>>n;
                vector<int>a(n);
                AskForArray();
                for(int i=0 ; i<n ; i++){
                    cin>>a[i];
                }
                sort(a.begin() , a.end());
                int target;
                AskForTarget();
                cin>>target;
                BinarySearch b;
                b.Set_Array(a);
                int idx = b.Search(target);
                if(idx){
                    FoundBinarySearchTarget(idx);
                }
                else{
                    NotFoundBinarySearchTarget();
                }

            }
            else if(choice==2){
                int n;
                AskForArraySize();
                cin>>n;
                vector<int>a(n);
                AskForArray();
                for(int i=0 ; i<n ; i++){
                    cin>>a[i];
                }
                int target;
                AskForTarget();
                cin>>target;
                LinearSearch l;
                l.Set_Array(a);
                int idx = l.Search(target);
                if(idx){
                    FoundBinarySearchTarget(idx);
                }
                else{
                    NotFoundBinarySearchTarget();
                }
            }
            else {
                AskForNumberOfNodes();
                int n;
                cin>>n;
                AskForNodes();
                vector<pair<int,int>>a(n);
                for(int i=0 ; i<n ; i++){
                    cin>>a[i].first >> a[i].second;
                }
                BreadthFirstSearch p;
                p.Set_Array(a);
                graph:
                GraphMenu();
                cin>>choice;
                if(choice==1){
                    p.Disply_Graph();
                }
                else if(choice==2){
                    int a,b;
                    AskForTwoNodes();
                    cin>>a>>b;
                    p.Path_From_Node_A_To_B(a,b);
                }
                else{
                    int a,b;
                    AskForTwoNodes();
                    cin>>a>>b;
                    p.ShortestPath_From_Node_A_To_B(a,b);
                }
                BackToGraphMenu();
                cin>>choice;
                if(choice==3)
                    goto graph;
                else if(choice==2){
                    DoWork=false;
                }
                else if(choice == 4){
                    goto search;
                }
            }
            BackToSearchMenu ();
            cin>>choice;
            if(choice==3)
                goto search;
            else if(choice==2){
                DoWork=false;
            }
        }
    }
    return 0;
}
