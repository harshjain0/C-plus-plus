#include<iostream>
#include<vector>
using namespace std;
int main(){
    // // last 2 arrow mein space aaega
    // vector<vector<int> > arr;
    // vector<int> a{1,2,3};
    // vector<int> b{4,5,6};
    // vector<int> c{7,8,9};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // for(int i=0;i<arr.size();i++){
    //     for(int j=0;j<arr[i].size();j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    int row=5;
    int col=5;
    vector<vector<int> > arr(row,vector<int>(col,10));
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<arr[2][3];
    
}