#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, l, r; cin >> n >> l >> r;
        bool yo = true;
        int a[n + 2];
        for (int i = 1; i <= n; i++) {
            long long x = i;
            long long d = l / x;
            if (l % x == 0) a[i] = l;
            else {
                if (i * (d + 1) > r) {
                    yo = false;
                    break;
                }
                else {
                    a[i] = i * (d + 1);
                }
            }
        }
        if (!yo) {
            cout << "NO" << '\n';
        }
        else {
            cout << "YES" << '\n';
            for (int i = 1; i <= n; i++) {
                cout << a[i] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}

