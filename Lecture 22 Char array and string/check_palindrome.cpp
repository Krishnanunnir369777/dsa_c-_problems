#include<iostream>
using namespace std;
bool check_palindrone(char ch[],int n){
    int ans=0;
    for(int i=0;i<n/2;i++){
        if(ch[i]==ch[n-1-i]){
            ans=1;
        }
        else{
            ans=0;
            break;
        }
    }
    if (ans==1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    char ch[20];
    cin>>ch;
    bool an=check_palindrone(ch,5);
    if(an){
        cout<<1;
    }
    else{
        cout<<0;
    }
}