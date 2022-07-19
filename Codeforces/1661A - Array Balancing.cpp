#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2], b[n + 2];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++) {
            cin >> b[i];
        }
        for (int i = 1; i <= n; i++) {
            if (a[i] > b[i]) swap(a[i], b[i]);
        }
        long long ans = 0;
        a[0] = a[1], b[0] = b[1];
        for (int i = 1; i <= n; i++) {
            ans += abs(a[i] - a[i - 1]);
            ans += abs(b[i] - b[i - 1]);
        }
        cout << ans << '\n';
    }
    return 0;
}


