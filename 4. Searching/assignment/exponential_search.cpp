#include<iostream>
using namespace std;
int bs(int arr[],int start,int end,int x){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==x)
            return mid;
        if(arr[mid]<=x)
            {
                start=mid+1;
            }
        else{
            end=mid-1;
        }
    }
}
int es(int arr[],int x,int n){
    if(arr[0]==x)
        return 0;
    int i=1;
    while(arr[i]<=x && i<n){
        i=i*2;
    }
    return bs(arr,i/2,min(i,n-1),x);
}
int main(){
    int arr[]={3,4,5,6,11,13,14,15,56,70};
    int n=sizeof(arr)/sizeof(int);
    int x=13;
    int ans=es(arr,x,n);
    cout<<ans<<endl;
}