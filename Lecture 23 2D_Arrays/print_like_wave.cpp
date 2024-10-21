#include <iostream>
using namespace std;
void print_wave_func(int arr[][3]){
    for(int col=0;col<3;col++){
        if(col&1){
            //odd Index --->Bottom to top
            for(int row=2;row>=0;row--){
                cout<<arr[row][col]<<" ";
            }
        }
        else{
            //even index ---> Top to bottom
            for(int row=0;row<3;row++){
                cout<<arr[row][col]<<" ";
            }
        }
    }
}


int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    print_wave_func(arr);

}
