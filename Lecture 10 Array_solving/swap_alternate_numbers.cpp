#include <iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void swap_func(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if((i+1)<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
void my_func(int arr[],int n){
    int s=0;
    int e=1;
    for(int i=0;i<n;i++){
        if(e<n){
            swap(arr[s],arr[e]);
            s=s+2;
            e=e+2;
        }
        else{
            break;
        }
    }
   
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    swap_func(arr,6);
    //my_func(arr,6);
    printArray(arr,6);
    
}