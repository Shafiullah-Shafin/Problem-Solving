#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, one = 0; cin >> n;
        int a[n + 2];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i == 0 || i == n - 1)
                continue;
            else if (a[i] == 1) {
                    one++;
            }
        }
        if ((n == 3 && a[1] % 2 != 0) || one == n - 2) {
            cout << -1 << '\n';
            continue;
        }
        long long tot = 0;
        for (int i = 1; i < n - 1; i++) {
            if (a[i] % 2 == 0) {
                tot += a[i] / 2;
            }
            else {
                a[i]++;
                tot += a[i] / 2;
            }
        }
        cout << tot << '\n';
    }
    return 0;
}
