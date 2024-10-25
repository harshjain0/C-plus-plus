#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{0,1,0,1,1,1,1,0,0,1,1,0};
    int start=0;
    int end=arr.size()-1;
    int i=0;
    while(start<=end){
        //i is increasing because no are added at begining but in else part
        //i is not increased because no are been removed from starting 
        //and are added at end so need of increasing i 
        if(arr[i]==0){
            swap(arr[start],arr[i]);
            start++;
            i++;
        }
        else{
            swap(arr[i],arr[end]);
            end--;
        }
    }

    for(auto value:arr){
        cout<<value<<" ";
    }
}