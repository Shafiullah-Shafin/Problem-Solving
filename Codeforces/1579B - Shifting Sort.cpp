#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2], b[n + 2];
        bool ok = true;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            b[i] = a[i];
            if (i != 1) {
                if (a[i] < a[i - 1]) ok = false;
            }
        }
        if (ok) {
            cout << 0 << '\n';
            continue;
        }
        vector<int> v;
        sort(b + 1, b + n + 1);
        map<pair<int, int>, int> mp;
        for (int i = 1; i <= n; i++) {
            if (a[i] == b[i]) continue;
            else {
                v.clear();
                int cnt = 1;
                v.push_back(a[i]);
                for (int j = i + 1; j <= n; j++) {
                    if (a[j] == b[i]) {
                       a[i] = a[j];
                       mp[{i, j}] = cnt;
                       break;
                    }
                    else {
                       v.push_back(a[j]);
                       cnt++;
                    }
                }
                for (int k = i + 1, j = 0; j < cnt; j++, k++) {
                    a[k] = v[j];
                }
            }
        }
        cout << (int)mp.size() << '\n';
        for (auto x : mp) {
            cout << x.first.first << ' ' << x.first.second << ' ' << x.second << '\n';
        }
    }
    return 0;
}
