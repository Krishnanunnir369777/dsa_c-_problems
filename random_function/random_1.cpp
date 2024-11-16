
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int second_largest_element(vector<int> &arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());

    for(int i=n-2;i>=0;i--){
        if(arr[i]!=arr[n-1]){
            return arr[i];
        }

    }
    return -1;

}

int main(){
    //int arr[3]={3,2,1};
    //int n=3;
    //cout<<(largest_element(arr,n));
    vector<int> arr={10,5,10};
    cout<<second_largest_element(arr);
    
    //cout<<arr.at();
    
}