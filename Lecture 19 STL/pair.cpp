#include <iostream>
using namespace std;
#include <utility> // pair is contained inside this 

int main(){

    pair<int ,int> p={1,2};

    cout<<p.first<<" "<<p.second<<endl;

    pair<int ,pair<int,int>> p={1,{3,4}};

    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first

    pair<int,int> arr[]={{1,2},{3,4},{5,6}};

    cout<<arr[1].first;



}