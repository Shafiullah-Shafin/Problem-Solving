#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2];
        int even = 0, odd = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (a[i] & 1) odd++;
            else even++;
        }
        if (odd) {
            cout << even << '\n';
            continue;
        }
        int mn = (1 << 30);
        for (int i = 1; i <= n; i++) {
            int op = 0;
            while (!(a[i] & 1)) {
                  a[i] /= 2;
                  op++;
            }
            mn = min(mn, op);
        }
        cout << mn + n - 1 << '\n';
    }
    return 0;
}

