#include <iostream>
using namespace std;

int find_unique(int arr[],int n){
    
    int ans=0;

    for(int i=0;i<n;i++){
        ans=ans^arr[i];
       
    }

    return ans;
}

int main(){
    int arr[5]={1,2,6,2,1};
    int n=5;
    cout<<(find_unique(arr,n));
}