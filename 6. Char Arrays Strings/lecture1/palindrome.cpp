#include<iostream>
#include<string.h>
using namespace std;
bool palindrome(char name[]){
    int i=0;
    int j=strlen(name)-1;
    while(i<=j){
        if(name[i]!=name[j]){
            return false;
        }
        else{
            return true;
            i++;
            j--;
        }
    }
    return true;
}
int main(){
    char name[100];
    cin.getline(name,100);
    if(palindrome(name)){
        cout<<"Yes "<<name<<" is palindrome."<<endl;
    }
    else{
         cout<<"No "<<name<<" is not a palindrome."<<endl;
    }
}