#include  <iostream>
using namespace std;
#include <bits/stdc++.h>


 
int circularSubarraySum(vector<int> &arr) { //[Naive Approach] Considering all possible subarrays – O(n^2) Time and O(1) Space
    int n = arr.size();
    int res = arr[0];
    
    // Subarray that starts with index i
    for(int i = 0; i < n; i++) {
        int currSum = 0;
        
        // Considering all possible endpoints of the 
        // Subarray that begins with index i
        for(int j = 0; j < n; j++) {
            
            // Circular index
            int idx = (i + j) % n;
            currSum = currSum + arr[idx];            
            res = max(res, currSum);
        }
    }
    
    return res;
}
int circularSubarraySum(vector<int> &arr) {

    int totalSum = 0;
    int currMaxSum = 0, currMinSum = 0;
    int maxSum = arr[0], minSum = arr[0];

    for (int i = 0; i < arr.size(); i++) {

        // Kadane's to find maximum sum subarray
        currMaxSum = max(currMaxSum + arr[i], arr[i]);
        maxSum = max(maxSum, currMaxSum);

        // Kadane's to find minimum sum subarray
        currMinSum = min(currMinSum + arr[i], arr[i]);
        minSum = min(minSum, currMinSum);

        // Sum of all the elements of input array
        totalSum = totalSum + arr[i];
    }

    int normalSum = maxSum;
    int circularSum = totalSum - minSum;

    // If the minimum subarray is equal to total Sum
    // then we just need to return normalSum
    if (minSum == totalSum)
        return normalSum;

    return max(normalSum, circularSum);
}

int main(){

    vector<int> arr={10, -3, -4, 7, 6, 5, -4, -1};
    int ans=circularSubarraySum(arr);
    cout<<ans;
    
}