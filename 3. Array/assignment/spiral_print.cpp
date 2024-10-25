#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralprint(vector<vector<int>>&v){
    vector<int>ans;
    int m=v.size();//2d array mein total row ka formula
    int n=v[0].size();//2d array mein total col ka formula
    int total_elements=m*n;
    int count=0;

    int startrow=0;
    int endcol=n-1;
    int endrow=m-1;
    int startcol=0;

    while(count<total_elements){
        //startrow
        for(int i=startcol;i<=endcol && count<=total_elements;i++){
            ans.push_back(v[startrow][i]);
            count++;
        }
        startrow++;

        //endcol
        for(int i=startrow;i<=endrow && count<total_elements;i++){
            ans.push_back(v[i][endcol]);
            count++;
        }
        endcol--;

        //endrow
        for(int i=endcol;i>=startcol && count<total_elements;i--){
            ans.push_back(v[endrow][i]);
            count++;
        }
        endrow--;

        //startcol
        for(int i=endrow;i>=startrow && count<total_elements;i--){
            ans.push_back(v[i][startcol]);
            count++;
        }
        startcol++;
    }
    for(int v:ans){
        cout<<v<<" ";
    }
}
int main(){
    vector<vector<int>> v{{1,2,3},{4,5,6},{7,8,9}};
    spiralprint(v);
}