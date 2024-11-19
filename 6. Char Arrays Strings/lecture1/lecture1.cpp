#include<iostream>
#include<string.h>
using namespace std;
// int main(){
    // char ch[100];
    // cout<<"Enter your name: "<<endl;
    // cin>>ch;
    // cout<<"Apka naam "<<ch<<" hai"<<endl;

    // char ch[100];
    // ch[0]='a';
    // ch[1]='b';
    // cin>>ch[2];
    // cout<<ch[0]<<ch[1]<<ch[2]<<endl;

    // char name[100];
    // cin>>name;
    // for(int i=0;i<7;i++){
    //     cout<<"Index: "<<i<<" value: "<<name[i]<<endl;
    // }
    // int value=(int)name[6];
    // cout<<"value is: "<<value<<endl;

    // char name[100];
    // // cin>>name;
    // cin.getline(name,100);
    // cout<<"Mera naam h: "<<name<<endl;
//}

int main(){
    // string str;
    // //cin>>str;---->only for single word
    // // getline(cin,str);
    // cin>>str;
    // cout<<"Length: "<<str.length()<<endl;
    // cout<<"isEmpty: "<<str.empty()<<endl;

    // str.push_back('g');
    // cout<<str<<endl;
    // str.pop_back();
    // cout<<str<<endl;

    // cout<<str.substr(0,3)<<endl;//---->important

    // string a="love";
    // string b="lover";
    // if(a.compare(b)==0){
    //     cout<<"a & b same"<<endl;
    // }
    // else{
    //     cout<<"a & b not same"<<endl;
    // }

    // string sentence="Ram ram Sarayane";
    // string target="ram";
    // cout<<sentence.find(target)<<endl;

    string gar="This is my first message";
    string word="second";
    gar.replace(11,5,word);
    cout<<gar<<endl;
    // gar.erase(11,7);
    // cout<<gar<<endl;
}