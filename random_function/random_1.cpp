#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>

using namespace std;

int solve_game(int n, int k, const vector<int>& arr) {
    // Try each index as the first player's choice
    for (int i = 0; i < n; i++) {
        // Assume this index is a winning move
        bool win = true;
        
        // Check against all other indices
        for (int j = 0; j < n; j++) {
            // Skip the same index
            if (i == j) continue;
            
            // If ALL indices make the difference divisible by k, 
            // then this is not a winning move
            if (abs(arr[i] - arr[j]) % k == 0) {
                win = false;
                break;
            }
        }
        
        // If win is still true, this is a winning index
        if (win) {
            return i + 1;  // 1-indexed
        }
    }
    
    // If no winning index found
    return -1;
}

int main() {
    // Read number of test cases
    int t;
    cin >> t;
    
    // Process each test case
    while (t--) {
        // Read n and k
        int n, k;
        cin >> n >> k;
        
        // Read the array
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        // Solve the game
        int result = solve_game(n, k, arr);
        
        // Print the result
        if (result == -1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << result << endl;
        }
    }
    
    return 0;
}