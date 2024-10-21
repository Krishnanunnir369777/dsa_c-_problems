#include<iostream>
using namespace std;
string replace_func(string s,int n){
    string temp="";
    for(int i=0;i<n;i++){
        if(s[i]== ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(s[i]);
        }
    }
    return temp;
}
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    string temp;
    temp=replace_func(s,n);
    cout<<temp;
}