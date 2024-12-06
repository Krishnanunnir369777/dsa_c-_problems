#include <iostream>
using namespace std;
#include <bits/stdc++.h>



int main(){

    int row;
    cin>>row;
    int col;
    cin>>col;
// Step 1: Allocate memory for row pointers
    int** arr=new int*[row];
// Step 2: Allocate memory for each row
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }
//taking input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
// giving output
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

// releasing memory
    for(int i=0;i<row;i++){
        delete [] arr[i];
    }
    
    delete []arr;



}