#include<iostream>
#include<vector>
using namespace std;
int findPivot(vector<int>arr){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(s==e){
            //case of completely sorted array
            return s;
        }
        if(mid+1<e && arr[mid]>arr[mid+1])
            return mid;
        if(mid-1>=s && arr[mid-1]>arr[mid])
            return mid-1;

        if(arr[s]>arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    vector<int>arr{3,4,5,8,2,1};
    int ans=findPivot(arr);
    cout<<"Pivot Element is: "<<arr[ans]<<endl;
    return 0;
}