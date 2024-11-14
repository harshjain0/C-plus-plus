#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{5,4,3,2,1,7};
    for(int i=0;i<arr.size()-1;i++){//last element tto sorted hi h tto usse pehle tk hi karenge sort
        int mini=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}