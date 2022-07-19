#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q; cin >> q;
    while (q--) {
        int n; cin >> n;
        n *= 4;
        int a[n + 2];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        int prev = a[1] * a[n];
        bool ok = true;
        for (int i = 1, j = n; i < j; i += 2, j -= 2) {
            if (a[i] != a[i + 1] || a[j] != a[j - 1] || a[i] * a[j] != prev) {
                ok = false;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
