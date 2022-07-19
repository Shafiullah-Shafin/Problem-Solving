#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int a[n + 2], b[n + 2];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    map<pair<double, double>, int> mp;
    int zero = 0, mx = 0;
    for (int i = 1; i <= n; i++) {
        if (!a[i]) {
            if (!b[i]) zero++;
        }
        else {
            int gcd = __gcd(a[i], b[i]);
            a[i] /= gcd;
            b[i] /= gcd;
            mp[{a[i], b[i]}]++;
            mx = max(mx, mp[{a[i], b[i]}]);
        }
    }
    cout << zero + mx << '\n';
    return 0;
}
