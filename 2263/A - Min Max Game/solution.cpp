#include <iostream>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
 
    while(t--){
        int n;
        cin>>n;
        int o=0;
        int i=0;
 
        while(i<n){
            int a;cin>>a;
            if(a==1){
                o++;
            }
            i++;
        }
        int b=n-o;
 
        if(o>=b){
            cout<<"Bessie"<<endl;
        }else{
            cout<<"Elsie"<<endl;
        }
    }
 
    
}