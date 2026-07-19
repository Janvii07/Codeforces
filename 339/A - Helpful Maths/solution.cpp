#include <iostream>
#include<string>
#include <algorithm>
using namespace std;
 
int main(){
    string s;
    cin>>s;
 
    string k;
 
    for(int i=0;i<s.length();i+=2){
        k+=s[i];
    }
 
    sort(k.begin(),k.end());
 
    string n;
 
    for(int i=0;i<k.length();i++){
        n+=k[i];
        n+='+';
    }
    n.erase(n.length()-1);
 
    cout<<n;
 
    
 
 
}