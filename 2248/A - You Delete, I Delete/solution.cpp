#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
 
string eraseChar(string s,int pos){
    s.erase(s.begin()+pos);
    return s;
}
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        string s;
        cin>>s;
 
        string ans="";
        bool first=true;
 
        for(int i=0;i<s.size();i++){
            if(s[i]!='0') {
                continue;
            }
 
            string a=eraseChar(s,i);
 
            string best="";
            bool start=true;
 
            for(int j=0;j<a.size();j++){
                if(a[j]!='1'){
                    continue;
                }
                string b=eraseChar(a,j);
                if(start||b<best){
                    best=b;
                    start=false;
                }
            }
 
            if(first||best>ans){
                ans=best;
                first=false;
            }
        }
 
        cout<<ans<<endl;
    }
 
}