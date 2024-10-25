#include<iostream>
#include<cmath>
using namespace std;
int decimaltobinary(int n){
    while(n>0){
        int bit=n%2;
        cout<<bit;
        n=n/2;
    }
}
int binarytodecimal(int p){
    int decimal=0;
    int i=0;
    while(p){
        int bit=p%10;
        decimal=decimal+bit*pow(2,i++);
        p=p/10;
    }
    return decimal;
}
int main(){
    int n;
    cin>>n;
    int binary=decimaltobinary(n);
    cout<<endl;
    int p;
    cin>>p;
    int decimal=binarytodecimal(p);
    cout<<decimal;
}