#include<iostream>
using namespace std;
int main(){
   int n,k;
   cin>>n;
   cin>>k;
   cout<<(n|(1<<k));//bitwise OR
   return 0;
}