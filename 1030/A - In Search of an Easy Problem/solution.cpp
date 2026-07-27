#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int> v;
 
 
    int ans=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
        if(a==1) ans=1;
    }
 
    if(ans==0){
        cout<<"EASY";
    }else{
        cout<<"HARD";
    }
 
}