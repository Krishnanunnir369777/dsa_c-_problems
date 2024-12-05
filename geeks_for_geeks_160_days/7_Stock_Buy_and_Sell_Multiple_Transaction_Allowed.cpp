#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int maximumProfit(vector<int>& prices) { //[Better Approach] Local Minima and Maxima – O(n) Time and O(1) Space
    int n = prices.size();
    int lMin = prices[0];  // Local Minima
    int lMax = prices[0];  // Local Maxima
    int res = 0;
  
    int i = 0;
    while (i < n - 1) {
      
        // Find local minima 
        while (i < n - 1 && prices[i] >= prices[i + 1]) { i++; }
        lMin = prices[i];
       
        // Local Maxima
        while (i < n - 1 && prices[i] <= prices[i + 1]) { i++; }
        lMax = prices[i];
      
        // Add current profit 
        res = res + (lMax - lMin);
    }
  
    return res;
}
int func(vector<int> &arr){ //[Expected Approach] Accumulate Profit – O(n) Time and O(1) Space
    int n=arr.size();
    int ans=0;
    // Keep on adding the difference between
    // adjacent when the prices a
    for(int i=0;i<(n-1);i++){
        
        if(arr[i+1]>arr[i]){
            ans+=arr[i+1]-arr[i];

        }
         
        
    }
    return ans;
}
int main(){
    vector<int> arr={4,2,2,4};
    int ans=maximumProfit(arr);
    //int ans=func(arr);
    cout<<ans;
}