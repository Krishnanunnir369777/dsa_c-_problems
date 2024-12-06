
#include <iostream>
#include <bits/stdc++.h>
using namespace std;




int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int a=0;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    for(int i :arr){
        cout<<i<<endl;
    }
}