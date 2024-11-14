#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr{10,1,7,6,14,9};
    int n=arr.size();
    for(int round=1;round<n;round++){
        int swapcount=0;//for optimizing T.C.
        for(int j=0;j<n-round;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapcount++;
            }
        }
        if(swapcount==0){
            break;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    // sort(arr.begin(),arr.end());
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }
}