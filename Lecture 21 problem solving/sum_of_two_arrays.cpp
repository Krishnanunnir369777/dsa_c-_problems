#include<iostream>
using namespace std;
void sum_arr(int arr1[],int arr2[],int n, int m,int arr[]){
    int i=n-1;
    int j=m-1;
    int k=1;
    int carry=0;
    while(i>=0 && j>=0){
        int val1=arr1[i];
        int val2=arr2[j];
        int sum=val1+val2+carry;
        carry=sum/10;
        sum=sum%10;
        arr[n-k]=sum;
        k++;
        i--;
        j--;
    }
    while(i>=0){
        int sum=arr[i]+carry;
        carry=sum/10;
        sum=sum%10;
        arr[n-k]=sum;
        k++;
        i--;
    }
    while(j>=0){
        int sum=arr[j]+carry;
        carry=sum/10;
        sum=sum%10;
        arr[n-k]=sum;
        k++;
        j--;
    }

}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr1[3]={1,2,3};
    int arr2[2]={9,9};
    int n=3;
    int m=2;
    int arr[3]={0};
    sum_arr(arr1,arr2,n,m,arr);
    print(arr,n);
}