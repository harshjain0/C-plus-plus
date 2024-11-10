#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossibleSol(vector<int>cooksRank,int np,int mid){
  int currp=0;
  for(int i=0;i<cooksRank.size();i++){
    int r=cooksRank[i],j=1;
    int timeTaken=0;

    while(true){
      if(timeTaken + j*r<= mid){
        currp++;
        timeTaken += j*r;
        j++;
      }
      else{
        break;
      }
    }
    if(currp >= np){
      return true;
    }
  }
  return false;
}
int timeReq(vector<int>cooksRank,int np){
  int start=0;
  int end=*max_element(cooksRank.begin(),cooksRank.end())*(np*(np+1)/2);
  int ans=-1;

  while(start<=end){
    int mid=(start+end)>>1;
    if(isPossibleSol(cooksRank,np,mid)){
      ans=mid;
      end=mid-1;
    }
    else{
      start=mid+1;
    }
  }
  return ans;
}

int main() {
  int t;cin>>t;
  while(t--){
    int np,nc;
    cin>>np>>nc;
    vector<int> cooksRank;
    while(nc--){
      int r;
      cin>>r;
      cooksRank.push_back(r);
    }
    cout<<timeReq(cooksRank,np)<<endl;
  }
  return 0;
}