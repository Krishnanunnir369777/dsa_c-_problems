#include<iostream>
using namespace std;

int main(){
    char name[20];
    cout<<"enter your name";    
    cin>>name;
    name[2]='\0';//cout will execute only till it get a null chaacter 
    cout<<name;//after 2 index won't execute
    
}