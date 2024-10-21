
#include<iostream>
using namespace std;
char max_func(string s,int nw){
    int n=0;
    char temp[26];
    for(int i=0;i<nw;i++){
        int m_temp=0;
        for(int j=0;j<nw;j++){
            if(s[i]==s[j]){
                m_temp++;
            }
            if(m_temp>n){
            n=m_temp;
            temp[0]=s[j];
            }
        }
        
    }
    return temp[0];
}
int main(){
    string s;
    cin>>s;
    int m=s.length();
    char ch=max_func(s,m);
    cout<<ch;

}

