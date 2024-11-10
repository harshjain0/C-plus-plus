#include<iostream>
using namespace std;
bool binary2d(int arr[][4],int rows,int cols, int target){
    int s=0;
    int e=rows*cols-1;
    int mid=s+(e-s)/2;
    
    while(s<=e){
        // i,j---->c*i+j---->as 2d matrix is stored linearly in memory
        int rowindex=mid/cols;
        int colindex=mid%cols;

        if(arr[rowindex][colindex]==target){
            cout<<"Found at "<<rowindex<<" "<<colindex<<" "<<endl;
            return true;
        }
        if(arr[rowindex][colindex]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return false;
}
int main(){
    int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int rows=5;
    int cols=4;
    int target=19;
    bool ans=binary2d(arr,rows,cols,target);
    
    if(ans){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}