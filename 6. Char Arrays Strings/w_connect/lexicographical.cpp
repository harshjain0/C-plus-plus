#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
//cmp--->custom comperator
bool cmp(char first,char second){
    return first > second;
}
int main(){
    string s="garvit";
    //ascending order
    // sort(s.begin(),s.end());
    // cout<<s<<endl;

    //descending order
    sort(s.begin(),s.end(),cmp);
    cout<<s<<endl;
}