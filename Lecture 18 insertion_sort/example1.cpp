#include<iostream>
using namespace std;
void sort_array(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

int main(){
    int arr[5]={5,4,3,2,1};
    int n=5;
    sort_array(arr,n);
    cout<<arr[0];




}