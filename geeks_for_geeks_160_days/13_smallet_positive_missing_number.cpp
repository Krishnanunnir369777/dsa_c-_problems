#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int func1(vector<int> &arr){ // [Naive approach] By Sorting – O(n*log n) Time and O(n) Space
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int res=1;
    
    for(int i=0;i<n;i++){
         // If we have found 'res' in the array,
        // 'res' is no longer missing, so increment it
        if(arr[i]==res){
            res++;
        }
        else if(arr[i]>res){
            break;

        }
    }
    return res;
}

int func2(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        // if arr[i] is within range [1, n] and arr[i] is
        // not placed at (arr[i]-1)th index in arr
        while(arr[i]>=1 && arr[i]<=n
              && arr[i]!=arr[arr[i]-1]){
                // If any number is not at its corresponding index 
                // then it is the missing number
                swap(arr[i],arr[arr[i]-1]);
       
              }

    }
    // If any number is not at its corresponding index 
    // then it is the missing number
    for(int i=1;i<=n;i++){
        if(i!=arr[i-1]){
            return i;
        }
    }
    // If all number from 1 to n are present 
    // then n + 1 is smallest missing number
    return n + 1;
}

int main(){

    vector<int> arr={2, -3, 4, 1, 1, 7};
    cout<<func1(arr);
    
}