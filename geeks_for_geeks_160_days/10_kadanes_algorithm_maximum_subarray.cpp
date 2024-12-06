#include<iostream>
using namespace std;
#include <bits/stdc++.h>


int func1(vector <int> &arr){ //O(n2)
    int n=arr.size();
    int ans=-1000000;
    for(int i=0;i<n;i++){
         int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];

            ans=max(ans,sum);
        }
        
    }
    return ans;
}

int func2(vector <int> &arr){
    

}

int main(){

    vector<int>arr={2, 3, -8, 7, -1, 2, 3};

    int ans= func(arr);
    cout<<ans;


}