#include <bits/stdc++.h>
using namespace std;
#include "Painter.h"

Painter::Painter(){

}

void Painter::MainMenu (){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<"Desktop Application For Sorting And Searching Algorithms \n";
    cout<<" 1 - Sorting Algorithms \n";
    cout<<" 2 - Searching Algorithms \n";
    cout<<"Enter Your Choice [1-2] \n";
    cout<<"--------------------------------------------------"<<"\n";
}

void Painter::SortingMenu (){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<" 1- Insertion Sort \n";
    cout<<" 2- Heap Sort \n";
    cout<<" 3- Merge Sort \n";
    cout<<" 4- Selection sort \n";
    cout<<"Enter Your Choice [1-4] \n";
    cout<<"--------------------------------------------------"<<"\n";
}

void Painter::SearchingMenu (){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<" 1- Binary search \n";
    cout<<" 2- Linear search \n";
    cout<<" 3- Breadth First Search \n";
    cout<<"Enter Your Choice [1-3] \n";
    cout<<"--------------------------------------------------"<<"\n";
}

void Painter::AskForArraySize () {
    cout<<"--------------------------------------------------"<<"\n";
    cout<<" Please Enter Your Array Size \n";
    cout<<"--------------------------------------------------"<<"\n";
}

void Painter::AskForArray () {
    cout<<"--------------------------------------------------"<<"\n";
    cout<<" Please Enter Your Array \n";
    cout<<"--------------------------------------------------"<<"\n";
}

void Painter::OutputMessage (){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<" Your Array After Applying Your Sort Algorithm \n";
    cout<<"--------------------------------------------------"<<"\n";
}

void Painter::AskForTarget () {
    cout<<"--------------------------------------------------"<<"\n";
    cout<<" Please Enter Your Target \n";
    cout<<"--------------------------------------------------"<<"\n";
}

void Painter::FoundBinarySearchTarget (int target){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<" Your Target in Index : " << target <<"\n";
    cout<<"--------------------------------------------------"<<"\n";
}

void Painter::NotFoundBinarySearchTarget (){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<" Your Target Can not found in the Array \n";
    cout<<"--------------------------------------------------"<<"\n";
}

void Painter::AskForNumberOfNodes (){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<" Please Enter Number of Connected Nodes \n";
    cout<<"--------------------------------------------------"<<"\n";

}

void Painter::AskForNodes (){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<" Please Enter Connected Nodes as Node A and Node B\n";
    cout<<" When You Enter A then B it is mean that A is connected to B \n";
    cout<<"--------------------------------------------------"<<"\n";
}

void Painter::GraphMenu (){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<" 1- Display Graph \n";
    cout<<" 2- Path From Node A To B \n";
    cout<<" 3- ShortestPath From Node A To B \n";
    cout<<"Enter Your Choice [1-3] \n";
    cout<<"--------------------------------------------------"<<"\n";

}

void Painter::AskForTwoNodes(){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<"Please Enter Node A then B \n";
    cout<<"--------------------------------------------------"<<"\n";
}

void Painter::BackToSortMenu (){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<"1- Back to Main Menu \n";
    cout<<"2- Close Program \n";
    cout<<"3- Back to Sort Menu \n";
    cout<<"Enter Your Choice [1-3] \n";
    cout<<"--------------------------------------------------"<<"\n";

}

void Painter::BackToSearchMenu (){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<"1- Back to Main Menu \n";
    cout<<"2- Close Program \n";
    cout<<"3- Back to Search Menu \n";
    cout<<"Enter Your Choice [1-3] \n";
    cout<<"--------------------------------------------------"<<"\n";

}

void Painter::BackToGraphMenu (){
    cout<<"--------------------------------------------------"<<"\n";
    cout<<"1- Back to Main Menu \n";
    cout<<"2- Close Program \n";
    cout<<"3- Back to Graph Menu \n";
    cout<<"4- Back to Search Menu \n";
    cout<<"Enter Your Choice [1-4] \n";
    cout<<"--------------------------------------------------"<<"\n";
}

