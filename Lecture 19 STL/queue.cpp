#include <iostream>
using namespace std;
#include <bits/stdc++.h>


int main(){
    queue<string> q;
    q.push("one");
    q.push("two");
    q.push("three");


    cout<<"first element "<<q.front()<<endl;
    q.pop();
    cout<<"first element "<<q.front()<<endl;
    

    cout<<"size after pop "<<q.size();
}