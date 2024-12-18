#include <iostream>
using namespace std;
#include <bits/stdc++.h>

bool func(int n){ //O(n)
    vector<int> v;
    if(n<0){
        return false;
    }
    while(n>0){
        int digit=n%10;
        v.push_back(digit);
        n=n/10;
    }
    int s=0;
    int e=v.size()-1;
    while(s<e){
        if(v[s]!=v[e]){
            return false;

        }
        s++;
        e--;
    }
    return true;
}
bool func2(int n){//O(log(n))

    int ans=0;
    int revnum=n;
    while(n>0){
        int digit=n%10;
        ans=ans*10+digit;
        n=n/10;
    }
    if(ans==revnum){
        return true;

    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    if(func2(n)){
        cout<<1;
    }
    else{
        cout<<0;
    }
    
}