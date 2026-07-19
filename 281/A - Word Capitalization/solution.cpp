#include <iostream>
#include<string>
#include <algorithm>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    if(s[0]>='A' && s[0]<='Z') cout<<s;
    else{
        s[0]=char(s[0]+'A'-'a');
        cout<<s<<endl;
    }
}