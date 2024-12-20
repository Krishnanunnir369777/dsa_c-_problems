#include <iostream>
using namespace std;
#include <bits/stdc++.h>

bool func1(int n){ //time complexity is O(n)
                  // space complexity is O(1)
    if(n==1){
        return true;
    }
    if(n==2){
        return true;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
bool func2(int n){ //time complexity is O(sqrt(n))
                  // space complexity is O(1)
    if(n<=1){
        return false;
    }
    if(n==2){
        return true;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(func2(n)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}