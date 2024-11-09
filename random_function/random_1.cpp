
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool is_prime(int a){
    if(a<=1){
        return false;
    }
    for(int i=2;i<a;i++){
        if((a%i)==0){
            return false;
        }
    }
    return true;
}
int count_prime(int n){
    int sum=0;
    int ans=0;
    for(int i=1;i<n;i++){
        for(int j=2;j<i;j++){
            if((i%j)==0){
                ans=0;
                break;
            }
            else{
                ans=1;
            }
        }
        if(ans==1){
            sum+=1;
        }
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    
    cout<<count_prime(n);
    

    

    
    
}