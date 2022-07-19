#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        char s[n + 2][m + 2];
        for (int i = 1; i <= n; i++) {
            for (int k = 0; k < m; k++) {
                cin >> s[i][k];
            }
        }
        int mn = (1 << 30);
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                int cnt = 0;
                for (int k = 0; k < m; k++) {
                    cnt += abs(s[i][k] - s[j][k]);
                }
                mn = min(cnt, mn);
            }
        }
        cout << mn << '\n';
    }
    return 0;
}
