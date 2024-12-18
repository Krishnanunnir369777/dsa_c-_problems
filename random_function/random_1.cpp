#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;
#include <algorithm>


int main(){
    int arr[5]={4,3,5,2,3};
    sort(arr,arr+5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}