#include<iostream>
using namespace std;
void  reverse_string(char ch[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(ch[s++],ch[e--]);
    }

}
int length_str(char ch[]){
    int count =0;
    for(int i=0;ch[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char ch[20];
    cin>>ch;
    int n=length_str(ch);
    reverse_string(ch,n);
    cout<<ch;



}