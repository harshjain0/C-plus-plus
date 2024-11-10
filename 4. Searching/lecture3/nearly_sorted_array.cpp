#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> arr,int target){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        else if(mid-1>=0 && arr[mid-1]==target){
            //agar mid 0th index pe hua
            return mid-1;
        }
        else if(mid+1<=arr.size() && arr[mid+1]==target){
            //agar mid last index pe hua
            return mid+1;
        }
        else if(arr[mid]<target){
            s=mid+2;
        }
        else{
            e=mid-2;
        }
        mid=s+(e-s)/2;
    }
    return -1;//agar nhi mila toh
}

int main(){
    vector<int> arr{10,3,40,20,50,80,70};
    int target=40;
    int ans=search(arr,target);
    cout<<"Index of "<<target<<" is "<<ans<<endl;
}