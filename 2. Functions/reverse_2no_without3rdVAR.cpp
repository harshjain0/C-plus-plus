#include<iostream>
using namespace std;
void swap(int x, int y){
    // x=x+y;
    // y=x-y;
    // x=x-y;
    x=x^y;
    y=x^y;
    x=x^y;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
}

int main(){
    int x=21;
    int y=13;
    swap(x,y);
}