#include <iostream>
using namespace std;
#include <vector>
void print_spiral(int arr[][3]){
    int row=3;
    int col=3;
    int count =0;
    int total=9;
//index initialization
    int startingRow=0;
    int startingCol=0;
    int endingCol=2;
    int endingRow=2;
    while(count<total){
        //starting row
        for(int index=startingCol;count<total && index<=endingCol ;index++){
            cout<<arr[startingRow][index]<<" ";
            count++;
        }
        startingRow++;
        //ending column
        for(int index=startingRow;count<total && index<=endingRow;index++){
            cout<<arr[index][endingCol]<<" ";
            count++;
        }
        endingCol++;
        //ending row
        for(int index=endingCol; count<total && index>=startingCol;index-- ){
            cout<<arr[endingRow][index];
            count++;
        }
        endingRow++;
        //starting column
        for(int index=endingRow;count<total && index>=startingRow;index++){
            cout<<arr[index][startingCol];
            count++;
        }
        startingRow++;
    }
}

int main(){
    int arr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    print_spiral(arr);
    


}