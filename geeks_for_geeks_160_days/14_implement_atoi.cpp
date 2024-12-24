#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int func(char* s){
    int index=0;
    int ans=0;
    int sign=1;

    // Ignore leading whitespaces
    while(s[index]==' '){
        index++;
    }

    // Store the sign of number
    if(s[index]=='+' || s[index]=='-'){
        if(s[index++]=='-'){
            sign=-1;
        }
    }

    // Construct the number digit by digit
    
    while(s[index]>'0' && s[index]<'9'){

        // handling overflow/underflow test case

        if(ans>INT_MAX/10 ||(ans==INT_MAX/10 && s[index]-'0'>7)){
            return sign== 1 ? INT_MAX:INT_MIN;
        }
        
        // Append current digit to the result

        ans=10*ans+(s[index++]-'0');
    }
    return ans*sign;
    
    
}



int main(){
    char s[]=" 123";
    
    cout<<func(s);



    return 0;
}
