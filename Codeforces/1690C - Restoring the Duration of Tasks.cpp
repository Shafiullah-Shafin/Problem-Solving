#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2], f[n + 2];
        f[0] = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++) {
            cin >> f[i];
        }
        for (int i = 1; i <= n; i++) {
            int mx = max(a[i], f[i - 1]);
            cout << f[i] - mx << ' ';
        }
        cout << '\n';
    }
    return 0;
}
