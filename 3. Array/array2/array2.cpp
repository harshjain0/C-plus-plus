#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> arr;

    // int ans=(sizeof(arr)/(sizeof(int)));
    // cout<<ans<<endl;

    // cout<<arr.size()<<endl;
    // cout<<arr.capacity()<<endl;

    // arr.push_back(5);
    // arr.push_back(6);

    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<endl;
    // }
    // cout<<endl;

    vector<int> brr(10,5);
    cout<<"Size of brr "<<brr.size()<<endl;
    cout<<"Capacity of brr "<<brr.capacity()<<endl;

    // for(int i=0;i<brr.size();i++){
    //     cout<<brr[i]<<endl;
    // }
    // cout<<endl;

    // int n;
    // cin>>n;
    // vector<int> crr(n,-101);
    // vector<int> drr{10,23,23};

    // cout<<" vector drr is empty or not "<<drr.empty()<<endl;


    return 0;
}