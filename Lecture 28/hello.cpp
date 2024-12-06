#include <iostream>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int& func(int a){// return by reference 

    int num=a;
    int& ans=num;

    return ans;
}
void normal_update(int n){
    n++;
}
void reference_variable_passing_update(int &n){
    n++;
}
int main()
{
    int i=2;

    //creating a reference variable
    
    int &j=i;

    cout<<i<<endl;
    cout<<j<<endl;
    i++;
    cout<<i<<endl;
    cout<<j<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;
    
   cout<<"before "<<i<<endl;
   normal_update(i);
   cout<<"after "<<i<<endl;
   cout<<"before "<<i<<endl;
   reference_variable_passing_update(i);
   cout<<"after "<<i<<endl;
   
   cout<<"before "<<i<<endl;
   int a=func(i);
   cout<<"after "<<a<<endl;


}