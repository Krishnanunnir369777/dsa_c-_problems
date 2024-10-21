#include <iostream>
using namespace std;
char to_lower_case(char ch){
    if((ch >='a' && ch <='z') || (ch>='0' && ch<='9')){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

int main(){
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
       s[i]= to_lower_case(s[i]);
    }
    cout<<s[1];

}