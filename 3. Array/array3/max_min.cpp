#include<iostream>
#include<limits.h>
using namespace std;
int findmaxi(int arr[][3],int row,int col){
    int maxi=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           if(arr[i][j]>maxi){
                maxi=arr[i][j];
           }
        }
    }
    return maxi;
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
    cout<<"Maximum no is: "<<findmaxi(arr,row,col)<<endl;
}