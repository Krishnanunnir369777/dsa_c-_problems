#include<iostream>
using namespace std;
#include <bits/stdc++.h>
void my_func(int arr[],int n){
    for(int i=0;i<n-1;i++){
        rot=0;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
                rot=1;
            }
            
        }
        if(rot==0){
            break;
        }

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }


}

void better_approach(vector<int> &arr){

    int count=0;

    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count++])
      }
    }
    
}


int main(){
    int arr[]={};
    int n=;



}