#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s; 
    string part;
    cin>>part;
    cout<<s.find(part)<<endl;
    cout<<s.erase(s.find(part),part.length());
}