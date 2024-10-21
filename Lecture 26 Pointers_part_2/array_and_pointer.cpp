#include <iostream>
using namespace std;


int main(){
    int arr[10]={2,7,3,6};
    cout<<"address of 0Th location "<<arr<<endl;
    cout<<"address of 0Th location "<<&arr[0]<<endl;
    cout<<*arr<<endl;
   
    cout<<*(arr+1)<<endl;

    cout<<"-------------"<<endl;
    int i=3;
    cout<<i[arr]<<endl;//note this 
    
    cout<<"-------------"<<endl;
    int *p=arr;
    cout<<*p<<endl;
    
    cout<<"-------------"<<endl;
    int temp[10]={1,2};
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl;
    cout<<sizeof(&temp)<<endl;



    cout<<"-------------"<<endl;
    int a[10]={1,2};
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<&a[0]<<endl;
    int *b=&a[0];
    cout<<b<<endl;
    cout<<&b<<endl;




    int z[10]={0};

    cout<<z<<endl;
    // z=z+1; erroe will come 
    int *ptr=z;
    ptr=ptr+1;
    cout<<ptr<<endl;




}