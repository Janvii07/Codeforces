#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n,k;
    cin>>n>>k;
 
    vector<int> arr(n);
 
    for(int i=0;i<n;i++){
        cin>>arr[i];
 
    }
    int ans=0;
    int check=arr[k-1];
 
    for(int i=0;i<n;i++){
        if(arr[i]>0 && arr[i]>=check){
            ans+=1;
        }else break;
        
    }
    cout<<ans;
    return 0;
}