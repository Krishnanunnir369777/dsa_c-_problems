#include <iostream>
using namespace std;
#include <bits/stdc++.h>

string func(string& s1,string& s2){

    auto loc=s1.find('1');
    if(loc!=string::npos){
        s1=s1.substr(loc);
    }
    loc=s2.find('1');
    if(loc!=string::npos){
        s2=s2.substr(loc);
    }
    int n=s1.length();
    int m=s2.length();
    if(m>n){
        swap(s1,s2);
        swap(n,m);
    }
    int j=m-1;
    int carry=0;

    for(int i=n-1;i>=0;i--){

        int bit1=s1[i]-'0';
        int sum=bit1+carry;

        if(j>=0){
            int bit2=s2[j]-'0';
            sum+=bit2;
            j--;
        }
        int bit=sum%2;
        carry=sum/2;

        s1[i]=(char)(bit+'0');
    }
    if(carry>0){
        s1='1'+s1;
    }
    return s1;

}

int main(){


    string s1="1101";
    string s2="111";

    cout<<func(s1,s2);

}