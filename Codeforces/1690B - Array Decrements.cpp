#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2], b[n + 2];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++) {
            cin >> b[i];
        }
        int mx = 0;
        bool ok = true;
        for (int i = 1; i <= n; i++) {
            if (b[i] > a[i]) {
                ok = false;
                break;
            }
            mx = max(mx, a[i] - b[i]);
        }
        if (!ok) {
            cout << "NO" << '\n';
            continue;
        }
        for (int i = 1; i <= n; i++) {
            a[i] = max(0, a[i] - mx);
        }
        for (int i = 1; i <= n; i++) {
            if (a[i] != b[i]) {
                ok = false;
                break;
            }
        }
        if (!ok) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    return 0;
}

