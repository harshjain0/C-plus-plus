#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    vector<int> arr{1,3,3,4,5,6};
    vector<int> brr{3,3,4};

    vector<int> ans;
    for(int i=0;i<arr.size();i++){
         for(int j=0;j<brr.size();j++){
            if(arr[i]==brr[j]){
                //mark for duplicate element in both arrays
                brr[j]=INT_MIN;
                ans.push_back(arr[i]);
            }
         }
    }

    for(auto value:ans){
        cout<<value<<" ";
    }
}