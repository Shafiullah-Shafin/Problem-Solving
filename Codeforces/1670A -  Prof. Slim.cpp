#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2];
        int neg = 0;
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            if (x < 0) neg++;
            a[i] = abs(x);
        }
        for (int i = 1; i <= neg; i++) {
            a[i] *= -1;
        }
        bool ok = true;
        for (int i = 2; i <= n; i++) {
            if (a[i] < a[i-1]) {
               ok = false;
               break;
            }
        }
        if (ok) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
