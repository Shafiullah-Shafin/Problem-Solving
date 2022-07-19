#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2];
        bool ok = true;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (a[i]) ok = false;
        }
        if (ok) {
            cout << 0 << '\n';
            continue;
        }
        int pos1 = 1, pos2 = n;
        for (int i = 1; i <= n; i++) {
            if (a[i] != 0) {
                pos1 = i;
                break;
            }
        }
        for (int i = n; i >= 1; i--) {
            if (a[i] != 0) {
                pos2 = i;
                break;
            }
        }
        int mn = (1 << 30);
        for (int i = pos1; i <= pos2; i++) {
            mn = min(a[i], mn);
        }
        if (mn == 0) cout << 2 << '\n';
        else cout << 1 << '\n';
    }
    return 0;
}
