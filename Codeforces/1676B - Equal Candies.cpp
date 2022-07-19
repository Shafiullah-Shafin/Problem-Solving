#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2];
        int mn = (1 << 30);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            mn = min(mn, a[i]);
        }
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            ans += a[i] - mn;
        }
        cout << ans << '\n';
    }
    return 0;
}
