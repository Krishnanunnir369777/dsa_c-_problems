#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main(){
    stack<string> s;
    s.push("love");
    s.push("baber");
    s.push("kumar");
     
    cout<<"top element "<<s.top()<<endl;
    
    s.pop();
    cout<<"top element "<<s.top()<<endl;

    cout<<"size is "<<s.size()<<endl;

}