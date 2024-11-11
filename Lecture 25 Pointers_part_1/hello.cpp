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
    cout<<"address of pointer "<<&ptr<<endl;
    


    double d=4.3;
    double *p=&d;
    cout<<"address of d "<<p<<endl;
    cout<<*p<<endl;



    cout<<"size of integer is "<<sizeof(num)<<endl;
    cout<<"size of pointer is "<<sizeof(ptr)<<endl;


    int *q=0;
    q=&num;
    cout<<q<<endl;

    //copying a pointer
    int *r=ptr;
    cout<<ptr<<" "<<q<<endl;
    cout<<*ptr<<" "<<*q<<endl;

    

}