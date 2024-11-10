#include<iostream>
using namespace std;
int findsqrt(int n){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;
    
    while(s<=e){
        if(mid*mid==n){
            return mid;
        }
        if(mid*mid>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    int ans=findsqrt(n);
    // cout<<"Square root of "<<n<<" is "<<findsqrt(n)<<endl;

    int precision;
    cout<<"Enter no of floating digits: "<<endl;
    cin>>precision;

    double step=0.1;
    double finalans=ans;
    for(int i=0;i<precision;i++){
        for(double j=finalans;j*j<=n;j=j+step){
            finalans=j;
        }
        step=step/10;
    }
    cout<<"Square root is: "<<finalans<<endl;
}