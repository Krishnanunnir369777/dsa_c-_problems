#include <iostream>
using namespace std;
int first_occurence(int arr[],int n,int k ){
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
    int even[5]={1,2,3,3,5};
    cout<<first_occurence(even,5,3)<<endl;
    cout<<last_occurence(even,5,3)<<endl;

}