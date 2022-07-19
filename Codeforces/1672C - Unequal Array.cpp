#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2];
        int mx = 0, mn = n + 2;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (i > 1 && a[i] == a[i - 1]) {
               mx = max(mx, i);
               mn = min(mn, i);
            }
        }
        int ans = 0;
        if (mn < mx) ans = max(1, mx - mn - 1);
        cout << ans << '\n';
  }
  return 0;
}
