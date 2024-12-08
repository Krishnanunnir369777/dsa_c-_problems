#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int factorial(int n ){
    int ans=1;

    // base case
    if(n==0){
        return 1;
    }

    
    


    return factorial(n-1)*n;
}
int main(){

    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans;



}