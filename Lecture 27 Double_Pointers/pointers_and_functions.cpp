#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void update(int **p2){
   // p=p+1; // no change
    //cout<<"inside "<<p<<endl;

    *p2=*p2+1; //changed


    //**p=**p+1;

}
int main(){
    int i=3;
    int *p=&i;
    int **p2=&p;
    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<p2<<endl;
    update(p2);
    cout<<"after "<<i<<endl;
    cout<<"after "<<p<<endl;
    cout<<"after "<<p2<<endl; 

}