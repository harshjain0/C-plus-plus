#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter no of steps"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
        int start=1;
        for(j=0;j<2*i+1;j++){
            if(i==0||i==n-1){
                if(j%2==0){
                    cout<<start;
                    start=start+1;
                }
                else{
                    cout<<" ";
                }
            }
            else{
                if(j==0){
                    cout<<1;
                }
                else if(j==2*i){
                    cout<<i+1;
                }
                else{
                    cout<<" ";
                }
            }
        }cout<<endl;
    }
}