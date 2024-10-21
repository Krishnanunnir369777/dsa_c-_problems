#include <iostream>
using namespace std;
void fibanocci_func(int n){
    
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++){
        int next_num=a+b;
        cout<<next_num<<" ";
        a=b;
        b=next_num;
    }
    
}
int main(){
    int n;
    cin>>n;
    fibanocci_func(n);
}