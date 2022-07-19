#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        bool ok = true;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1] + 1) ok = false;
        }
        if (ok) cout << 1 << '\n';
        else cout << 2 << '\n';
    }
    return 0;
}
