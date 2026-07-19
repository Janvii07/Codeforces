#include<iostream>
#include<string>
using namespace std;
 
int main(){
    int num,sub;
    cin>>num>>sub;
 
    for(int i=1;i<sub+1;i++){
        if(num%10==0){
            num=num/10;
        }
        else num-=1;
    }
    cout<<num<<endl;
}