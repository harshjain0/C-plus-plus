// #include<iostream>
// using namespace std;
// void printnum(int num){
//     cout<<num<<endl;
// }
// int main(){
//     int a=5;
//     printnum(a);
//     return 0;
// }


#include<iostream>
using namespace std;
int total(int x,int y){
    int result;
    result=x+y;
    return result;
}
int max(int p,int q){
    if(p>q){
        return p;
    }
    else{
        return q;
    }
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int sum=total(a,b);
    cout<<sum<<endl;
    cout<<"Max no is: "<<max(a,b);
    return 0;
}