#include<iostream>
using namespace std;
#include <bits/stdc++.h>

int main(){
   deque<int>d;
   d.push_back(1);
   d.push_front(2);
   
   for(int i:d){
    cout<<i<<endl;
   }

   //d.pop_back();
   //cout<<"after pop"<<" ";
   //for(int i:d){
    //cout<<i<<endl;
   //}

   cout<<"first index element "<<d.at(0)<<endl;
   cout<<d.front()<<endl;
   cout<<d.back()<<endl;
   cout<<d.size()<<endl;


}