#include <iostream>
using namespace std;

int main(){
    int num=5;
    
    // address operator
    cout<<"address of num is "<<&num<<endl;

    //pointer craetion
    int *ptr=&num;
    cout<<"value is "<<*ptr<<endl;
    cout<<ptr<<endl;
    


    double d=4.3;
    double *p=&d;
    cout<<"address of d "<<p<<endl;
    cout<<*p<<endl;


    int *q=0;
    q=&num;
    cout<<q<<endl;

    //copying a pointer
    int *r=ptr;
    cout<<ptr<<" "<<q<<endl;
    cout<<*ptr<<" "<<*q<<endl;

    

}