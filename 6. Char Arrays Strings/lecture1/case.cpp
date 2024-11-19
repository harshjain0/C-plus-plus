#include<iostream>
#include<string.h>
using namespace std;
void uppercase(char arr[]){
    int n=strlen(arr);
    for(int i=0;i<n;i++){
        arr[i]=arr[i]-'a'+'A';//-32
    }
}
void lowercase(char brr[]){
    int n=strlen(brr);
    for(int i=0;i<n;i++){
        brr[i]=brr[i]-'A'+'a';//+32
    }
}
int main(){
    char arr[100];
    cin>>arr;
    char brr[100];
    cin>>brr;
    uppercase(arr);
    cout<<arr<<endl;
    lowercase(brr);
    cout<<brr<<endl;
}