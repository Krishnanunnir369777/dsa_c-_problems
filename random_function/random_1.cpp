
#include <iostream>
#include <bits/stdc++.h>
using namespace std;




int main(){
    int num=3;
    int *ans=&num;
    cout<<"adress of num "<<&num<<endl;
    cout<<"address "<<ans<<endl;
    cout<<"value of num "<<*ans<<endl;
    cout<<"adress of ans "<<&ans;

}