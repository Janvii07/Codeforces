#include<iostream>
#include<string>
using namespace std;
 
int main(){
    string n;
    cin>>n;
 
    int ans=0;
    for(int i=0;i<n.length();i++) {
        if(n[i] == '4' || n[i] == '7') {
            ans++;
        }
    }
    if(ans==4 || ans==7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO";
    }
}