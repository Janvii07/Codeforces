#include<iostream>
#include<algorithm>
#include<string>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
 
        int k=1;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]) k++;
        }
 
        int ans=k;
 
        for(int i=1;i<n-1;i++){
            int curr=k;
 
            if(s[i]!=s[i-1]) curr--;
            if(s[i]!=s[i+1]) curr--;
            if(s[i-1]!=s[i+1]) curr++;
 
            ans=min(ans,curr);
        }
 
        cout<<ans<<endl;
    }
 
}