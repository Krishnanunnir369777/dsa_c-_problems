#include <iostream>
using namespace std;


bool search_element(int arr[][4],int target){
    int row=4;
    int col=4;
    int row_index=0;
    int col_index=3;

    while(row_index<row && col_index>=0){
        int element=arr[row_index][col_index];

        if(element==target){
            return 1;
        }
        if(element<target){
            row_index++;
        }
        else{
            col_index--;
        }
    }
    return 0;
}
int main(){
    int arr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    int target=26;
    if(search_element(arr,target)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}