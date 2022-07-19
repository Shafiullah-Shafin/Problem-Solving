#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int x; cin >> x;
        int y = x;
        if (x == 1) {
            cout << 3 << '\n';
            continue;
        }
        int one = 30;
        if (x & 1) {
            int ans = 1;
            cout << ans << '\n';
        }
        else {
            for (int i = 0; i <= 30; i++) {
                if ((x >> i) & 1) {
                   one = i;
                   break;
                }
            }
            int ans = (1 << one);
            if (__builtin_popcount(y) == 1) ans = y + 1;
            cout << ans << '\n';
        }
    }
    return 0;
}

