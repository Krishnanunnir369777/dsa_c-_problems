#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int func1(vector<int> &arr){ //O(n*n) naive approach

    int n=arr.size();
    int res=-10000000;
    
    for(int i=0;i<n;i++){
        int prod=1;
        for(int j=i;j<n;j++){
            prod=prod*arr[j];

            res=max(prod,res);
        }

    }
    return res;
}

int func2(vector<int> &arr) { //[Expected Approach 1] Using minimum and maximum product ending at any index – O(n) Time and O(1) Space
      int n = arr.size();
  
    // max product ending at the current index
    int currMax = arr[0];

    // min product ending at the current index
    int currMin = arr[0];

    // Initialize overall max product
    int maxProd = arr[0];
  
    // Iterate through the array 
    for (int i = 1; i < n; i++) {
          
          // Temporary variable to store the maximum product ending 
          // at the current index
        int temp = max({ arr[i], arr[i] * currMax,
                                            arr[i] * currMin });
        
          // Update the minimum product ending at the current index
          currMin = min({ arr[i], arr[i] * currMax,
                                            arr[i] * currMin });
      
          // Update the maximum product ending at the current index
        currMax = temp;
      
          // Update the overall maximum product
        maxProd = max(maxProd, currMax);
    }
    return maxProd;

}


int func3(vector<int> &arr) {
      int n = arr.size();
    int maxProd = INT_MIN;
  
    // leftToRight to store product from left to Right
    int leftToRight = 1;
  
    // rightToLeft to store product from right to left
    int rightToLeft = 1;
  
    for (int i = 0; i < n; i++) {
        if (leftToRight == 0)
            leftToRight = 1;
        if (rightToLeft == 0)
            rightToLeft = 1;
      
        // calculate product from index left to right
        leftToRight *= arr[i];
      
        // calculate product from index right to left
        int j = n - i - 1;
        rightToLeft *= arr[j];
        maxProd = max({leftToRight, rightToLeft, maxProd});
    }
    return maxProd;
}

int main(){


    vector<int> arr={2, 3, 4};
    int ans=func1(arr);
    cout<<ans;

    
}