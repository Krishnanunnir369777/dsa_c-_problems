#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";
    
    cout<<arr<<endl;

    cout<<ch<<endl; // for character array ch prints entire array but for integer array it gives address
    
    char *c=&ch[0];
    //print entire string
    cout<<c<<endl;
    

    /*char temp='z';
    char *p=&temp;

    cout<<p<<endl;
    */
    char temp='z';
    char *p=&temp;
    cout<<p;

}