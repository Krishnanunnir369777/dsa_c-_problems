#include <iostream>
using namespace std;


int main(){
    int i=5;
    int *p=&i;
    cout<<"printing p "<<p<<endl;
    cout<<"address of p "<<&p<<endl;

    int **p2=&p;
    cout<<"address of p from p2  "<<p2<<endl;
    cout<<"address of i from p2 "<<*p2<<endl;
    
    cout<<"value of i from p2 "<<**p2<<endl;
    *p=*p+1;
    cout<<p<<endl;
    cout<<**p2<<endl;



}