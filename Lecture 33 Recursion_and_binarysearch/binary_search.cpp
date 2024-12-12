#include <iostream>
using namespace std;


bool func(int *arr,int s,int e,int k){

    // base case
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        return func(arr,mid+1,e,k);

    }
    else{
        return func(arr,s,mid-1,k);
    }
}




int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int k=8;
    cout<<func(arr,0,5,k);
}