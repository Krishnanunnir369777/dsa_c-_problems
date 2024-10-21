#include <iostream>
using namespace std;
string reverse(string s1){
    int s=0;
    int n=s1.length();
    int e=n-1;
    while(s<=e){
        swap(s1[s++],s1[e--]);
    }
    return s1;
}
bool permut_func(string s1,string s2){
    if(s2.find(s1)<s2.length()){
        return true;  
    }
    reverse(s1);
    if(s2.find(s1)<s2.length()){
        return true;
    }
    else{
        return false;
    }

}
int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    cout<<permut_func(s1,s2);
}