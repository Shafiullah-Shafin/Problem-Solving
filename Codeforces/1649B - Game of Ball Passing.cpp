#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
       int n, mx = -1; cin >> n;
       int a[n + 2];
       long long ans, sum = 0;
       for (int i = 1; i <= n; i++) {
           cin >> a[i];
           sum += a[i];
           mx = max (mx, a[i]);
       }
       sum -= mx;
       if (sum + mx == 0) ans = 0;
       else if (sum >= mx - 1) ans = 1;
       else ans = mx - sum;
       cout << ans << '\n';
    }
    return 0;
}
