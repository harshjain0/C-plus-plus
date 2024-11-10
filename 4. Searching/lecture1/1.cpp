//Time compexity---->O(logn)
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int binarysearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    //mid=(start+end)/2--->integer overflow
    int mid=start+(end-start)/2;
    while(start<=end){
        int element=arr[mid];
        if(element==target){
            return mid;
        }
        else if(target<element){
            //search in left
            end =mid-1;
        }
        else{
            //search in right
            start=mid+1;
        }
        //updating mid-->yaad rkhna bhul jaega
        mid=start+(end-start)/2;
    }
    //element not found
    return -1; 
}
int main(){
    int arr[]={2,4,6,8,10,12,16};
    int size=7;
    int target=4;
    int indexoftarget=binarysearch(arr,size,target);
    if(indexoftarget==-1){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"Found at "<<indexoftarget<<" index"<<endl;
    }
}


// int main(){
//     vector<int>v{1,2,3,4,5,6};
//     int arr[]={1,2,3,4,5,6};
//     int size=6;

//     // if(binary_search(v.begin(),v.end(),38)){
//     if(binary_search(arr,arr+size,38)){
//         cout<<"Found"<<endl;
//     }
//     else{
//         cout<<"Not found"<<endl;
//     }
// }
