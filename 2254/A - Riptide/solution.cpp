#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        int rounds = 0;
        while (true) {
            if (a == b || b == c || a == c) break;
            vector<int> v = {a, b, c};
            sort(v.begin(), v.end());
            v[0]++; 
            v[2]--;
            a = v[0]; b = v[1]; c = v[2];
            rounds++;
        }
        cout << rounds << endl;
        
    }
}