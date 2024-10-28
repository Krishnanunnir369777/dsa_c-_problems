#include<iostream>
using namespace std;
#include <bits/stdc++.h>

int main(){
    list<int>l;
    
    l.push_back(2);
    l.push_front(1);

    for(int i:l){
        cout<<i<<" ";

    }
    cout<<endl;
    cout<<"after erase"<<endl;
    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" ";

    }
    cout<<endl;
    cout<<"size "<<l.size();

    

}