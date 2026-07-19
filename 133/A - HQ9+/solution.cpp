#include<iostream>
#include<string>
using namespace std;
 
int main(){
    string s;
    cin>>s;
 
    if(s.find('H')!=-1 ||s.find('Q')!=-1 ||s.find('9')!=-1   ) cout<<"YES";
    else cout<<"NO";
}
 