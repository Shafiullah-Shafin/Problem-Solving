#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        char a[n + 2][m + 2];
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> a[i][j];
            }
        }
        for (int j = 1; j <= m; j++) {
            int ob_pos = n + 1, bug_set = ob_pos - 1;
            for (int i = n; i >= 1; i--) {
                if (a[i][j] == 'o') {
                    ob_pos = i;
                    bug_set = ob_pos - 1;
                }
                else if (a[i][j] == '*') {
                    a[i][j] = '.';
                    a[bug_set][j] = '*';
                    bug_set--;
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cout << a[i][j];
            }
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}
