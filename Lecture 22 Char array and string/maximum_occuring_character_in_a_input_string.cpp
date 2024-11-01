
#include<iostream>
using namespace std;
// my 
char max_func(string s,int nw){
    int n=0;
    char temp[26];
    for(int i=0;i<nw;i++){
        int m_temp=0;
        for(int j=0;j<nw;j++){
            if(s[i]==s[j]){
                m_temp++;
            }
            if(m_temp>n){
            n=m_temp;
            temp[0]=s[j];
            }
        }
        
    }
    return temp[0];
}

char getMaxoccurcharacter(string s){
    int arr[26]={0};
    // create an array of count of characters
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;
        if(ch>='a' && ch <='z'){
            number=ch-'a';
        }
        else{
            number=ch-'A';
        }
        arr[number]++;
    }
    // find maximum occurenec charcter
    int maxi=-1,ans=0;
    for(int i=0;i<s.length();i++ ){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    char final_answer='a'+ans;
    return final_answer;

}
int main(){
    string s;
    cin>>s;
    int m=s.length();
    char ch=max_func(s,m);
    cout<<ch;

}

