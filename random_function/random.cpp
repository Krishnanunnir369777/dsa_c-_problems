#include <iostream>
using namespace std;


int main(){

    int arr[3]={0,0,1};
    int n=3;
    int rot=0;
    for(int i=0;i<n-1;i++){
        rot=0;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
                rot=1;
            }
            
        }
        if(rot==0){
            break;
        }

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
