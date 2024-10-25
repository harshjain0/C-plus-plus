#include<iostream>
using namespace std;
bool findkey(int arr[][3],int row,int col,int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[3][3];
    int row=3;
    int col=3;
    int key=7;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    if(findkey(arr,row,col,key)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}