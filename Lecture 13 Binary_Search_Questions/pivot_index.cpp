#include <iostream>
using namespace std;
int right_part(int arr[],int n,int m){
    int s=m+1;
    int e=n-1;
    int right_sum=0;
    for(int i=s;i<n;i++){
        right_sum+=arr[i];
    }
    return right_sum;
}
int left_part(int arr[],int n,int m){
    int s=0;
    int e=m;
    int left_sum=0;
    for(int i=0;i<e;i++){
        left_sum+=arr[i];
    }
    return left_sum;

} 
int pivot_index(int arr[],int n){
    int s=0;
    int e=n-1;
    for(int i=0;i<n;i++){
        int left=left_part(arr,n,i);
        //cout<<left<<endl;
        int right=right_part(arr,n,i);
        //cout<<right<<endl;
        if(left==right){
            return i;
        }

    }
    return -1;
}

int main(){
    int arr[3]={2,1,-1};
    int n=3;
    int ans=pivot_index(arr,n);

    cout<<ans;

}