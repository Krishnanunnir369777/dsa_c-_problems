#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main(){
    set<int> s; // sorted and unique

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(1);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;

    set<int>::iterator it=s.begin();
    it++;
    
    s.erase(it);
    for(auto i:s){
        cout<<i<<endl;

    }
    cout<<endl;
    cout<<"-5 is present or not "<<s.count(-5)<<endl;
    

    set<int>::iterator itr=s.find(5);// gives location of 5 if that present

   for(auto it=itr;it!=s.end();it++){
    cout<<*it<<" ";
    }

    
}