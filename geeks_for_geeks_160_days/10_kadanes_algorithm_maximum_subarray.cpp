#include<iostream>
using namespace std;
#include <bits/stdc++.h>


int func1(vector <int> &arr){ //O(n2)
    int n=arr.size();
    int ans=-1000000;
    for(int i=0;i<n;i++){
         int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];

            ans=max(ans,sum);
        }
        
    }
    return ans;
}

int maxSubarraySum(vector<int> &arr) {
    int res = arr[0];
    int maxEnding = arr[0];

    for (int i = 1; i < arr.size(); i++) {
      
        // Find the maximum sum ending at index i by either extending 
        // the maximum sum subarray ending at index i - 1 or by
        // starting a new subarray from index i
        maxEnding = max(maxEnding + arr[i], arr[i]);
      
        // Update res if maximum subarray sum ending at index i > res
        res = max(res, maxEnding);
    }
    return res;
}


int main(){

    vector<int>arr={2, 3, -8, 7, -1, 2, 3};

    int ans= func(arr);
    cout<<ans;


}