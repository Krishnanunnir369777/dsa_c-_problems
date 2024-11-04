#include<iostream>
using namespace std;


int main(){
    int arr[3][4];

    //row wise input
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    //print
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int arr1[3][3]={1,2,3,4,5,6,7,8,9};
    int arr2[3][3]={{1,11,111},{2,22,222},{3,33,333}};
    
    
}