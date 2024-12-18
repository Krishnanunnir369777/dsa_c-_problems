#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    vector<int> a;
    vector<int> v(5,1);
    vector<int> last(v);//copy vector v in last
    cout<<a.capacity()<<endl;
    a.push_back(1);
    cout<<a.capacity()<<endl;
    a.push_back(2);
    cout<<a.capacity()<<endl;
    a.push_back(3);
    cout<<a.capacity()<<endl;
    a.push_back(4);
    cout<<a.capacity()<<endl;
    a.push_back(5);

    cout<<"capacity"<<" "<<a.capacity()<<endl;
    cout<<"size"<<" "<<a.size()<<endl;

    cout<<a.at(1)<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    
    
    cout<<"before pop"<<endl;
    for(int i:a){
        cout<<i<<endl;

    }
    a.pop_back();
    cout<<"after pop"<<endl;
    for(int i:a){
        cout<<i<<endl;

    }
    cout<<"-------------------"<<endl;
    for(auto i=a.begin();i!=a.end();i++){
        cout<<*i<<" "<<endl;
    }
    //cout<<a.begin()<<endl;
    for(auto i:a){
        cout<<i<<" ";
    }
  
}