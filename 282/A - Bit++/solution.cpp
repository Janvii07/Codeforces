#include <iostream>
#include <string>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int ans=0;
 
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
 
        if(str=="++X" ||str=="X++") ans++;
        if(str=="--X" || str=="X--") ans--;
 
    }
    cout<<ans;
}