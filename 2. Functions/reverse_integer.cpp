#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    int rem=0;
    bool ifNeg=false;

    if(n<0){
        ifNeg=true;
        n=-n;
    }
    
    while(n>0){
        int digit=n%10;
        ans=ans*10+digit;
        n=n/10;
    }
    cout<< (ifNeg?-ans:ans);
}