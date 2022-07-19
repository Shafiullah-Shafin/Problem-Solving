#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2];
        long long b[n + 2];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        sort (a + 1, a + n + 1);
        bool tt = false;
        long long suml = a[1], sumr = 0;
        for (int i = 2, j = n; i < j; i++, j--) {
            suml += a[i];
            sumr += a[j];
            if (suml < sumr) {
                tt = true;
                break;
            }
        }
        cout << (tt ? "YES" : "NO") << '\n';
    }
    return 0;
}

