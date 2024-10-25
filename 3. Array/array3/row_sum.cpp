#include<iostream>
using namespace std;
void printsum(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        cout<<"Sum is "<<endl;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
}
int main(){
    int arr[3][3];
    int row=3;
    int col=3;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    // cout<<"Printing row-wise"<<endl;
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    printsum(arr,row,col);
    return 0;
}