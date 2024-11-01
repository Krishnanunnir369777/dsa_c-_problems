
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int check_palindrome(char name[],int n){
    int ans=1;
    int s=0;
    int e=n-1;
    while(s<e){
        if(name[s]!=name[e]){
            ans=0;
            break;
        }
        s++;
        e--;

    }
    return ans;

}
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i] !='\0';i++){//till get null character 
        count++;
    }
    return count;
}

int main(){
  
    char arr[]="krur";    // Only 5 characters
    int n=getlength(arr);
    if(check_palindrome(arr,n)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }


}