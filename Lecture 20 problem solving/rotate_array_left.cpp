#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void rotate_array(vector<int> &arr,int d){   // O(n) Time and O(n) Space 
        int n = arr.size();

        // Handle case when d > n
        d %= n;
  
        // Storing rotated version of array
        vector<int> temp(n);

        // Copy last n - d elements to the front of temp
        for (int i = 0; i < n - d; i++)
            temp[i] = arr[d + i];

        // Copy the first d elements to the back of temp
        for (int i = 0; i < d; i++)
            temp[n - d + i] = arr[i];

        // Copying the elements of temp in arr
        // to get the final rotated vector
        for (int i = 0; i < n; i++)
            arr[i] = temp[i];
}

void rotateArr(vector<int>& arr, int d) {
    int n = arr.size();
  
    // Handle the case where d > size of array
    d %= n;
  
    // Reverse the first d elements
    reverse(arr.begin(), arr.begin() + d);

    // Reverse the remaining n-d elements
    reverse(arr.begin() + d, arr.end());
  
    // Reverse the entire array
    reverse(arr.begin(), arr.end());
}


int main(){

    vector<int> arr={1,2,3,4,5};
    int r=2;
    rotateArr(arr,r);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
}