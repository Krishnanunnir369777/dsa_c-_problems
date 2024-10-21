#include<iostream>
using namespace std;
void sort_array(int arr[],int n){

    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
//optimized solution 
void sort_optimized(int arr[],int n){
    for(int i=1;i<n;i++){
        bool swapped=false;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped==false){
            break;
        }
    }


}
int main(){
    int arr[5]={5,4,3,2,1};
    int n=5;
    sort_optimized(arr,n);
    cout<<arr[4];


}

