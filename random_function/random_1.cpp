#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;
int partition(int arr[],int s,int e){

    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot){
            cnt++;
        }
    }

    //place pivot at right position
    int pivotindex=s+cnt;
    swap(arr[s],arr[pivotindex]);
    //left and right
    int i=s,j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}
void quicksort(int arr[],int s,int e){

    //base case
    if(s>=e){
        return ;
    }
    int p=partition(arr,s,e);
    //right part
    quicksort(arr,s,p-1);
    //left part
    quicksort(arr,p+1,e);
}
    

int main(){
    int arr[5]={4,3,5,2,3};
    int n=5;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}