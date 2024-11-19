#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;

vector<string> duplicates(string str) {
    unordered_map<string,int>mp;
    int i=0;
    string temp="";
    while(i<str.length()){
        if(str[i]!=' '){
            temp+=str[i];
        }
        else{
            mp[temp]++;
            temp="";
        }
        if(i==str.length()-1){
            mp[temp]++;
            temp="";
        }
        i++;
    }

    vector<string>ans;
    for(auto it:mp){
        if(it.second>1){
            ans.push_back(it.first);
        }
    }
    return ans;
}

int main(){
    string str="car tamatar bade maze car tam tam bade"; 
    vector<string> answer= duplicates(str);
    for(auto it:answer){
        cout<<it<<" "<<endl;
    }
}