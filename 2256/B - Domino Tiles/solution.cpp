#include <iostream>
using namespace std;
 
const long long MOD = 998244353;
 
int main() {
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        long long ans = 1;
 
        for (int p = 0; p < 2; p++) {
            int w = 0;
 
            for (int f = 0; f <= 1; f++) {
                bool ok = true;
 
                for (int i = p; i < n; i += 2) {
                    int pos = (i - p) / 2;
                    int expct= f ^ (pos % 2);
 
                    if (s[i] != '?' && s[i] - '0' != expct) {
                        ok = false;
                        break;
                    }
                }
 
                if (ok)
                    w++;
            }
 
            ans = ans * w % MOD;
        }
 
        cout << ans <<endl;
    }
 
}