#include <iostream>
using namespace std;
# include <vector>
int allocation(vector<int> arr,int n,int m){
    int s=0;
    int sum=0;
    int e=n-1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    
}

int allocation(int arr,int n){
    vector <int>arr;
    for(int i=0;i<n;i++){
        int right=right_sum(arr,n,i);
        int left=left_sum(arr,n,i);
        int maxi=max(right,left);
    }
}

int main(){
    int arr[4]={12, 34, 67, 90};
    int n=4;
}