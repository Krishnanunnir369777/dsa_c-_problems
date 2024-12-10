#include<iostream>
using namespace std;
#include <bits/stdc++.h>

int getsum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}





int main(){




    char ch='q';
    cout<<sizeof(ch)<<endl;



    char *c=&ch;
    cout<<sizeof(c)<<endl;


    int* arr1=new int[5]; // craete an array of size 5


    int n;
    cin>>n;
    //variable size array 
    int* arr=new int[n];


    //taking input an array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=getsum(arr,n);

    cout<<"answer is "<<ans<<endl;

    



}

