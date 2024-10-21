#include <iostream>
using namespace std;
int first_occurence(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<k){
            s=mid+1;

        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int last_occurence(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<k){
            s=mid+1;

        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int main(){
    int even[6]={2,4,5,6,6,6};
    int n=6;
    int first=first_occurence(even,n,6);
    int last=last_occurence(even,n,6);
    int ans=(last-first)+1;
    cout<<ans;
}