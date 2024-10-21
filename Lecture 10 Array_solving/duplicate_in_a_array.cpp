#include <iostream>
using namespace std;
int duplicate(int arr[],int n){
    
    int ans=0;
    // xoring all array elements
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    
    // xoring [1,n-1]
    for(int i=1;i<n;i++){
        ans=ans^i;
    }
    return ans;

}
int main(){
    int arr[5]={1,2,3,4,4};
    int n=5;
    int num=duplicate(arr,n);
    cout<<num;

}