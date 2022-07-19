#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q, k; cin >> n >> q >> k;
    int a[n + 2];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    while (q--) {
       int l, r; cin >> l >> r;
       if (r > l) {
          int ans = (a[r] - 1) - (r-l) + (k - a[l]) - (r-l);
          cout << ans << '\n';
       }
       else {
          cout << k - 1 << '\n';
       }
    }
    return 0;
}
