#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter no of rows"<<endl;
    cin>>n1;
    cout<<"Enter no of cols"<<endl;
    cin>>n2;
    for(int i=0;i<n1;i++){
        if(i==0 || i==n1-1){
            for(int j=0;j<n2;j++){
                cout<<"* ";
            }
        }
        else{
            cout<<"* ";
            for(int j=0;j<n2+1;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

}