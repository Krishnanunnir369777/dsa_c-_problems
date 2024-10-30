#include <iostream>
using namespace std;
#include <bits/stdc++.h>


int main(){
    map<int,string> m;
    m[1]="kru";
    m[2]="mru";
    m[13]="pru";
    
    m.insert({5,"ram"} );

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;

    }

    cout<<"finding 13---> "<<m.count(13)<<endl;
    

    cout<<"after erase "<<endl;
    for()

}