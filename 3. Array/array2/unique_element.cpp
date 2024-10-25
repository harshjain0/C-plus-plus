#include<iostream>
#include<vector>
using namespace std;
int Findunique(vector<int> arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter elements: "<<endl;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int unique=Findunique(arr);
    cout<<"Unique is: "<<unique<<endl;
}