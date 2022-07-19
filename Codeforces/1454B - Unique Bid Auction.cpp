#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2];
        map<int, int> mp;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        bool ok = false;
        int mn = n + 1;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if ((*it).second == 1) {
               ok = true;
               mn = min(mn, (*it).first);
            }
        }
        if (!ok) {
            cout << -1 << '\n';
            continue;
        }
        for (int i = 1; i <= n; i++) {
            if (mn == a[i]) cout << i << '\n';
        }
    }
    return 0;
}

