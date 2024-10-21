#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int sum=0;
        int product=1;
        while(n>0){
            int last_digit=n%10;
            sum=sum+last_digit;
            product=product*last_digit;
            n=n/10;
        }
        int answer=product-sum;
        cout<<answer;
    }

    

}