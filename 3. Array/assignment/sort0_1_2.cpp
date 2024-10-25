#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{0,1,2,1,1,2,1,0,0,1,2,0};
    int start=0;
    int medium=0;
    int end=arr.size()-1;
    while(medium<=end){
        if(arr[medium]==0){
            swap(arr[start],arr[medium]);
            start++;
            medium++;
        }
        else if(arr[medium]==1){
            medium++;
        }
        else{
            swap(arr[medium],arr[end]);
            end--;
        }
    }

    for(auto value:arr){
        cout<<value<<" ";
    }
}