#include <iostream>
using namespace std;

//time complexity O(log(m*n))
bool binary_search(int arr[][2],int target){
    int row=2;
    int col=2;
    int start=0;
    int end=row*col-1;
    int mid=start+(end-start)/2;
    while(start<end){
        int element=arr[mid/col][mid%col];
        if(element==target){
            return 1;
        }
        if(element<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return 0;
}
int main(){
    int arr[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;
    if(binary_search(arr,target)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    
}