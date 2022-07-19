#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        char a[n + 2][m + 2];
        int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> a[i][j];
            }
        }
        bool ok = true;
        for (int i = 1; i <= n && ok; i++) {
            for (int j = 1; j <= m; j++) {
                if (a[i][j] == 'R') {
                   x1 = i, y1 = j;
                   ok = false;
                   break;
                }
            }
        }
        ok = true;
        for (int j = 1; j < y1; j++) {
            for (int i = 1; i <= n; i++) {
                if (a[i][j] == 'R') {
                   ok = false;
                   break;
                }
            }
        }
        if (a[1][1] == 'R') {
            cout << "YES" << '\n';
            continue;
        }
        if (ok)  cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
