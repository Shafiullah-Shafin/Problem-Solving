#include <bits/stdc++.h>
using namespace std;
#define i64 long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2];
        bool tt = true;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        i64 lc = 2;
        if (a[1] % 2 == 0) tt = false;
        for (int i = 2; i <= n && tt; i++) {
            lc = (lc * (i + 1)) / __gcd(lc, (i64)(i + 1));
            if (a[i] % lc == 0)
                tt = false;
        }
        if (tt) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
