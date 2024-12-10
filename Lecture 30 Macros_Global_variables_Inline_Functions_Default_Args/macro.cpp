#include<iostream>
using namespace std;
#define PI 3.14 // object like macros
#define GREETING "hello world" // object like macros
#define SQUARE(x) ((x)*(x)) //function like macros


int main(){

    
    cout<<"pi "<<PI<<endl;
    cout<<"GREETING "<<GREETING<<endl;
    
    int n=2;
    cout<<"the square of n is "<<SQUARE(n)<<endl;

    


}