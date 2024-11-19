#include<iostream>
#include<string.h>
using namespace std;
void reversestring(char name[]){
    int i=0;
    int j=strlen(name)-1;
    while(i<=j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
}
int main(){
    char name[100];
    cin>>name;
    cout<<"Initially: "<<name<<endl;
    reversestring(name);
    cout<<"After reversal: "<<name<<endl;
}