#include<iostream>
using namespace std;

void rotate_array(int arr[],int n,int k,int arr1[]){
    for(int i=0;i<n;i++){
        arr1[(i+k)%n]=arr[i];

    }
    
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int n=7;
    int k=3;
    int arr1[n]={0};
    rotate_array(arr,n,k,arr1);
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<endl;
    }
    

}