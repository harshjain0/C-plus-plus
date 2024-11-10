#include<iostream>
using namespace std;
int solve(int divident,int divisor){
    int s=0;
    int e=abs(divident);
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(abs(mid*divisor)==divident){
            return divident;
        }
        if(abs(mid*divisor)>divident){
            e=mid-1;
        }
        if(abs(mid*divisor)<divident){
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }

    if((divisor<0 && divident<0) || (divisor>0 && divident>0)){
        return ans;
    }
    else{
        return -ans;
    }
}
int main(){
    int divident=-1;
    int divisor=1;
    int ans=solve(divident,divisor);
    cout<<"Result is: "<<ans<<endl;
}