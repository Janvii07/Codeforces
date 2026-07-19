#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
 
int main(){
    vector<vector<int> > mat(5, vector<int>(5));
    int p,q;
 
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> mat[i][j];  // read each element
            if(mat[i][j]==1){
                p=i;
                q=j;
            }
        }
    }
    cout<<(abs(p-2)+abs(q-2))<<endl;
 
}