
#include <iostream>
#include <bits/stdc++.h>
using namespace std;




int main(){
    vector<int> arr={2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6};
    vector<int> ans=findmajority(arr);   
    for (int ele : ans)
        cout << ele << " ";


    return 0;
}