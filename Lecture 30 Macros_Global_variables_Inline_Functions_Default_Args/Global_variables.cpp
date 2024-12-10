#include <iostream>
using namespace std;

int score=15;//global

void a(int& i){
    char ch ='a';//local variable
    
    cout<<score<<endl;
    //score+=1;

    cout<<i<<endl; 

}
void b(int& i){
    
    cout<<score<<endl;

    cout<<i<<endl;
}

int main(){

    int i=2;
    cout<<score<<endl;
    //score+=1;
    //cout<<score<<endl;
    a(i);
    b(i);

}