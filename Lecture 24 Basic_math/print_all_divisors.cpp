#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <cmath>

int* func1(int n,int &size){ O(n)
    // Allocate memory for
    // the array of divisors
    int *divisors=new int[n];
 // Initialize the count of divisors
    int count=0;

    for(int i=1;i<=n;i++){
        if(n%i==0){
      // Add the divisor to the array
            divisors[count++]=i;
        }
    }
     // Update the size parameter
    // with the count of divisors
    size=count;
    // Return the array of divisors
    return divisors;
}



vector<int> findDivisors(int n) { // Time Complexity: O(sqrt(N))
                                  // Space Complexity : O(2*sqrt(N))
    // Initialize an empty
    // vector to store the divisors
    vector<int> divisors; 

    // Iterate up to the square
    // root of n to find divisors
    // Calculate the square root of n
    int sqrtN = sqrt(n); 
    
    // Loop from 1 to the
    // square root of n
    for (int i = 1; i <= sqrtN; ++i) { 
        // Check if i divides n
        // without leaving a remainder
        if (n % i == 0) { 
            // Add divisor i to the list
            divisors.push_back(i); 

            // Add the counterpart divisor
            // if it's different from i
            if (i != n / i) {
                // Add the counterpart
                // divisor to the list
                divisors.push_back(n / i); 
            }
        }
    }
    
    // Return the list of divisors
    return divisors; 
}

int main(){

    int number=12;
    int size;
    int *divisors=func1(number,size);
    for(int i=0;i<size;i++){
        cout<<divisors[i]<<" ";
    }
    cout<<endl;
    

    delete[] divisors;



}