#include <iostream>
#include <vector>
using namespace std;
 
bool isPowerOfTwo(long long n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}
 
 
int main()
{
    int m;
    cin >> m;
 
    vector<long long> v(m);
 
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
 
    for(int i=0;i<v.size();i++){
 
        if(v[i]==1 || isPowerOfTwo(v[i])){
            cout<<"NO"<<endl;
        }
        else{
            cout << "YES"<<endl;
        }
    }
}