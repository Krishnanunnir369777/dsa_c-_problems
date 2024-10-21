#include <iostream>
using namespace std;
#include <vector>
vector<int> findintersection(const vector<int>& A, const vector<int>& B){
    int i=0,j=0;
    vector <int> intersection;
    
    while(i<A.size() && j< B.size()){
        if (A[i]<B[j]){
            i++;
        }
        else if (A[i]>B[j]){
            j++;
        }
        else{
            intersection.push_back(A[i]);
            i++;
            j++;
        }
    }
    if(intersection.empty()){
        intersection.push_back(-1);
    }
    return intersection;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> A(n),B(m);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        // Input array B
        for (int i = 0; i < n; i++) {
            cin >> B[i];
        }
        vector <int> ans=findintersection(A,B);
        for (int i:ans){
            cout<<i<<" ";
        }
    }
}