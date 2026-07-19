#include <iostream>
using namespace std;
 
int main(){
    int a,b;
    cin>>a>>b;
 
    int i=1;
    while(a<b){
        a=a*3;
        b=b*2;
 
        if(a>b){
            break;
        }
        i++;
 
    }
    cout<<i<<endl;
}