#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, st = 0; cin >> n;
        int a[n + 2];
        bool yo = true;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (yo && a[i] && i < n) {
                yo = false;
                st = i;
            }
        }
        if (st == 0) {
            cout << 0 << '\n';
            continue;
        }
        long long cnt = 0;
        for (int i = st; i < n; i++) {
            if (a[i]) cnt += a[i];
            else cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}
