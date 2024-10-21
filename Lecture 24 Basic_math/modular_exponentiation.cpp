#include<iostream>
using namespace  std;

int modular_func(int x,int n,int m){
    int res=1;
    while(n>0){
        if(n&1){
            res=(1LL*(res)*(x)%m)%m;
        }
        x=(1LL*(x)%m*(x)%m)%m;
        n=n>>1;
    }
    return res;
}
int main(){
    int x,n,m;
    cin>>x>>n>>m;
    cout<<modular_func(x,n,m);
}