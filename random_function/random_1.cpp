
#include <iostream>
#include <bits/stdc++.h>
using namespace std;




int main(){
    int n=5;
    int *p=&n;
    int **a=&p;
    cout<<&p<<endl;
    cout<<a<<endl;
}