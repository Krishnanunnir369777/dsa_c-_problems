#include <iostream>
using namespace std;

int main(){

    int num=5;
    int *ptr=&num;

    
    int *q=ptr;
    
    cout<<(ptr)<<" - "<<(q)<<endl;
    cout<<(*ptr)<<" - "<<*q<<endl;
    

    int i=3;
    int *t=&i;
    *t+=1;
    cout<<*t<<endl;
    cout<<"before t "<<t<<endl;
    t=t+1;
    cout<<"after t "<<t<<endl;
    
    
    

}