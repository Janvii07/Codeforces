#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
const ll MOD = 1000000007;
 
int main() {
 
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n + 1);
 
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
 
        vector<int> diff(n + 1);
 
        for (int k = 1; k <= n; k++) {
            int l = k * a[k];
            int r = min(n - 1, k * (a[k] + 1) - 1);
 
            if (l <= r) {
                diff[l]++;
                diff[r + 1]--;
            }
        }
 
        vector<int> need(n, -1);
 
        for (int k = 1; k <= n; k++) {
            long long v = 1LL * k * a[k];
 
            for (int x = k; x < n; x += k) {
                if (need[x - 1] == -1 && v >= x) {
                    need[x - 1] = x - k;
                }
            }
 
            if (v >= n) {
                need[n - 1] = max(need[n - 1], (a[k] - 1) * k);
            }
        }
 
        vector<ll> dp(n);
 
        ll total = 1;
        bool zeroState = true;
        int cut = 0;
        int blocked = 0;
 
        for (int i = 0; i < n; i++) {
            ll oldTotal = total;
 
            blocked += diff[i];
 
            if (blocked == 0) {
                dp[i] = oldTotal;
                total = (total + oldTotal) % MOD;
            }
 
            if (need[i] != -1) {
                if (zeroState) {
                    total--;
 
                    if (total < 0) {
                        total += MOD;
                    }
 
                    zeroState = false;
                }
 
                if (need[i] > cut) {
                    for (int j = cut; j < need[i]; j++) {
                        total -= dp[j];
 
                        if (total < 0) {
                            total += MOD;
                        }
                    }
 
                    cut = need[i];
                }
            }
        }
 
        cout << total << '
';
    }
 
    return 0;
}