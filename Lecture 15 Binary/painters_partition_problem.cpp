#include <iostream>
using namespace std;
bool ispossible(int arr[],int n,int k,int mid ){
    int count=1;
    int board_length_sum=0;

    for(int i=0;i<n;i++){
        if(board_length_sum+arr[i]<=mid){
            board_length_sum+=arr[i];
        }
        else{
            count++;
            if(cout >k || arr[i]>mid){
                return false;
            }
            board_length_sum=arr[i];
        }
    }
    return true;
}
int allocate(int arr[],int n,int k){
    int sum=0;
    int s=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(ispossible(arr,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int main(){
    int arr[6]={2, 1, 5, 6, 2, 3};
    int n=6;
    int k=2;
    int ans=allocate(arr,n,k);
    cout<<ans;
}