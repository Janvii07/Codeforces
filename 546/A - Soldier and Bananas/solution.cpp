#include<iostream>
using namespace std;
 
int main(){
    int k,n,w;
    cin>>k>>n>>w;
 
    int val=0;
    for(int i=1;i<w+1;i++){
        val+=k*i;
    }
 
    int ans=val-n;
    if(n>val) cout<<0<<endl;
    else{
        cout<<ans<<endl;
 
    }
 
    
 
 
}