#include<iostream>
using namespace std;
void prime_number(int n){
    if(n==1){
        cout<<"no";
    }
    int ans=0;
    for(int i=2;i<=n/2;i++){
        if((n%i)==0){
            ans=1;
            break;
        
        }
        else{
            ans=0;
        }
    }
    if(ans==0){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    
}
int main(){
    int n; 
    cin>>n;
    prime_number(n);
}