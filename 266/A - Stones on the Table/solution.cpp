#include<iostream>
#include<string>
#include<vector>
 
using namespace std;
 
int main(){
 
    int n;
    cin>>n;
 
    string s;
    cin>>s;
 
    int ans=0;
 
    for(int i=1;i<n;i+=2){
        if(s[i-1]==s[i]) ans++;
        if((s[i]==s[i+1] )&& (i+1)<n) ans++;
    }
    cout<<ans;
 
 
 
 
}