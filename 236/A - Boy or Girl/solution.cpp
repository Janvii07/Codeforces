#include <iostream>
#include <string>
#include<set>
using namespace std;
 
 
int main(){
    string s;
    cin>>s;
 
    set<char> uniqueS;
 
    for(int i=0;i<s.length();i++){
        uniqueS.insert(s[i]);
 
    }
 
    if(uniqueS.size()%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
 
}