#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str="abbacca";
    string ans="";
    int i=0;
    while(i<str.length()){
        if(ans.length()>0 && ans[ans.length()-1]==str[i]){
            //checking if the last character in the ans is same as the new character coming
            ans.pop_back();
        }
        else{
            ans.push_back(str[i]);
        }
        i++;
    }
    cout<<ans<<endl;
}