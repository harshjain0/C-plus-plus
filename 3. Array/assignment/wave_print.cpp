#include<iostream>
#include<vector>
using namespace std;
void waveprint(vector<vector<int>>v){
    int m=v.size();//2d array mein total row ka formula
    int n=v[0].size();//2d array mein total col ka formula
    for(int startcol=0;startcol<n;startcol++){
        //even no of col --->top to bottom
        if((startcol & 1)==0){
            for(int i=0;i<m;i++){
                cout<<v[i][startcol]<<" ";
            }
        }
        else{
            //odd no of col--->bottom to top
            for(int i=m-1;i>=0;i--){
                cout<<v[i][startcol]<<" ";
            }
        }
    }
}
int main(){
    vector<vector<int>> v{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    waveprint(v);
}