
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> findmajority(vector<int> &arr){
    int n = arr.size();
    vector<int> res;

    for (int i = 0; i < n; i++) {
        
        // Count the frequency of arr[i]
        int cnt = 0;
        for (int j = i; j < n; j++) {
            if (arr[j] == arr[i])
                cnt += 1;
        }
      
        // Check if arr[i] is a majority element
        if (cnt > (n / 3)) {
          
            // Add arr[i] only if it is not already
            // present in the result
            if (res.size() == 0 || arr[i] != res[0]) {
                res.push_back(arr[i]);
            }
        }
      
        // If we have found two majority elements, 
        // we can stop our search
        if (res.size() == 2) {
            if(res[0] > res[1])
                swap(res[0], res[1]);
            break;
        }
    }

    return res;
}


int main(){
    vector<int> arr={2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6};
    vector<int> ans=findmajority(arr);   
    for (int ele : ans)
        cout << ele << " ";


    return 0;
}