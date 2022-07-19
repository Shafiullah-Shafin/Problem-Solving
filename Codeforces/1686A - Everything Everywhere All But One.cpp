#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        float a[n + 2];
        float sum = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        bool ok = false;
        for (int i = 1; i <= n; i++) {
            if (a[i] == (sum - a[i]) / ((n - 1) * 1.0)) {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
