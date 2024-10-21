#include <iostream>
using namespace std;
#include <vector>

int my_count_func(int n){//complexity is O(log(n*2))
    int count=0;
    if(n>=3){
        count=count+1;
    }
    for(int i=2;i<n;i++){
        int cnt=0;
        for(int j=2;j<i;j++){
            if((i%j)==0){
                cnt=0;
                break;
            }
            else{
                cnt=1;
            }
        }
        if(cnt==1){
            count+=1;
        }
    }
    return count;
}
int optimised_function(int n){  //complexity O(n*log(log(n)))
    vector<bool> name(n+1,true);
    int cnt=0;
    name[0]=name[1]=0;
    for(int i=2;i<n;i++){
        if(name[i]){
            cnt++;
        }
        for(int j=2*i;j<n;j=j+i){
            name[j]=0;
        }
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    cout<<optimised_function(n);
}