#include <iostream>
using namespace std;

int main(){
    int n=5;
    int *ptr=&n;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;


    int *q=0;
    q=&n;
    cout<<q<<endl;
    cout<<*q<<endl;





    int num=2;
    int *p=&num;
    cout<<"before "<<num<<endl;
    (*p)++;
    cout<<"after "<<num<<endl;







}