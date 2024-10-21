#include<iostream>
using namespace std;
void move_zeros(int arr[],int n,int ans[]){
    int k=0;
    for (int i=0;i<n;i++){
        if(arr[i]!=0){
            ans[k]=arr[i];
            k++;
        }
    }

}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={0,0,2,0,9};
    int n=5;
    int ans[5]={0};
    move_zeros(arr,n,ans);
    print(ans,n);
    return 0;
}