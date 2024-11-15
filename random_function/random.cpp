#include <iostream>
using namespace std;


int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9};
    cout<<"address of first memmory block "<<arr<<endl;
    cout<<"address of first memmory block "<<&arr[0]<<endl;
    cout<<"value at first address "<<*arr<<endl;
    cout<<"value at  of second "<<*(arr+1)<<endl;
    cout<<"address of second block "<<&arr[1]<<endl;
    cout<<(1[arr])<<endl;
    // arr=arr+1;    this gives 
    
}
