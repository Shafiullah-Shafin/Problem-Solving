#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2];
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (i > 1) {
               int mn = a[i - 1], mx = a[i];
               if (mn > mx) swap (mn, mx);
               while (mx > 2 * mn ) {
                     ans++;
                     mn *= 2;
               }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}


