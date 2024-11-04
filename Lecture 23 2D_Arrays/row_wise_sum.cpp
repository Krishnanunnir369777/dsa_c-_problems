#include<iostream>
using namespace std;
void print_sum(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
  
}
int largestRowSum(int arr[][3],int row,int col){
    int maxi=INT_MIN;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum+=arr[row][col];

        }
        if(sum>maxi){
            maxi=sum;
        }
    }
    return maxi;
}
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    print_sum(arr,3,3);
}