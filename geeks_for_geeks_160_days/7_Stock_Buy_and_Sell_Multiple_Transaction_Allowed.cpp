#include <iostream>
using namespace std;
#include <bits/stdc++.h>



int maxProfitRec(vector<int> &price, int start, int end) {
    int res = 0;
  
    // Consider every valid pair, find the profit with it
    // and recursively find profits on left and right of it
    for (int i = start; i < end; i++) {
        for (int j = i + 1; j <= end; j++) {
            if (price[j] > price[i]) {
                int curr = (price[j] - price[i]) + 
                            maxProfitRec(price, start, i - 1) + 
                              maxProfitRec(price, j + 1, end);
                res = max(res, curr);
            }
        }
    }
    return res;
}
// Wrapper function
int maximumProfit(vector<int> &prices) {
    return maxProfitRec(prices, 0, prices.size()-1);
}
int maximumProfit2(vector<int>&prices ){
    int n=prices.size();
    int lMin=prices[0];
    int lMax=prices[0];
    int res=0;
    int i=0;
    while(i<n-1){

        // Find local minima
        while(i<n-1 && prices[i]>=prices[i+1]){
            i++;

        }
        lMin=prices[i];

        // Local Maxima
        while(i<n-1 && prices[i]<=prices[i+1]){
            i++;
        }
        lMax=prices[i];
        res+=(lMax-lMin);
    }
    return res;

}

int maximumProfit3(const vector<int>& prices) {// most optimized 
    int res = 0;
    
    // Keep on adding the difference between
    // adjacent when the prices a
    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] > prices[i - 1]) 
            res += prices[i] - prices[i - 1];
    }
    
    return res;
}
int main() {
    vector<int> prices = {4,2,2,4};
    cout << maximumProfit(prices);
    return 0;
}