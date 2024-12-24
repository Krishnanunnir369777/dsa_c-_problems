#include <iostream>
using namespace std;


class Hero{

    //properties

    public:
    int health;

    
    char level;

    void print(){
        cout<<level<<endl;
    }

    
};  // note this 

int main(){

    //creation of object
    Hero h1;

    //cout<<"size : "<<sizeof(h1)<<endl;

    h1.health=7;
    h1.level='a';

    cout<<"health is "<<h1.health<<endl;
    cout<<"level is "<<h1.level<<endl;
    
}