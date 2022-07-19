#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        int a[n + 2][m + 2];
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> a[i][j];
            }
        }
        int ans = -1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                int cnt = a[i][j];
                for (int k = i + 1, l = j + 1; k <= n && l <= m; k++, l++) {
                    cnt += a[k][l];
                }
                for (int k = i - 1, l = j + 1; k >= 1 && l <= m; k--, l++) {
                    cnt += a[k][l];
                }
                for (int k = i + 1, l = j - 1; k <= n && l >= 1; k++, l--) {
                    cnt += a[k][l];
                }
                for (int k = i - 1, l = j - 1; k >= 1 && l >= 1; k--, l--) {
                    cnt += a[k][l];
                }
                ans = max (ans, cnt);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
