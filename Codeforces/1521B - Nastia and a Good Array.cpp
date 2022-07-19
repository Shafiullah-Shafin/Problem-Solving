#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int mn = (1 << 30), pos;
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            mn = min (x, mn);
            if (mn == x) pos = i;
        }
        cout << n - 1 << '\n';
        for (int i = 1; i <= n; i++) {
            if (i == pos) continue;
            cout << pos << ' ' << i << ' ' << mn << ' ' << mn + abs(i - pos) << '\n';
        }
    }
    return 0;
}
