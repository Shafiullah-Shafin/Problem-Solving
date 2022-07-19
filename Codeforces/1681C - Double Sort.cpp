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
        vector<pair<int, int>> v;
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                if (a[i] > a[j]) {
                    swap(a[i], a[j]);
                    swap(b[i], b[j]);
                    v.push_back({i, j});
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                if (b[i] > b[j]) {
                    swap(a[i], a[j]);
                    swap(b[i], b[j]);
                    v.push_back({i, j});
                }
            }
        }
        bool ok = true;
        for (int i = 2; i <= n; i++) {
            if (a[i] < a[i - 1] || b[i] < b[i - 1]) {
               ok = false;
               break;
            }
        }
        if (!ok) cout << -1 << '\n';
        else {
            cout << (int)v.size() << '\n';
            for (auto x : v) {
                cout << x.first << ' ' << x.second << '\n';
            }
        }
    }
    return 0;
}
