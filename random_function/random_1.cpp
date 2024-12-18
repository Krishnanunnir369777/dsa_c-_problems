#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;
#include <algorithm>
int func(int a,int b){
    int maxi=0;
    int mini=0;
    int lcm=0;
    if(a>b){
        maxi=a;
    }
    else{
        mini=b;

    }

    for(int i=1;i<=mini;i++){
        if((i*maxi)%(mini)==0){
            lcm=i*maxi;
            break;
        }

    }
    return lcm;

}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<func(a,b);


    
}