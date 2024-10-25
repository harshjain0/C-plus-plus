#include<iostream>
#include<limits.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int row,col; 
    cout<<"Enter the size of the row: ";
    cin>>row;
    cout<<"Enter the size of the col: ";
    cin>>col;

    int arr[row*col]; 
    cout<<"Enter the elements of the matrix: ";
    for(int i=0; i<row*col; i++) {
        cin>>arr[i];
    }

    int maxRowSum = INT_MIN, maxColSum = INT_MIN;

    for(int i=0; i<row; i++){
        int rowSum=0, colSum=0;
        for(int j=0; j<col; j++) {
            rowSum += arr[i*row + j]; 
            colSum += arr[j*col + i]; 
        }
        if(rowSum > maxRowSum){
            maxRowSum = rowSum;
        }
        if(colSum > maxColSum){
            maxColSum = colSum;
        }
    }

    cout<<"Maximum row sum: "<<maxRowSum<< endl;
    cout<<"Maximum column sum: "<<maxColSum<< endl;

    return 0;


    // //1D vector into 2D vector
    // int m=3;
    // int n=2;
    // vector<int> original={1,7,9,8,2,4};
    // vector<vector<int>> ans(m,vector<int>(n));

    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         ans[i][j]=original[i*n+j];
    //     }
    // }
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}
