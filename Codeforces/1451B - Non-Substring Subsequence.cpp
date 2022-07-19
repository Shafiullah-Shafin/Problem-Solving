#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, q; cin >> n >> q;
        char a[n + 2];
        vector<pair<int, int>> v(n + 1);
        int zero = 0, one = 0;
        for (int i = 1; i <= n; i++) {
            char x; cin >> x;
            if (x == '0') zero++;
            else one++;
            v[i].first = one;
            v[i].second = zero;
            a[i] = x;
        }
        while (q--) {
            int l, r; cin >> l >> r;
            bool ok1 = false, ok2 = false;
            if (a[r] == '1' && v[n].first - v[r].first) ok1 = true;
            if (a[r] == '0' && v[n].second - v[r].second) ok1 = true;
            if (a[l] == '1' && v[l - 1].first) ok2 = true;
            if (a[l] == '0' && v[l - 1].second) ok2 = true;
            if (ok1 || ok2) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
    }
    return 0;
}
