#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int onbit[32] = {0};
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            for (int j = 0; j <= 30; j++) {
                if (x & (1 << j)) {
                   onbit[j]++;
                }
            }
        }
        int ans = 0;
        for (int j = 30; j >= 0; j--) {
            if (n - onbit[j] <= k) {
                k -= (n - onbit[j]);
                ans += (1 << j);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}





