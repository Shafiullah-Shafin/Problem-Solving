#include<bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, k = 0; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        int cnt = 0;
        bool ok = true;
        for (int i = n - 1; i && ok; i--) {
            if (a[i] >= a[i + 1]) {
                while (a[i] >= a[i + 1]) {
                    if (a[i] == 0) {
                        ok = false;
                        break;
                    }
                    a[i] /= 2;
                    cnt++;
                }
            }
        }
        if (!ok) cout << -1 << '\n';
        else cout << cnt << '\n';
    }
    return 0 ;
}
