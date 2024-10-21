#include<iostream>
using namespace std;


long long int square_root(int n){
    int s=0;
    int e=n;
    long long mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        long long int square=mid*mid; //as we multiply here 
        if(square==n){
            return mid;
        }
        if(square<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
double morePrecision(int n ,int precision,int temp_sol){
    double factor=1;
    double ans=temp_sol;
    for(int i=0;i<precision;i++){
        factor=factor/10;

        for(double j=ans; j*j<n ;j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n=16;
    int temp_ans= square_root(37);
    int ans=morePrecision(37,3,temp_ans);
    cout<<ans;
    return ans;
}
