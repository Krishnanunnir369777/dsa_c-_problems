#include <iostream>
using namespace std;

void print(int *p){

    cout<<*p<<endl;


}
void update_address(int *p){
    p=p+1;
    cout<<p<<endl;
}
void update_value(int *p){
    *p=*p+1;

}
int get_Sum(int arr[],int n){ // here arr is not entire array it is just a pointer 
    int ans=0;
    cout<<"size of array "<<sizeof(arr)<<endl;
    for(int i=0;i<n;i++){
        ans+=arr[i];
    }
    return ans;
}

int main(){
    

    int value=5;
    int *p=&value;
    
    /*cout<<*p<<endl;
    //print(p);
   
    //update_address(p);
    update_value(p);

    cout<<*p<<endl;

*/
    int arr[5]={1,2,3,4,5};

    cout<<(get_Sum(arr,5))<<endl;
    cout<<(get_Sum(arr+2,3));
    
    return 0;
}