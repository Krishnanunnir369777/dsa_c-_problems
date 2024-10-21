#include <iostream>
using namespace std;


void reverse_array(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s=s+1;
        e=e-1;
    }
}

int main(){
    int arr[4]={1,2,3,4};
    int size=4;
    reverse_array(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}