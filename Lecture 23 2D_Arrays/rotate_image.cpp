#include <iostream>
using namespace std;
#include <bits/stdc++.h>

//2 Steps to rotate image
//Transpose the matrix
//Swap the columns


void rotate(vector<int>arr){
    int row=arr.size();

    for(int i=0;i<row;i++ ){
        for(int j=0;j<=i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<row;i++){
        reverse(arr[i].begin(),arr[i].end());
    }
}

int main(){

    vector<int>arr;

    rotate(arr);
    
    

}