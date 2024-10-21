#include <iostream>
using namespace std;


int peak_index(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<e){
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return -1;

}


int main(){
    int arr[4]={0,1,5,0};
    int n=4;
    int ans=peak_index(arr,n);
    cout<<ans;    
    
}