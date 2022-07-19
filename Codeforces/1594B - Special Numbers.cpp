#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        long long ans = 0, cur = 1;
        for (int i = 0; i < 31; i++) {
            if ((k >> i) & 1) {
                ans = (ans + cur) % mod;
            }
            cur = (cur * n) % mod;
        }
        cout << ans << '\n';
    }
    return 0;
}


