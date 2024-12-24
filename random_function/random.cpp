#include <iostream>
using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findOptimalY(int x) {
    for (int y = x / 2; y > 0; y--) {
        if (x % y == 0) {
            return y;
        }
    }
    return 1; // Fallback in case no divisor found
}

int main() {
    int n;
    cin>>n;
    vector<int> x;
    
}
