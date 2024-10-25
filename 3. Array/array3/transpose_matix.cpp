#include<iostream>
using namespace std;
void printArray(int arr[][3],int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void printTranspose(int arr[][3],int rows,int cols,int transposeArr[][3]){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            transposeArr[j][i]=arr[i][j];
        }
    }
}
int main(){
    int arr[3][3];
    int rows=3;
    int cols=3;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Printing Array: "<<endl;
    printArray(arr,rows,cols);
    int transposeArr[3][3];
    cout<<"Transpose of array is: "<<endl;
    printTranspose(arr,rows,cols,transposeArr);
    printArray(transposeArr,rows,cols);
    return 0;
} 
