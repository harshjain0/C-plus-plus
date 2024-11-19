#include<iostream>
#include<string.h>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int main(){
    vector<string> timePoints={"23:59","00:00"};
    vector<int>minute;
    for(int i=0;i<timePoints.size();i++){
        // string curr=timePoints[i];
        int hours=stoi(timePoints[i].substr(0,2));
        int minutes=stoi(timePoints[i].substr(3,2));
        long total_minutes=hours*60+minutes;
        minute.push_back(total_minutes);
    }
    
    sort(minute.begin(),minute.end());
    int n=minute.size();
    int mini=INT_MAX;
    for(int i=0;i<n-1;i++){
        int diff=minute[i+1]-minute[i];
        mini=min(diff,mini);
    }

    int lastdiff=(minute[0]+1440)-minute[n-1];
    mini=min(mini,lastdiff);

    cout<<mini<<endl;
    
}