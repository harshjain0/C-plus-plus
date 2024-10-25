#include<iostream>
#include<vector>
using namespace std;
int duplicate(vector<int> arr){
    int ans=-1;
    for(int i=0;i<arr.size();i++){
        int index=abs(arr[i]);
        if(arr[index]<0){
            ans=index;
            break;
        }
        arr[index] *=-1;
    }
    return ans;
}
int main(){
    vector<int> arr{1,4,1,3,2};
    cout<<duplicate(arr);
}