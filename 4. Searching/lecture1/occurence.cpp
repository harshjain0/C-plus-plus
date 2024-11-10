#include<iostream>
#include<vector>
using namespace std;

int firstocc(vector<int> arr,int target){
    int s=0;
    int e= arr.size();
    int mid=s+(e-s)/2;//mid= [s/2+e/2]
    int ans=-1;

    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastocc(vector<int> arr,int key){
    int s=0;
    int e= arr.size();
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    vector<int> arr{1,2,3,3,3,3,4,4,4,5,5,5,6,6,8};
    int target=5;
    int key=5;

    cout<<"First occurence at "<<firstocc(arr,target)<<" index"<<endl;
    cout<<"Last occurence at "<<lastocc(arr,key)<<" index"<<endl;
    if(target==key){
        cout<<"Total occurence is: "<<lastocc(arr,key)-firstocc(arr,target)+1<<endl;
    }
}