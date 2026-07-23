#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    int n;
    cin>>n;
 
    vector<int> v;
 
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    int k=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(v[i]<=v[i+1]){
            k++;
            ans=max(k,ans);
        }else{
            ans=max(k+1,ans);
            k=0;
        }
        
 
    }
    cout<<ans;
}