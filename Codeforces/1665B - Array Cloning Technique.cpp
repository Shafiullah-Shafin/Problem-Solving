#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map<int, int> mp;
        int mx = -10^9;
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            mp[x]++;
            mx = max(mx, mp[x]);
        }
        if (n == 1 || mx == n) {
            cout << 0 << '\n';
            continue;
        }
        if (n == 2) {
            if (mx == 1) {
                 cout << 2 << '\n';
                 continue;
            }
            else {
                 cout << 0 << '\n';
                 continue;
            }
        }
        int cur, tot = mx, op = 0;
        while (tot < n) {
            op++;
            cur = tot;
            while (tot < n && cur) {
                 tot++;
                 cur--;
                 op++;
            }
        }
        cout << op << '\n';
    }
    return 0;
}



